// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HPCoreTypes.h"
#include "HPBaseWeapon.generated.h"


UCLASS()
class HEADSHOTPROJECT_API AHPBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	AHPBaseWeapon();

	FOnClipEmptySignature OnClipEmpty;

	void ChangeClip();
	bool CanReload();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shot Settings")
	float TraceMaxDistance = 1500.f;

	virtual void StartFire();
	virtual void StopFire();

	virtual void MakeShot();

	bool CheckAngle(FTransform Muzzle, const FHitResult& HitResult);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shot Settings")
	float DamageAmount = 10.f;

	FTransform GetMuzzleTransform();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon Settings")
	FAmmoData DefaultAmmo = { 15, 10, false };

	FWeaponUIData GetUIData() const { return UIData; }

	FAmmoData GetCurrentAmmo() const { return CurrentAmmo; }

	void UpdateBullets();

	bool TryToAddAmmo(int32 ClipsAmount);

protected:
	virtual void BeginPlay() override;
	
	class AController* GetPlayerController();

	bool GetPlayerViewPoint(FVector& PlayerViewLocation, FRotator& PlayerViewRotation);

	virtual bool GetTraceData(FVector& StartLineTrace, FVector& EndLineTrace);

	void MakeDamage(const FHitResult& HitResult);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI Settings")
	FWeaponUIData UIData;

	void DecreaseAmmo();
	bool IsAmmoEmpty() const;
	bool IsClipEmpty() const;
	bool IsAmmoFull() const;

private:
	FAmmoData CurrentAmmo;

};
