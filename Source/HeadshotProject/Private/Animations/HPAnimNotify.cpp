// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Animations/HPAnimNotify.h"


void UHPAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	OnNotified.Broadcast(MeshComp);
	Super::Notify(MeshComp, Animation);
}

