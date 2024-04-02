// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerNetTest/Public/MyGameState.h"
#include "MultiplayerNetTest/Public/NetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AMyGameState();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
	MULTIPLAYERNETTEST_API UScriptStruct* Z_Construct_UScriptStruct_FClientHandle();
	UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameState::execOnPlayerLeaving)
	{
		P_GET_STRUCT(FClientHandle,Z_Param_LeavingClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLeaving(Z_Param_LeavingClient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameState::execOnPlayerJoined)
	{
		P_GET_STRUCT(FClientHandle,Z_Param_JoingingClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerJoined(Z_Param_JoingingClient);
		P_NATIVE_END;
	}
	void AMyGameState::StaticRegisterNativesAMyGameState()
	{
		UClass* Class = AMyGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerJoined", &AMyGameState::execOnPlayerJoined },
			{ "OnPlayerLeaving", &AMyGameState::execOnPlayerLeaving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics
	{
		struct MyGameState_eventOnPlayerJoined_Parms
		{
			FClientHandle JoingingClient;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_JoingingClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::NewProp_JoingingClient = { "JoingingClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyGameState_eventOnPlayerJoined_Parms, JoingingClient), Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::NewProp_JoingingClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//These are binded to delegates on the BP\n" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
		{ "ToolTip", "These are binded to delegates on the BP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "OnPlayerJoined", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::MyGameState_eventOnPlayerJoined_Parms), Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameState_OnPlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_OnPlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics
	{
		struct MyGameState_eventOnPlayerLeaving_Parms
		{
			FClientHandle LeavingClient;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeavingClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::NewProp_LeavingClient = { "LeavingClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyGameState_eventOnPlayerLeaving_Parms, LeavingClient), Z_Construct_UScriptStruct_FClientHandle, METADATA_PARAMS(nullptr, 0) }; // 3821316600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::NewProp_LeavingClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "OnPlayerLeaving", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::MyGameState_eventOnPlayerLeaving_Parms), Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameState_OnPlayerLeaving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_OnPlayerLeaving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameState);
	UClass* Z_Construct_UClass_AMyGameState_NoRegister()
	{
		return AMyGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameState_OnPlayerJoined, "OnPlayerJoined" }, // 983015797
		{ &Z_Construct_UFunction_AMyGameState_OnPlayerLeaving, "OnPlayerLeaving" }, // 2995249091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameState.h" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameState_Statics::ClassParams = {
		&AMyGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameState()
	{
		if (!Z_Registration_Info_UClass_AMyGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameState.OuterSingleton, Z_Construct_UClass_AMyGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameState.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UClass* StaticClass<AMyGameState>()
	{
		return AMyGameState::StaticClass();
	}
	AMyGameState::AMyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
	AMyGameState::~AMyGameState() {}
	struct Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_MyGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_MyGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameState, AMyGameState::StaticClass, TEXT("AMyGameState"), &Z_Registration_Info_UClass_AMyGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameState), 3609664169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_MyGameState_h_435916695(TEXT("/Script/MultiplayerNetTest"),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_MyGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_MyGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
