// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/HPBaseWeapon.h"
#include "HPRifleWeapon.generated.h"

UCLASS()
class HEADSHOTPROJECT_API AHPRifleWeapon : public AHPBaseWeapon
{
	GENERATED_BODY()

public:
	AHPRifleWeapon();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shot Settings")
	float ShotRate = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shot Settings")
	float BulletSpread = 1.5f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VFX")
	class UHPWeaponFXComponent* WeaponFXComponent;

	virtual void StartFire() override;
	virtual void StopFire() override;
	virtual void MakeShot() override;

protected:
	virtual bool GetTraceData(FVector& StartLineTrace, FVector& EndLineTrace) override;

private:
	FTimerHandle ShotTimerHandle;

};
