// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/HPBaseWeapon.h"
#include "HPLauncherWeapon.generated.h"

/**
 * 
 */
UCLASS()
class HEADSHOTPROJECT_API AHPLauncherWeapon : public AHPBaseWeapon
{
	GENERATED_BODY()
	
public:
	virtual void StartFire() override;
	virtual void MakeShot() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class AHPProjectile> ProjectileClass;
};
