// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerNetTest/Public/Client/Client.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AClient();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest();
// End Cross Module References
	DEFINE_FUNCTION(AClient::execSignalIfSuccessfulLevelTransfer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SignalIfSuccessfulLevelTransfer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AClient::execSignalIfLoggedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SignalIfLoggedIn();
		P_NATIVE_END;
	}
	void AClient::StaticRegisterNativesAClient()
	{
		UClass* Class = AClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignalIfLoggedIn", &AClient::execSignalIfLoggedIn },
			{ "SignalIfSuccessfulLevelTransfer", &AClient::execSignalIfSuccessfulLevelTransfer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Client/Client.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClient, nullptr, "SignalIfLoggedIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClient_SignalIfLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClient_SignalIfLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Client/Client.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClient, nullptr, "SignalIfSuccessfulLevelTransfer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClient);
	UClass* Z_Construct_UClass_AClient_NoRegister()
	{
		return AClient::StaticClass();
	}
	struct Z_Construct_UClass_AClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClient_SignalIfLoggedIn, "SignalIfLoggedIn" }, // 2015694554
		{ &Z_Construct_UFunction_AClient_SignalIfSuccessfulLevelTransfer, "SignalIfSuccessfulLevelTransfer" }, // 2440789925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Client/Client.h" },
		{ "ModuleRelativePath", "Public/Client/Client.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClient_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ClientInfo" },
		{ "ModuleRelativePath", "Public/Client/Client.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AClient_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AClient, Id), METADATA_PARAMS(Z_Construct_UClass_AClient_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClient_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClient_Statics::ClassParams = {
		&AClient::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClient()
	{
		if (!Z_Registration_Info_UClass_AClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClient.OuterSingleton, Z_Construct_UClass_AClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClient.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UClass* StaticClass<AClient>()
	{
		return AClient::StaticClass();
	}
	AClient::AClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClient);
	AClient::~AClient() {}
	struct Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_Client_Client_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_Client_Client_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClient, AClient::StaticClass, TEXT("AClient"), &Z_Registration_Info_UClass_AClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClient), 501138032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_Client_Client_h_3232776290(TEXT("/Script/MultiplayerNetTest"),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_Client_Client_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_Client_Client_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
