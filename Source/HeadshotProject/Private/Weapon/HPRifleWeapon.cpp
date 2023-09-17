// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "HPRifleWeapon.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Weapon/Components/HPWeaponFXComponent.h"

AHPRifleWeapon::AHPRifleWeapon()
{
	WeaponFXComponent = CreateDefaultSubobject<UHPWeaponFXComponent>("WeaponFXComponent");
}

void AHPRifleWeapon::StartFire()
{
	GetWorldTimerManager().SetTimer(ShotTimerHandle, this, &AHPRifleWeapon::MakeShot, ShotRate, true);
	MakeShot();
}

void AHPRifleWeapon::StopFire()
{
	GetWorldTimerManager().ClearTimer(ShotTimerHandle);
}

void AHPRifleWeapon::MakeShot()
{
	if (!GetWorld() || IsAmmoEmpty()) 
	{
		StopFire();
		return;
	}

	FTransform MuzzleTransform = GetMuzzleTransform();

	FVector StartLineTrace, EndLineTrace;

	if (!GetTraceData(StartLineTrace, EndLineTrace)) 
	{
		StopFire();
		return;
	}

	FHitResult OutHit;
	FCollisionQueryParams LineTraceCollisionParam;
	LineTraceCollisionParam.AddIgnoredActor(GetOwner());
	LineTraceCollisionParam.bReturnPhysicalMaterial = true;

	do
	{
		GetWorld()->LineTraceSingleByChannel(OutHit, StartLineTrace, EndLineTrace, ECollisionChannel::ECC_Visibility, LineTraceCollisionParam);
		if (!OutHit.bBlockingHit) break;
		StartLineTrace = MuzzleTransform.GetLocation();
	} while (!CheckAngle(MuzzleTransform, OutHit));

	if (OutHit.bBlockingHit)
	{
		WeaponFXComponent->PlayImpactFX(OutHit);
		//DrawDebugLine(GetWorld(), MuzzleTransform.GetLocation(), OutHit.ImpactPoint, FColor::Red, false, 4.f, 0, 2.f);
		//DrawDebugSphere(GetWorld(), OutHit.ImpactPoint, 20.f, 28, FColor::Red, false, 4.f, 0, 2.f);

		MakeDamage(OutHit);
	}
	else
	{
		DrawDebugLine(GetWorld(), MuzzleTransform.GetLocation(), EndLineTrace, FColor::Red, false, 4.f, 0, 2.f);
	}

	DecreaseAmmo();
}

bool AHPRifleWeapon::GetTraceData(FVector& StartLineTrace, FVector& EndLineTrace)
{
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	if (!GetPlayerViewPoint(PlayerViewLocation, PlayerViewRotation)) return false;

	StartLineTrace = PlayerViewLocation;
	const auto HalfAngleRad = FMath::DegreesToRadians(BulletSpread);
	EndLineTrace = PlayerViewLocation + FMath::VRandCone(PlayerViewRotation.Vector(), HalfAngleRad) * TraceMaxDistance;
	return true;
}
