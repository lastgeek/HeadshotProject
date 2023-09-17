// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPWeaponComponent.h"
#include "Weapon/HPBaseWeapon.h"
#include "GameFramework/Character.h"
#include "Player/HPBaseCharacter.h"
#include "Animations/HPEquipFinishAnimNotify.h"
#include "Animations/HPReloadFinishAnimNotify.h"
#include "Animations/HPClipEjectAnimNotify.h"
#include "Animations/AnimUtils.h"

UHPWeaponComponent::UHPWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHPWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentWeaponIndex = 0;
	SpawnWeapons();
	IntiAnimation();
	EquipWeapon(CurrentWeaponIndex);
}

void UHPWeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	CurrentWeapon = nullptr;
	for (auto Weapon : Weapons)
	{
		Weapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		Weapon->Destroy();
	}
	Weapons.Empty();

	Super::EndPlay(EndPlayReason);
}

void UHPWeaponComponent::SpawnWeapons()
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player || !GetWorld()) return;

	for (auto OneWeaponData : WeaponData)
	{
		auto Weapon = GetWorld()->SpawnActor<AHPBaseWeapon>(OneWeaponData.WeaponClass);
		if (!Weapon) continue;

		Weapon->OnClipEmpty.AddUObject(this, &UHPWeaponComponent::OnEmptyClip);
		Weapon->SetOwner(Player);
		Weapons.Add(Weapon);

		AttachWeaponToSocket(Weapon, Player->GetMesh(), WeaponArmorySocketName);
	}
}

void UHPWeaponComponent::AttachWeaponToSocket(AHPBaseWeapon* Weapon, USceneComponent* SceneComponent, FName& SocketName)
{
	if (!Weapon || !SceneComponent) return;
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
	Weapon->AttachToComponent(SceneComponent, AttachmentRules, SocketName);
}

void UHPWeaponComponent::EquipWeapon(int32 WeaponIndex)
{
	if (WeaponIndex < 0 || WeaponIndex >= Weapons.Num()) return;
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player) return;

	if (CurrentWeapon)
	{
		StopFire();
		AttachWeaponToSocket(CurrentWeapon, Player->GetMesh(), WeaponArmorySocketName);
	}

	CurrentWeapon = Weapons[WeaponIndex];

	const auto CurrentWeaponData = WeaponData.FindByPredicate([&](const FWeaponData& Data) { return Data.WeaponClass == CurrentWeapon->GetClass(); });
	CurrentReloadAnimMontage = CurrentWeaponData ? CurrentWeaponData->ReloadAnimMontage : nullptr;

	AttachWeaponToSocket(CurrentWeapon, Player->GetMesh(), WeaponEquipSocketName);
	bEquiptInProgress = true;
	PlayAnimMontage(EquipAnimMontage);
}

void UHPWeaponComponent::PlayAnimMontage(UAnimMontage* Animation)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player) return;
	Player->PlayAnimMontage(Animation);
}

void UHPWeaponComponent::IntiAnimation()
{
	auto EquiptFinishedNotify = AnimUtils::FindNotifyByClass<UHPEquipFinishAnimNotify>(EquipAnimMontage);
	if (EquiptFinishedNotify)
	{
		EquiptFinishedNotify->OnNotified.AddUObject(this, &UHPWeaponComponent::OnEquiptFinished);
	}

	for (auto OneWeaponData : WeaponData)
	{
		auto ClipEjectNotify = AnimUtils::FindNotifyByClass<UHPClipEjectAnimNotify>(OneWeaponData.ReloadAnimMontage);
		if (!ClipEjectNotify) continue;

		ClipEjectNotify->OnNotified.AddUObject(this, &UHPWeaponComponent::OnClipEject);
		auto ReloadFinishedNotify = AnimUtils::FindNotifyByClass<UHPReloadFinishAnimNotify>(OneWeaponData.ReloadAnimMontage);
		if (!ReloadFinishedNotify) continue;

		ReloadFinishedNotify->OnNotified.AddUObject(this, &UHPWeaponComponent::OnReloadFinished);
	}
}

void UHPWeaponComponent::OnClipEject(USkeletalMeshComponent* MeshComp)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player && Player->GetMesh() == MeshComp) return;

	CurrentWeapon->ChangeClip();
}

void UHPWeaponComponent::OnEquiptFinished(USkeletalMeshComponent* MeshComp)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player && Player->GetMesh() == MeshComp) return;

	bEquiptInProgress = false;
}

void UHPWeaponComponent::OnReloadFinished(USkeletalMeshComponent* MeshComp)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player && Player->GetMesh() == MeshComp) return;

	bReloadInProgress = false;
	CurrentWeapon->UpdateBullets();
}

bool UHPWeaponComponent::CanFire()
{
	AHPBaseCharacter* Player = Cast<AHPBaseCharacter>(GetOwner());
	return CurrentWeapon && !Player->bIsRunning && !bEquiptInProgress && !bReloadInProgress;
}

bool UHPWeaponComponent::CanReload()
{
	return CurrentWeapon && !bReloadInProgress && !bEquiptInProgress && CurrentWeapon->CanReload();
}

void UHPWeaponComponent::OnEmptyClip(AHPBaseWeapon* AmmoEmptyWeapon)
{
	if (!AmmoEmptyWeapon) return;

	if (CurrentWeapon == AmmoEmptyWeapon)
	{
		ChangeClip();
	}
	else
	{
		for (const auto Weapon : Weapons)
		{
			if (Weapon == AmmoEmptyWeapon)
			{
				Weapon->ChangeClip();
				Weapon->UpdateBullets();
			}
		}
	}
}

void UHPWeaponComponent::ChangeClip()
{
	if (!CanReload()) return;
	bReloadInProgress = true;
	CurrentWeapon->StopFire();
	//CurrentWeapon->ChangeClip();
	PlayAnimMontage(CurrentReloadAnimMontage);
}

void UHPWeaponComponent::StartFire()
{
	if (CanFire())
	{
		CurrentWeapon->StartFire();
	}
}

void UHPWeaponComponent::StopFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}

void UHPWeaponComponent::NextWeapon()
{
	if (CanEquip())
	{
		CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
		EquipWeapon(CurrentWeaponIndex);
	}
}

void UHPWeaponComponent::Reload()
{
	ChangeClip();
}

bool UHPWeaponComponent::GetWeaponUIData(FWeaponUIData& UIData) const
{
	if (CurrentWeapon)
	{
		UIData = CurrentWeapon->GetUIData();
		return true;
	}
	return false;
}

bool UHPWeaponComponent::GetCurrentAmmo(FAmmoData & CurrentAmmo) const
{
	if (CurrentWeapon)
	{
		CurrentAmmo = CurrentWeapon->GetCurrentAmmo();
		return true;
	}
	return false;
}

bool UHPWeaponComponent::TryToAddAmmo(TSubclassOf<AHPBaseWeapon> WeaponType, int32 ClipsAmount)
{
	for (const auto Weapon : Weapons)
	{
		if (Weapon && Weapon->IsA(WeaponType))
		{
			return Weapon->TryToAddAmmo(ClipsAmount);
		}
	}
	return false;
}