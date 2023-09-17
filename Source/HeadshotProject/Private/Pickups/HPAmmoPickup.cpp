// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Pickups/HPAmmoPickup.h"
#include "Components/HPWeaponComponent.h"
#include "Components/HPHealthComponent.h"
#include "HPUtils.h"

bool AHPAmmoPickup::GivePickupTo(APawn * PlayerPawn)
{
	const auto HealthComponent = HPUtils::GetHPPlayerComponent<UHPHealthComponent>(PlayerPawn);
	if (!HealthComponent || HealthComponent->IsDead()) return false;

	const auto WeaponComponent = HPUtils::GetHPPlayerComponent<UHPWeaponComponent>(PlayerPawn);
	if (!WeaponComponent) return false;

	return WeaponComponent->TryToAddAmmo(WeaponType, ClipsAmount);
}