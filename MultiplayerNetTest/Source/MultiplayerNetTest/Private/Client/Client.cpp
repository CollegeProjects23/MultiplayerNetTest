// Fill out your copyright notice in the Description page of Project Settings.


#include "Client/Client.h"

#include "Kismet\GameplayStatics.h"
#include "NetGameMode.h"

void AClient::SignalIfLoggedIn()
{
	if (!GEngine) { return; }
	GEngine->AddOnScreenDebugMessage(1, 10, FColor::Green, FString(TEXT("LoggedIn")));
}

void AClient::SignalIfSuccessfulLevelTransfer()
{
	if (!GEngine) { return; }
	GEngine->AddOnScreenDebugMessage(1, 10, FColor::Green, FString(TEXT("Successful Transition")));
}

