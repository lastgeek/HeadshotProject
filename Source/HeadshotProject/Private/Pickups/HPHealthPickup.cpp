// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Pickups/HPHealthPickup.h"
#include "Components/HPHealthComponent.h"
#include "HPUtils.h"

bool AHPHealthPickup::GivePickupTo(APawn * PlayerPawn)
{
	const auto HealthComponent = HPUtils::GetHPPlayerComponent<UHPHealthComponent>(PlayerPawn);
	if (!HealthComponent || HealthComponent->IsDead()) return false;

	return HealthComponent->Heal(HealAmount);
}