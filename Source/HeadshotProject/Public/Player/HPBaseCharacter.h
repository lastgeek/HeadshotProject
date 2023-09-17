// Headshot Game by Denis Telpesov. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HPBaseCharacter.generated.h"

UCLASS()
class HEADSHOTPROJECT_API AHPBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AHPBaseCharacter(const FObjectInitializer& ObjInit);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	class UCameraComponent* CameraComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	class USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	class UHPHealthComponent* HealthComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	class UTextRenderComponent* HealthTextComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
	class UHPWeaponComponent* WeaponComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* DeathAnimMontage;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnLeandedHit(const FHitResult& Hit);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	FVector2D LeandedDamage = { 10.f, 100.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	FVector2D LeandedDamageVelicity = { 500.f, 5000.f };

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	float GetDirection();

	bool bIsRunning = false;
	bool bRunKeyPressed = false;

private:
	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void RunStart();
	void RunEnd();
	void IsDead();
	void HealthText(float Health);
	void RunningInProgress(float Amount);
};
