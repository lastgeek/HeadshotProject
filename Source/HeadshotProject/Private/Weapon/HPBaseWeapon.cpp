// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Weapon/HPBaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

AHPBaseWeapon::AHPBaseWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);
}

void AHPBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	CurrentAmmo = DefaultAmmo;
}

void AHPBaseWeapon::StartFire()
{

}

void AHPBaseWeapon::StopFire()
{

}

void AHPBaseWeapon::MakeShot()
{
	
}

bool AHPBaseWeapon::CheckAngle(FTransform Muzzle, const FHitResult& HitResult)
{
	float FireAngleRadian = FMath::Acos(FVector::DotProduct(Muzzle.GetRotation().Vector().GetSafeNormal(), (Muzzle.GetLocation() - HitResult.ImpactPoint).GetSafeNormal()));
	float FireAngle = FMath::RadiansToDegrees(FireAngleRadian);

	return FMath::Abs(FireAngle) > 90.f;
}

AController* AHPBaseWeapon::GetPlayerController()
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (!Player) return nullptr;
	AController* PlayerController = Player->GetController();
	return PlayerController;
}

bool AHPBaseWeapon::GetPlayerViewPoint(FVector& PlayerViewLocation, FRotator& PlayerViewRotation)
{
	AController* PlayerController = GetPlayerController();
	if (!PlayerController) return false;

	PlayerController->GetPlayerViewPoint(PlayerViewLocation, PlayerViewRotation);
	return true;
}

bool AHPBaseWeapon::GetTraceData(FVector& StartLineTrace, FVector& EndLineTrace)
{
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	if (!GetPlayerViewPoint(PlayerViewLocation, PlayerViewRotation)) return false;

	StartLineTrace = PlayerViewLocation;
	EndLineTrace = PlayerViewLocation + PlayerViewRotation.Vector() * TraceMaxDistance;
	return true;
}

void AHPBaseWeapon::MakeDamage(const FHitResult& HitResult)
{
	const auto Enemy = HitResult.GetActor();
	if (!Enemy) return;
	Enemy->TakeDamage(DamageAmount, FDamageEvent(), GetPlayerController(), this);
}

FTransform AHPBaseWeapon::GetMuzzleTransform()
{
	if (!WeaponMesh) return FTransform(FRotator::ZeroRotator, FVector::ZeroVector);
	return WeaponMesh->GetSocketTransform("MuzzleSocket");
}

void AHPBaseWeapon::DecreaseAmmo() 
{
	if (CurrentAmmo.Bullets <= 0) return;
	CurrentAmmo.Bullets--;

	if (IsClipEmpty() && !IsAmmoEmpty())
	{
		StopFire();
		OnClipEmpty.Broadcast(this);
	}
}
bool AHPBaseWeapon::IsAmmoEmpty() const
{
	return !CurrentAmmo.bIsInfinit && CurrentAmmo.Clips == 0 && IsClipEmpty();
}
bool AHPBaseWeapon::IsClipEmpty() const
{
	return CurrentAmmo.Bullets <= 0;
}
bool AHPBaseWeapon::IsAmmoFull() const
{
	return CurrentAmmo.Clips == DefaultAmmo.Clips && CurrentAmmo.Bullets == DefaultAmmo.Bullets;
}
void AHPBaseWeapon::ChangeClip() 
{
	if (!CurrentAmmo.bIsInfinit)
	{
		if (CurrentAmmo.Clips == 0) return;
		CurrentAmmo.Clips--;
	}
	CurrentAmmo.Bullets = 0;
	//CurrentAmmo.Bullets = DefaultAmmo.Bullets;
}
bool AHPBaseWeapon::CanReload()
{
	return CurrentAmmo.Bullets < DefaultAmmo.Bullets && CurrentAmmo.Clips > 0;
}

void AHPBaseWeapon::UpdateBullets()
{
	CurrentAmmo.Bullets = DefaultAmmo.Bullets;
}

bool AHPBaseWeapon::TryToAddAmmo(int32 ClipsAmount)
{
	if (CurrentAmmo.bIsInfinit || IsAmmoFull() || ClipsAmount <= 0) return false;

	if (IsAmmoEmpty())
	{
		CurrentAmmo.Clips = FMath::Clamp(ClipsAmount, 0, DefaultAmmo.Clips + 1);
		OnClipEmpty.Broadcast(this);
	}
	else if (CurrentAmmo.Clips < DefaultAmmo.Clips)
	{
		const auto NextClipsAmount = CurrentAmmo.Clips + ClipsAmount;
		if (DefaultAmmo.Clips - NextClipsAmount >= 0)
		{
			CurrentAmmo.Clips = NextClipsAmount;
		}
		else
		{
			CurrentAmmo.Clips = DefaultAmmo.Clips;
			CurrentAmmo.Bullets = DefaultAmmo.Bullets;
		}
	}
	else
	{
		CurrentAmmo.Bullets = DefaultAmmo.Bullets;
	}

	return true;
}
