// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OwnVector.h"
#include "GameFramework/Pawn.h"
#include "Ball.generated.h"


UCLASS()
class BOB_API ABall : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Ball;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent*	SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;

public:
	// Sets default values for this pawn's properties
	ABall();
	

protected:
	virtual void BeginPlay() override;

	OwnVector MovementInput;

	void MoveRight(float val);
	void MoveForward(float val);
	void Jump();

	// Called to bind functionality to input
	

public:
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	FORCEINLINE class UStaticMeshComponent* GetBall() const
	{
		return Ball;
	}
	FORCEINLINE class USpringArmComponent* GetSpringArm() const
	{
		return SpringArm;
	}
	FORCEINLINE class UCameraComponent* GetCamera() const
	{
		return Camera;
	}
	
	
};
