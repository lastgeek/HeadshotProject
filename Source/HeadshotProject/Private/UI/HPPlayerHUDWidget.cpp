// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPPlayerHUDWidget.h"
#include "Components/HPHealthComponent.h"
#include "Components/HPWeaponComponent.h"
#include "Player/HPBaseCharacter.h"
#include "HPUtils.h"

float UHPPlayerHUDWidget::GetHealthProcent() const
{
	const auto HealthComponent = HPUtils::GetHPPlayerComponent<UHPHealthComponent>(GetOwningPlayerPawn());
	if (!HealthComponent) return 0.f;
	return HealthComponent->GetHealthProcent();
}

bool UHPPlayerHUDWidget::GetWeaponUIData(FWeaponUIData & UIData) const
{
	const auto WeaponComponent = HPUtils::GetHPPlayerComponent<UHPWeaponComponent>(GetOwningPlayerPawn());;
	if (!WeaponComponent) return false;
	return WeaponComponent->GetWeaponUIData(UIData);
}

bool UHPPlayerHUDWidget::GetCurrentAmmo(FAmmoData& CurrentAmmo) const
{
	const auto WeaponComponent = HPUtils::GetHPPlayerComponent<UHPWeaponComponent>(GetOwningPlayerPawn());
	if (!WeaponComponent) return false;
	return WeaponComponent->GetCurrentAmmo(CurrentAmmo);
	return false;
}

bool UHPPlayerHUDWidget::IsPlayerAlive() const
{
	const auto HealthComponent = HPUtils::GetHPPlayerComponent<UHPHealthComponent>(GetOwningPlayerPawn());
	return HealthComponent && !HealthComponent->IsDead();
}

bool UHPPlayerHUDWidget::IsPlayerSpectating() const
{
	const auto Controller = GetOwningPlayer();
	return Controller && Controller->GetStateName() == NAME_Spectating;
}

bool UHPPlayerHUDWidget::IsPlayerCanFire() const
{
	const auto WeaponComponent = HPUtils::GetHPPlayerComponent<UHPWeaponComponent>(GetOwningPlayerPawn());
	const auto Player = Cast<AHPBaseCharacter>(GetOwningPlayerPawn());
	if (!WeaponComponent && !Player) return false;
	return !Player->bIsRunning && WeaponComponent->IsWeaponCanFire() && IsPlayerAlive();
}
