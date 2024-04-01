// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"

#include "NetGameMode.h"
#include "Client\Client.h"

void AMyGameState::OnPlayerJoined(FClientHandle JoiningClient)
{
	if (AClient* CastedClient = (AClient*)JoiningClient.Controller) {
		if (Cast<AClient>(CastedClient)) {



		}
	}

}

void AMyGameState::OnPlayerLeaving(FClientHandle LeavingClient)
{

	if (AClient* CastedClient = (AClient*)LeavingClient.Controller) {
		if (Cast<AClient>(CastedClient)) {



		}
	}
}
