// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Pickups/HPBasePickup.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"

AHPBasePickup::AHPBasePickup()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	CollisionComponent->InitSphereRadius(50.f);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	SetRootComponent(CollisionComponent);

}

void AHPBasePickup::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateRotationYaw();
}

void AHPBasePickup::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	const auto PlayerPawn = Cast<APawn>(OtherActor);
	if (GivePickupTo(PlayerPawn))
	{
		PickupWasTaken();
	}
}

void AHPBasePickup::PickupWasTaken()
{
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	if (GetRootComponent())
	{
		GetRootComponent()->SetVisibility(false, true);
	}

	FTimerHandle RespawnHandle;
	GetWorldTimerManager().SetTimer(RespawnHandle, this, &AHPBasePickup::Respawn, RespawnTimerRate);
}

void AHPBasePickup::Respawn()
{
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	if (GetRootComponent())
	{
		GetRootComponent()->SetVisibility(true, true);
	}
	GenerateRotationYaw();
}

bool AHPBasePickup::GivePickupTo(APawn * PlayerPawn)
{
	return false;
}

void AHPBasePickup::GenerateRotationYaw()
{
	const auto Direction = FMath::RandBool() ? 1.f : -1.f;
	RotationYaw = FMath::RandRange(1.f, 2.f) * Direction;
}

// Called every frame
void AHPBasePickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(0.f, RotationYaw, 0.f));
}

