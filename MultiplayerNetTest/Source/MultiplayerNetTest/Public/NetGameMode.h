// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NetGameMode.generated.h"



class APlayerController;
class AClient;
class ANavigationObjectBase;
class AMultiplayerNetTestCharacter;





UENUM(BlueprintType)
enum class EConnection_State : uint8 {
	Connecting,
	Connected,
	Disconnected
};

USTRUCT(BlueprintType)
struct FClientHandle {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AClient* Controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Id = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name = FName(TEXT(""));

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConnection_State connectionState = EConnection_State::Connecting;
};


UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoined, FClientHandle, Player);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaving, FClientHandle, LeavingPlayer);

/**
 * 
 */
UCLASS()
class MULTIPLAYERNETTEST_API ANetGameMode : public AGameMode
{
	GENERATED_BODY()
	

protected:

	ANetGameMode();

	UFUNCTION(BlueprintCallable)
	void OnPlayerLogin(const APlayerController* PlayerLogingIn);
	

	UFUNCTION(BlueprintCallable)
	void OnLevelTransition(const APlayerController* NewPC);

	UFUNCTION(BlueprintCallable)
	void OnPlayerRemoving(const APlayerController* LeavingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsThisPlayerAccounted(APlayerController* controller);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FClientHandle> GetPlayers();

	UFUNCTION(BlueprintCallable)
	FClientHandle GetPlayerHandle(const APlayerController* Player);
public:


	UPROPERTY(VisibleAnywhere, Category = Network)
	TArray<FClientHandle> ActivePlayers;

	UPROPERTY(BlueprintAssignable)
	FJoined PlayerJoinedEvent;

	UPROPERTY(BlueprintAssignable)
	FLeaving PlayerLeavingEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Info")
	TSoftObjectPtr<AActor> SpawnLocationReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Info")
	TSubclassOf<AMultiplayerNetTestCharacter> CharacterRef;
};
