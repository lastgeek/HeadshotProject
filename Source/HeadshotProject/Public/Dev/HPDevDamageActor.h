// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HPDevDamageActor.generated.h"

UCLASS()
class HEADSHOTPROJECT_API AHPDevDamageActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHPDevDamageActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor SphereColor = FColor::Red;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsFullDamage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 10.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
