// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HPProjectile.generated.h"

UCLASS()
class HEADSHOTPROJECT_API AHPProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AHPProjectile();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VFX")
	class UHPWeaponFXComponent* WeaponFXComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* MovmentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float DamageRadius = 200.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float Damage = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	bool bIsFullDamage = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float ProjectileLifeSpan = 5.f;

	void SetDirection(FVector Direction) { ProjectileDirection = Direction; }

protected:
	virtual void BeginPlay() override;

	AController* GetPlayerController();

	UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
private:
	FVector ProjectileDirection = FVector::ZeroVector;
};
