// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/HPBasePickup.h"
#include "HPHealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class HEADSHOTPROJECT_API AHPHealthPickup : public AHPBasePickup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Pickup", meta = (ClampMin = "1.0", ClampMax = "100.0"))
	int32 HealAmount = 100;
	
private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
	
};
