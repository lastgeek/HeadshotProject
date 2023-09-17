// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Components/HPHealthComponent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

UHPHealthComponent::UHPHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UHPHealthComponent::Heal(int32 HealAmount)
{
	if (IsHealthFull()) return false;
	HealthChange(Health + HealAmount);
	return true;
}

void UHPHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	HealthChange(MaxHealth);

	AActor* Player = GetOwner();
	Player->OnTakeAnyDamage.AddDynamic(this, &UHPHealthComponent::OnTakeAnyDamage);

}

void UHPHealthComponent::OnTakeAnyDamage(AActor * DamagedActor, float Damage, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (Damage <= 0.f || IsDead()) return;
	HealthChange(Health - Damage);
	GetWorld()->GetTimerManager().ClearTimer(AutoHealHandle);
	if (IsDead())
	{
		OnDeath.Broadcast();
	}
	else if (bAutoHeal)
	{
		GetWorld()->GetTimerManager().SetTimer(AutoHealHandle, this, &UHPHealthComponent::AutoHeal, HealUpdateTime, true, HealDelay);
	}
}

void UHPHealthComponent::AutoHeal()
{
	HealthChange(Health + HealModifier);
	if (IsHealthFull())
	{
		GetWorld()->GetTimerManager().ClearTimer(AutoHealHandle);
	}
}

void UHPHealthComponent::HealthChange(float UpdateHealth)
{
	Health = FMath::Clamp(UpdateHealth, 0.f, MaxHealth);
	HealthUpdate.Broadcast(Health);
}
