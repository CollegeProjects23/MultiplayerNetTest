// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerNetTest/Public/NetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AClient_NoRegister();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AMultiplayerNetTestCharacter_NoRegister();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_ANetGameMode();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_ANetGameMode_NoRegister();
	MULTIPLAYERNETTEST_API UEnum* Z_Construct_UEnum_MultiplayerNetTest_EConnection_State();
	MULTIPLAYERNETTEST_API UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature();
	MULTIPLAYERNETTEST_API UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature();
	MULTIPLAYERNETTEST_API UScriptStruct* Z_Construct_UScriptStruct_FClientHandle();
	UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConnection_State;
	static UEnum* EConnection_State_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConnection_State.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConnection_State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiplayerNetTest_EConnection_State, (UObject*)Z_Construct_UPackage__Script_MultiplayerNetTest(), TEXT("EConnection_State"));
		}
		return Z_Registration_Info_UEnum_EConnection_State.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UEnum* StaticEnum<EConnection_State>()
	{
		return EConnection_State_StaticEnum();
	}
	struct Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enumerators[] = {
		{ "EConnection_State::Connecting", (int64)EConnection_State::Connecting },
		{ "EConnection_State::Connected", (int64)EConnection_State::Connected },
		{ "EConnection_State::Disconnected", (int64)EConnection_State::Disconnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Connected.Name", "EConnection_State::Connected" },
		{ "Connecting.Name", "EConnection_State::Connecting" },
		{ "Disconnected.Name", "EConnection_State::Disconnected" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
		nullptr,
		"EConnection_State",
		"EConnection_State",
		Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MultiplayerNetTest_EConnection_State()
	{
		if (!Z_Registration_Info_UEnum_EConnection_State.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConnection_State.InnerSingleton, Z_Construct_UEnum_MultiplayerNetTest_EConnection_State_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConnection_State.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientHandle;
class UScriptStruct* FClientHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientHandle, (UObject*)Z_Construct_UPackage__Script_MultiplayerNetTest(), TEXT("ClientHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ClientHandle.OuterSingleton;
}
template<> MULTIPLAYERNETTEST_API UScriptStruct* StaticStruct<FClientHandle>()
{
	return FClientHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_connectionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_connectionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "ClientHandle" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientHandle, Controller), Z_Construct_UClass_AClient_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ClientHandle" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientHandle, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ClientHandle" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientHandle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState_MetaData[] = {
		{ "Category", "ClientHandle" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState = { "connectionState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientHandle, connectionState), Z_Construct_UEnum_MultiplayerNetTest_EConnection_State, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState_MetaData)) }; // 3161892302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientHandle_Statics::NewProp_connectionState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
		nullptr,
		&NewStructOps,
		"ClientHandle",
		sizeof(FClientHandle),
		alignof(FClientHandle),
		Z_Construct_UScriptStruct_FClientHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientHandle.InnerSingleton, Z_Construct_UScriptStruct_FClientHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientHandle.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics
	{
		struct _Script_MultiplayerNetTest_eventJoined_Parms
		{
			FClientHandle Player;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayerNetTest_eventJoined_Parms, Player), Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerNetTest, nullptr, "Joined__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::_Script_MultiplayerNetTest_eventJoined_Parms), Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FJoined_DelegateWrapper(const FMulticastScriptDelegate& Joined, FClientHandle Player)
{
	struct _Script_MultiplayerNetTest_eventJoined_Parms
	{
		FClientHandle Player;
	};
	_Script_MultiplayerNetTest_eventJoined_Parms Parms;
	Parms.Player=Player;
	Joined.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics
	{
		struct _Script_MultiplayerNetTest_eventLeaving_Parms
		{
			FClientHandle LeavingPlayer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeavingPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::NewProp_LeavingPlayer = { "LeavingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MultiplayerNetTest_eventLeaving_Parms, LeavingPlayer), Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::NewProp_LeavingPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerNetTest, nullptr, "Leaving__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::_Script_MultiplayerNetTest_eventLeaving_Parms), Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLeaving_DelegateWrapper(const FMulticastScriptDelegate& Leaving, FClientHandle LeavingPlayer)
{
	struct _Script_MultiplayerNetTest_eventLeaving_Parms
	{
		FClientHandle LeavingPlayer;
	};
	_Script_MultiplayerNetTest_eventLeaving_Parms Parms;
	Parms.LeavingPlayer=LeavingPlayer;
	Leaving.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ANetGameMode::execGetPlayerHandle)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FClientHandle*)Z_Param__Result=P_THIS->GetPlayerHandle(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetGameMode::execGetPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FClientHandle>*)Z_Param__Result=P_THIS->GetPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetGameMode::execIsThisPlayerAccounted)
	{
		P_GET_OBJECT(APlayerController,Z_Param_controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThisPlayerAccounted(Z_Param_controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetGameMode::execOnPlayerRemoving)
	{
		P_GET_OBJECT(APlayerController,Z_Param_LeavingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerRemoving(Z_Param_LeavingPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetGameMode::execOnLevelTransition)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelTransition(Z_Param_NewPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetGameMode::execOnPlayerLogin)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerLogingIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLogin(Z_Param_PlayerLogingIn);
		P_NATIVE_END;
	}
	void ANetGameMode::StaticRegisterNativesANetGameMode()
	{
		UClass* Class = ANetGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerHandle", &ANetGameMode::execGetPlayerHandle },
			{ "GetPlayers", &ANetGameMode::execGetPlayers },
			{ "IsThisPlayerAccounted", &ANetGameMode::execIsThisPlayerAccounted },
			{ "OnLevelTransition", &ANetGameMode::execOnLevelTransition },
			{ "OnPlayerLogin", &ANetGameMode::execOnPlayerLogin },
			{ "OnPlayerRemoving", &ANetGameMode::execOnPlayerRemoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics
	{
		struct NetGameMode_eventGetPlayerHandle_Parms
		{
			const APlayerController* Player;
			FClientHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventGetPlayerHandle_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventGetPlayerHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "GetPlayerHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::NetGameMode_eventGetPlayerHandle_Parms), Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_GetPlayerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_GetPlayerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics
	{
		struct NetGameMode_eventGetPlayers_Parms
		{
			TArray<FClientHandle> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventGetPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "GetPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::NetGameMode_eventGetPlayers_Parms), Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_GetPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_GetPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics
	{
		struct NetGameMode_eventIsThisPlayerAccounted_Parms
		{
			APlayerController* controller;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventIsThisPlayerAccounted_Parms, controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NetGameMode_eventIsThisPlayerAccounted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NetGameMode_eventIsThisPlayerAccounted_Parms), &Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "IsThisPlayerAccounted", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::NetGameMode_eventIsThisPlayerAccounted_Parms), Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics
	{
		struct NetGameMode_eventOnLevelTransition_Parms
		{
			const APlayerController* NewPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NewProp_NewPC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NewProp_NewPC = { "NewPC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventOnLevelTransition_Parms, NewPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NewProp_NewPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NewProp_NewPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NewProp_NewPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "OnLevelTransition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::NetGameMode_eventOnLevelTransition_Parms), Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_OnLevelTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_OnLevelTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics
	{
		struct NetGameMode_eventOnPlayerLogin_Parms
		{
			const APlayerController* PlayerLogingIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLogingIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLogingIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NewProp_PlayerLogingIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NewProp_PlayerLogingIn = { "PlayerLogingIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventOnPlayerLogin_Parms, PlayerLogingIn), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NewProp_PlayerLogingIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NewProp_PlayerLogingIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NewProp_PlayerLogingIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "OnPlayerLogin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::NetGameMode_eventOnPlayerLogin_Parms), Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_OnPlayerLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_OnPlayerLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics
	{
		struct NetGameMode_eventOnPlayerRemoving_Parms
		{
			const APlayerController* LeavingPlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeavingPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeavingPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NewProp_LeavingPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NewProp_LeavingPlayer = { "LeavingPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetGameMode_eventOnPlayerRemoving_Parms, LeavingPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NewProp_LeavingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NewProp_LeavingPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NewProp_LeavingPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "OnPlayerRemoving", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::NetGameMode_eventOnPlayerRemoving_Parms), Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetGameMode);
	UClass* Z_Construct_UClass_ANetGameMode_NoRegister()
	{
		return ANetGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerJoinedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerJoinedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLeavingEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerLeavingEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationReference_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpawnLocationReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetGameMode_GetPlayerHandle, "GetPlayerHandle" }, // 1617553641
		{ &Z_Construct_UFunction_ANetGameMode_GetPlayers, "GetPlayers" }, // 3073335303
		{ &Z_Construct_UFunction_ANetGameMode_IsThisPlayerAccounted, "IsThisPlayerAccounted" }, // 501567671
		{ &Z_Construct_UFunction_ANetGameMode_OnLevelTransition, "OnLevelTransition" }, // 1132171221
		{ &Z_Construct_UFunction_ANetGameMode_OnPlayerLogin, "OnPlayerLogin" }, // 1762511718
		{ &Z_Construct_UFunction_ANetGameMode_OnPlayerRemoving, "OnPlayerRemoving" }, // 3777692086
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetGameMode.h" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers_Inner = { "ActivePlayers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers = { "ActivePlayers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetGameMode, ActivePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers_MetaData)) }; // 3821316600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerJoinedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerJoinedEvent = { "PlayerJoinedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetGameMode, PlayerJoinedEvent), Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerJoinedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerJoinedEvent_MetaData)) }; // 1078409558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerLeavingEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerLeavingEvent = { "PlayerLeavingEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetGameMode, PlayerLeavingEvent), Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerLeavingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerLeavingEvent_MetaData)) }; // 511622260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::NewProp_SpawnLocationReference_MetaData[] = {
		{ "Category", "Server Info" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_SpawnLocationReference = { "SpawnLocationReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetGameMode, SpawnLocationReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::NewProp_SpawnLocationReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::NewProp_SpawnLocationReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetGameMode_Statics::NewProp_CharacterRef_MetaData[] = {
		{ "Category", "Server Info" },
		{ "ModuleRelativePath", "Public/NetGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetGameMode_Statics::NewProp_CharacterRef = { "CharacterRef", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetGameMode, CharacterRef), Z_Construct_UClass_UClass, Z_Construct_UClass_AMultiplayerNetTestCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::NewProp_CharacterRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::NewProp_CharacterRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_ActivePlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerJoinedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_PlayerLeavingEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_SpawnLocationReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameMode_Statics::NewProp_CharacterRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetGameMode_Statics::ClassParams = {
		&ANetGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetGameMode()
	{
		if (!Z_Registration_Info_UClass_ANetGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetGameMode.OuterSingleton, Z_Construct_UClass_ANetGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetGameMode.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UClass* StaticClass<ANetGameMode>()
	{
		return ANetGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetGameMode);
	ANetGameMode::~ANetGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::EnumInfo[] = {
		{ EConnection_State_StaticEnum, TEXT("EConnection_State"), &Z_Registration_Info_UEnum_EConnection_State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3161892302U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ScriptStructInfo[] = {
		{ FClientHandle::StaticStruct, Z_Construct_UScriptStruct_FClientHandle_Statics::NewStructOps, TEXT("ClientHandle"), &Z_Registration_Info_UScriptStruct_ClientHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientHandle), 3821316600U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetGameMode, ANetGameMode::StaticClass, TEXT("ANetGameMode"), &Z_Registration_Info_UClass_ANetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetGameMode), 1014492676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_2641632635(TEXT("/Script/MultiplayerNetTest"),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
