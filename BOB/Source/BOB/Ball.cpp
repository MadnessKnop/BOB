// Fill out your copyright notice in the Description page of Project Settings.

#include "BOB.h"
#include "Ball.h"
#include "OwnVector.h"


// Sets default values
ABall::ABall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Sphere(TEXT("/Engine/BasicShapes/Sphere"));
	
	//Create mesh coponent for the ball
	Ball = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
	Ball->SetStaticMesh(Sphere.Object);
	//CollisionProfile

	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	//Create a camera boom attached to the root (ball)
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bDoCollisionTest = false; // eigene Collision fehlt
	SpringArm->RelativeRotation = FRotator(-35.f, 0.f, 0.f);
	SpringArm->TargetArmLength = 900.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 3.f;

	//Create a camera and attach to boom
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
}



// Called to bind functionality to input
void ABall::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	InputComponent->BindAxis("MoveRight", this, &ABall::MoveRight);

}

void ABall::MoveRight(float val)
{
	&OwnVector::RightVector;
}

void ABall::MoveForward(float val)
{
	const OwnVector Move = OwnVector(1.f, 0.f, 0.f);
	
}

void ABall::Jump()
{
}

