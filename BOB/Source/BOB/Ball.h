// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

protected:
	void MoveRight(float val);

public:
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
