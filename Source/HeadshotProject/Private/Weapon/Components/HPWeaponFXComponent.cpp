// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Weapon/Components/HPWeaponFXComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

UHPWeaponFXComponent::UHPWeaponFXComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UHPWeaponFXComponent::PlayImpactFX(const FHitResult & Hit)
{
	auto Effect = DefaultEffect;
	if (Hit.PhysMaterial.IsValid())
	{
		const auto PhysMat = Hit.PhysMaterial.Get();
		if (EffectsMap.Contains(PhysMat))
		{
			Effect = EffectsMap[PhysMat];
		}
	}

	UGameplayStatics::SpawnEmitterAtLocation(this, Effect, Hit.ImpactPoint, Hit.Normal.Rotation());
}
