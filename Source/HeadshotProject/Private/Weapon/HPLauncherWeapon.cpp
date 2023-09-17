// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPLauncherWeapon.h"
#include "Weapon/HPProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

void AHPLauncherWeapon::StartFire()
{
	MakeShot();
}

void AHPLauncherWeapon::MakeShot()
{
	if (!GetWorld() || IsAmmoEmpty()) return;

	FTransform SpawnTransform = GetMuzzleTransform();
	AHPProjectile* Projectile = GetWorld()->SpawnActorDeferred<AHPProjectile>(ProjectileClass, SpawnTransform);

	FVector StartLineTrace, EndLineTrace;
	if (!GetTraceData(StartLineTrace, EndLineTrace)) return;

	FHitResult OutHit;
	FCollisionQueryParams LineTraceCollisionParam;
	LineTraceCollisionParam.AddIgnoredActor(GetOwner());

	GetWorld()->LineTraceSingleByChannel(OutHit, StartLineTrace, EndLineTrace, ECollisionChannel::ECC_Visibility, LineTraceCollisionParam);

	FVector EndPoint = OutHit.bBlockingHit ? OutHit.ImpactPoint : EndLineTrace;

	if (Projectile)
	{
		Projectile->SetDirection((EndPoint - GetMuzzleTransform().GetLocation()).GetSafeNormal());
		Projectile->SetOwner(GetOwner());
		Projectile->FinishSpawning(SpawnTransform);
	}

	DecreaseAmmo();
}