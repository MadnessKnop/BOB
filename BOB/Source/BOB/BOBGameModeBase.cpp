// Fill out your copyright notice in the Description page of Project Settings.

#include "BOB.h"
#include "BOBGameModeBase.h"
#include "BaseHUD.h"
#include "Ball.h"
//Es gibt einen Fehler mit Unreal 4.14 und das einbinden der UserWidget.h
//Deswegen rufe ich die Widget direkt über Blueprints auf
//#include "UserWidget.h"



void ABOBGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	//if (MainMenuWidget != nullptr)
	//{
		//CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidget);

		//if (CurrentWiget != nullptr)
		//{
			//CurrentWidget->AddToViewport();
		//}

	//}
	//else if (LevelWidget != nullptr)
	//{
		//CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), LevelWidget);

		//if (CurrentWiget != nullptr)
		//{
			//CurrentWidget->AddToViewport();
		//}
	//}
}

ABOBGameModeBase::ABOBGameModeBase() : Super()
{
	HUDClass = ABaseHUD::StaticClass();
	DefaultPawnClass = ABall::StaticClass();
}
