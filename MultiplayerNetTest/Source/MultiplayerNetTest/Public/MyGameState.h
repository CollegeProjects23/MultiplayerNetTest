// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"



class ANetGameMode;
class AClient;
struct FClientHandle;


/**
 * 
 */
UCLASS()
class MULTIPLAYERNETTEST_API AMyGameState : public AGameState
{
	GENERATED_BODY()

protected:

	//UPROPERTY(VisibleAnywhere, Category = ClientInfo)
	//TArray<FClientHandle> Clients;


	//These are binded to delegates on the BP
	UFUNCTION(BlueprintCallable)
	void OnPlayerJoined(FClientHandle JoingingClient);

	UFUNCTION(BlueprintCallable)
	void OnPlayerLeaving(FClientHandle LeavingClient);

};
