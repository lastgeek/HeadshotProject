// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HPWeaponFXComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEADSHOTPROJECT_API UHPWeaponFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHPWeaponFXComponent();

	void PlayImpactFX(const FHitResult& Hit);

protected:
	UPROPERTY(EditAnywhere, Category = "VFX")
	UParticleSystem* DefaultEffect;

	UPROPERTY(EditAnywhere, Category = "VFX")
	TMap<UPhysicalMaterial*, UParticleSystem*> EffectsMap;
	
};
