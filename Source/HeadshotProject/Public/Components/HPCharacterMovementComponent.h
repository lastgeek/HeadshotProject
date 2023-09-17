// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HPCharacterMovementComponent.generated.h"

UCLASS()
class HEADSHOTPROJECT_API UHPCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Movement: Running", meta = (ClampMin = 1.5f, ClampMax = 10.f))
	float SpeedIncrease = 2.f;

	virtual float GetMaxSpeed() const override;
	
};
