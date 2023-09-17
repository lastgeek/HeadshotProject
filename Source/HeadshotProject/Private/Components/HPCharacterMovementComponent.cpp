// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Components/HPCharacterMovementComponent.h"
#include "Player/HPBaseCharacter.h"


float UHPCharacterMovementComponent::GetMaxSpeed() const 
{
	const float MaxSpeed = Super::GetMaxSpeed();
	AHPBaseCharacter* Player = Cast<AHPBaseCharacter>(GetPawnOwner());
	
	return Player && Player->bIsRunning ? MaxSpeed * SpeedIncrease : MaxSpeed;
}

