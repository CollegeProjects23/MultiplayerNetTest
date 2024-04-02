// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerNetTest/MultiplayerNetTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerNetTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AMultiplayerNetTestGameMode();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AMultiplayerNetTestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest();
// End Cross Module References
	void AMultiplayerNetTestGameMode::StaticRegisterNativesAMultiplayerNetTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerNetTestGameMode);
	UClass* Z_Construct_UClass_AMultiplayerNetTestGameMode_NoRegister()
	{
		return AMultiplayerNetTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerNetTestGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerNetTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerNetTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::ClassParams = {
		&AMultiplayerNetTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerNetTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerNetTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerNetTestGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerNetTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerNetTestGameMode.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UClass* StaticClass<AMultiplayerNetTestGameMode>()
	{
		return AMultiplayerNetTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerNetTestGameMode);
	AMultiplayerNetTestGameMode::~AMultiplayerNetTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_MultiplayerNetTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_MultiplayerNetTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerNetTestGameMode, AMultiplayerNetTestGameMode::StaticClass, TEXT("AMultiplayerNetTestGameMode"), &Z_Registration_Info_UClass_AMultiplayerNetTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerNetTestGameMode), 1662814433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_MultiplayerNetTestGameMode_h_697611958(TEXT("/Script/MultiplayerNetTest"),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_MultiplayerNetTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_MultiplayerNetTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
