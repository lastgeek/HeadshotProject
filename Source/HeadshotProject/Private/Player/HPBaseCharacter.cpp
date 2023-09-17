// Headshot Game by Denis Telpesov. All Rights Reserved.

#include "Player/HPBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/HPCharacterMovementComponent.h"
#include "Components/HPHealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/HPWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Controller.h"

AHPBaseCharacter::AHPBaseCharacter(const FObjectInitializer& ObjInit) 
	: Super(ObjInit.SetDefaultSubobjectClass<UHPCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;
	SpringArmComponent->SocketOffset = FVector(0.f, 100.f, 80.f);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);

	HealthComponent = CreateDefaultSubobject<UHPHealthComponent>("HealthComponent");

	HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
	HealthTextComponent->SetupAttachment(GetRootComponent());
	HealthTextComponent->bOwnerNoSee = true;

	WeaponComponent = CreateDefaultSubobject<UHPWeaponComponent>("WeaponComponent");
}

void AHPBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	HealthText(HealthComponent->GetHealth());
	HealthComponent->OnDeath.AddUObject(this, &AHPBaseCharacter::IsDead);
	HealthComponent->HealthUpdate.AddUObject(this, &AHPBaseCharacter::HealthText);

	LandedDelegate.AddDynamic(this, &AHPBaseCharacter::OnLeandedHit);
}

void AHPBaseCharacter::RunningInProgress(float Amount)
{
	if (Amount < 0.f)
	{
		bIsRunning = false;
		return;
	}
	if (WeaponComponent)
	{
		WeaponComponent->StopFire();
	}
	bIsRunning = true;
}

void AHPBaseCharacter::OnLeandedHit(const FHitResult & Hit)
{
	float CurrentFallingSpeed = -GetVelocity().Z;
	if (CurrentFallingSpeed < LeandedDamageVelicity.X) return;

	const float FinalDamage = FMath::GetMappedRangeValueClamped(LeandedDamageVelicity, LeandedDamage, CurrentFallingSpeed);
	TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}

void AHPBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHPBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AHPBaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHPBaseCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnAround", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AHPBaseCharacter::Jump);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Pressed, this, &AHPBaseCharacter::RunStart);
	PlayerInputComponent->BindAction("Run", EInputEvent::IE_Released, this, &AHPBaseCharacter::RunEnd);
	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, WeaponComponent, &UHPWeaponComponent::StartFire);
	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Released, WeaponComponent, &UHPWeaponComponent::StopFire);
	PlayerInputComponent->BindAction("NextWeapon", EInputEvent::IE_Pressed, WeaponComponent, &UHPWeaponComponent::NextWeapon);
	PlayerInputComponent->BindAction("Reload", EInputEvent::IE_Pressed, WeaponComponent, &UHPWeaponComponent::Reload);
}

float AHPBaseCharacter::GetDirection()
{
	if (GetVelocity().IsNearlyZero()) return 0.f;
	const FVector VelocityNormal = GetVelocity().GetSafeNormal();
	const float Angle = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
	const FVector CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
	float DegreesAngle = FMath::RadiansToDegrees(Angle);
	return CrossProduct.IsNearlyZero() ? DegreesAngle : DegreesAngle * FMath::Sign(CrossProduct.Z);
}

void AHPBaseCharacter::MoveForward(float Amount)
{
	if (Amount == 0.f)
	{
		bIsRunning = false;
		return;
	}
	if (bRunKeyPressed) RunningInProgress(Amount);
	AddMovementInput(GetActorForwardVector(), Amount);
}

void AHPBaseCharacter::MoveRight(float Amount)
{
	if (Amount == 0.f) return;
	AddMovementInput(GetActorRightVector(), Amount);
}

void AHPBaseCharacter::RunStart()
{
	bRunKeyPressed = true;
}

void AHPBaseCharacter::RunEnd()
{
	bRunKeyPressed = false;
	bIsRunning = false;
}

void AHPBaseCharacter::IsDead()
{
	PlayAnimMontage(DeathAnimMontage);

	GetCharacterMovement()->DisableMovement();
	SetLifeSpan(5.f);
	if (Controller)
	{
		Controller->ChangeState(NAME_Spectating);
	}
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	WeaponComponent->StopFire();
}

void AHPBaseCharacter::HealthText(float Health)
{
	HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%0.f"), Health)));
}