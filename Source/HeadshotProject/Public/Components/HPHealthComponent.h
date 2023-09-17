// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HPCoreTypes.h"
#include "HPHealthComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEADSHOTPROJECT_API UHPHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHPHealthComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health (General Settings)", meta = (ClampMin = 0.f, ClampMax = 1000.f))
	float MaxHealth = 100.f;

	float GetHealth() const { return Health; }

	UFUNCTION(BlueprintCallable)
	bool IsDead() { return FMath::IsNearlyZero(Health); }

	UFUNCTION(BlueprintCallable)
	float GetHealthProcent() const { return Health / MaxHealth; }

	FOnDeath OnDeath;
	FHealthUpdate HealthUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health (Auto Heal)")
	bool bAutoHeal = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health (Auto Heal)", meta = (ClampMin = 0.f, ClampMax = 10.f, EditCondition = "bAutoHeal"))
	float HealUpdateTime = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health (Auto Heal)", meta = (ClampMin = 0.f, ClampMax = 10.f, EditCondition = "bAutoHeal"))
	float HealDelay = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health (Auto Heal)", meta = (ClampMin = 0.f, ClampMax = 100.f, EditCondition = "bAutoHeal"))
	float HealModifier = 1.f;

	FTimerHandle AutoHealHandle;

	bool Heal(int32 HealAmount);


protected:
	virtual void BeginPlay() override;

private:
	float Health = 0.f;

	UFUNCTION()
	void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	void AutoHeal();

	void HealthChange(float UpdateHealth);

	bool IsHealthFull() const { return FMath::IsNearlyEqual(Health, MaxHealth); }

};
