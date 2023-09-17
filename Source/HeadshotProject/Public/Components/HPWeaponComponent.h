// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HPCoreTypes.h"
#include "HPWeaponComponent.generated.h"

class AHPBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEADSHOTPROJECT_API UHPWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHPWeaponComponent();

	void StartFire();
	void StopFire();
	void NextWeapon();
	void Reload();

	bool GetWeaponUIData(FWeaponUIData& UIData) const;
	bool GetCurrentAmmo(FAmmoData& CurrentAmmo) const;
	//AHPBaseWeapon* GetCurrentWeapon() { return CurrentWeapon; }
	bool IsWeaponCanFire() const { return !bReloadInProgress && !bEquiptInProgress; }

	bool TryToAddAmmo(TSubclassOf<AHPBaseWeapon> WeaponType, int32 ClipsAmount);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	TArray<FWeaponData> WeaponData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName WeaponEquipSocketName = "WeaponSocket";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	FName WeaponArmorySocketName = "ArmorySocket";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* EquipAnimMontage;

	UPROPERTY()
	int32 CurrentWeaponIndex = 0;

	bool bEquiptInProgress = false;
	bool bReloadInProgress = false;

	void SpawnWeapons();
	void AttachWeaponToSocket(AHPBaseWeapon* Weapon, USceneComponent* SceneComponent, FName& SocketName);
	void EquipWeapon(int32 WeaponIndex);
	void PlayAnimMontage(UAnimMontage* Animation);
	void IntiAnimation();
	void OnEquiptFinished(USkeletalMeshComponent* MeshComp);
	void OnReloadFinished(USkeletalMeshComponent* MeshComp);
	void OnClipEject(USkeletalMeshComponent* MeshComp);
	bool CanFire();
	bool CanEquip() { return !bEquiptInProgress && !bReloadInProgress; }
	bool CanReload();

private:
	UPROPERTY()
	AHPBaseWeapon* CurrentWeapon = nullptr;

	UPROPERTY()
	UAnimMontage* CurrentReloadAnimMontage = nullptr;

	UPROPERTY()
	TArray<AHPBaseWeapon*> Weapons;

	void OnEmptyClip(AHPBaseWeapon* AmmoEmptyWeapon);
	void ChangeClip();

};