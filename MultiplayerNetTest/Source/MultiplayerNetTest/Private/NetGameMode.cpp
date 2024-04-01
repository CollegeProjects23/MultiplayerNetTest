// Fill out your copyright notice in the Description page of Project Settings.


#include "NetGameMode.h"

#include "MyGameState.h"
#include "Client\Client.h"

void ANetGameMode::OnPlayerLogin(const APlayerController* PlayerLogingIn)
{

	if (AClient* CurrentClient = (AClient*)PlayerLogingIn) {

		FClientHandle NewHandle;
		NewHandle.Controller = (AClient*)CurrentClient;
		NewHandle.Id = FMath::RandRange(100, 1000);
		NewHandle.connectionState = EConnection_State::Connected;
		NewHandle.Name = FName(TEXT("Player"));


		CurrentClient->Id = NewHandle.Id;
		CurrentClient->SignalIfLoggedIn();

		this->ActivePlayers.Add(NewHandle);

		PlayerJoinedEvent.Broadcast(NewHandle);
	}
	
}

void ANetGameMode::OnLevelTransition(const APlayerController* NewPC)
{

	if (AClient* CurrentClient = (AClient*)NewPC) {

		for (int i = 0; i < ActivePlayers.Num(); i++) {
			if (ActivePlayers[i].Id != CurrentClient->Id) { continue; }

			ActivePlayers[i].Controller = CurrentClient;
			ActivePlayers[i].Controller->SignalIfSuccessfulLevelTransfer();

			break;
		}

	}
}

void ANetGameMode::OnPlayerRemoving(const APlayerController* LeavingPlayer)
{
	if (AClient* CurrentClient = (AClient*)LeavingPlayer) {

		for (int i = 0; i < ActivePlayers.Num(); i++) {
			if (ActivePlayers[i].Id != CurrentClient->Id) { continue; }

			PlayerLeavingEvent.Broadcast(ActivePlayers[i]);
			this->ActivePlayers.RemoveAt(i);

			break;
		}
	}
}

