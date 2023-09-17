// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/HPBasePickup.h"
#include "HPAmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class HEADSHOTPROJECT_API AHPAmmoPickup : public AHPBasePickup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Pickup", meta = (ClampMin = "1.0", ClampMax = "10.0"))
	int32 ClipsAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo Pickup")
	TSubclassOf<class AHPBaseWeapon> WeaponType;
	
private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
		
};
