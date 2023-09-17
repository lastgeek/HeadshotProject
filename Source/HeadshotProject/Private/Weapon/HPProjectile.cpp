// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Weapon/Components/HPWeaponFXComponent.h"


AHPProjectile::AHPProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	CollisionComponent->InitSphereRadius(20.f);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	CollisionComponent->bReturnMaterialOnMove = true;
	SetRootComponent(CollisionComponent);

	MovmentComponent = CreateDefaultSubobject<UProjectileMovementComponent>("MovmentComponent");
	MovmentComponent->InitialSpeed = 2000.f;
	MovmentComponent->ProjectileGravityScale = 0.f;

	WeaponFXComponent = CreateDefaultSubobject<UHPWeaponFXComponent>("WeaponFXComponent");
}

void AHPProjectile::BeginPlay()
{
	Super::BeginPlay();
	MovmentComponent->Velocity = ProjectileDirection * MovmentComponent->InitialSpeed;
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	CollisionComponent->OnComponentHit.AddDynamic(this, &AHPProjectile::OnProjectileHit);
	SetLifeSpan(ProjectileLifeSpan);
}

void AHPProjectile::OnProjectileHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	if (!GetWorld()) return;
	MovmentComponent->StopMovementImmediately();
	WeaponFXComponent->PlayImpactFX(Hit);
	//DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 24, FColor::Red, false, 5.f);
	UGameplayStatics::ApplyRadialDamage(GetWorld(), Damage, GetActorLocation(), DamageRadius, nullptr, { GetOwner() }, this, GetPlayerController(), bIsFullDamage);
	Destroy();
}

AController* AHPProjectile::GetPlayerController()
{
	const auto Player = Cast<APawn>(GetOwner());

	return Player ? Player->GetController() : nullptr;
}