// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Client.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERNETTEST_API AClient : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void SignalIfLoggedIn();

	UFUNCTION(BlueprintCallable)
	void SignalIfSuccessfulLevelTransfer();

	UPROPERTY(VisibleAnywhere, Category = "ClientInfo")
	int32 Id = 0;

protected:



};
