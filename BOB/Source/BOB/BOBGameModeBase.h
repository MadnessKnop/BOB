// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "BOBGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class BOB_API ABOBGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void BeginPlay() override;

public:
	ABOBGameModeBase();

		UPROPERTY(BlueprintReadWrite, EditANywhere)
		TSubclassOf<class UUserWidget> MainMenuWidget;
		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<class UUserWidget> LevelWidget;
		UPROPERTY(EditAnywhere, Category=Widget)
		class UUserWidget * CurrentWidget;
	
	
	
	
};
