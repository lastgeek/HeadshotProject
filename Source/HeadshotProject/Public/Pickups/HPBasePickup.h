// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HPBasePickup.generated.h"

UCLASS()
class HEADSHOTPROJECT_API AHPBasePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHPBasePickup();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	class USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup")
	float RespawnTimerRate = 5.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float RotationYaw = 0.f;

	void PickupWasTaken();
	void Respawn();
	virtual bool GivePickupTo(APawn* PlayerPawn);

	void GenerateRotationYaw();
	
};
