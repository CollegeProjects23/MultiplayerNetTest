// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerNetTest/Public/FrameworkPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameworkPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AFrameworkPlayerState();
	MULTIPLAYERNETTEST_API UClass* Z_Construct_UClass_AFrameworkPlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest();
// End Cross Module References
	void AFrameworkPlayerState::StaticRegisterNativesAFrameworkPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFrameworkPlayerState);
	UClass* Z_Construct_UClass_AFrameworkPlayerState_NoRegister()
	{
		return AFrameworkPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AFrameworkPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFrameworkPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerNetTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFrameworkPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FrameworkPlayerState.h" },
		{ "ModuleRelativePath", "Public/FrameworkPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFrameworkPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrameworkPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrameworkPlayerState_Statics::ClassParams = {
		&AFrameworkPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFrameworkPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFrameworkPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFrameworkPlayerState()
	{
		if (!Z_Registration_Info_UClass_AFrameworkPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrameworkPlayerState.OuterSingleton, Z_Construct_UClass_AFrameworkPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFrameworkPlayerState.OuterSingleton;
	}
	template<> MULTIPLAYERNETTEST_API UClass* StaticClass<AFrameworkPlayerState>()
	{
		return AFrameworkPlayerState::StaticClass();
	}
	AFrameworkPlayerState::AFrameworkPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFrameworkPlayerState);
	AFrameworkPlayerState::~AFrameworkPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_FrameworkPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_FrameworkPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFrameworkPlayerState, AFrameworkPlayerState::StaticClass, TEXT("AFrameworkPlayerState"), &Z_Registration_Info_UClass_AFrameworkPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrameworkPlayerState), 1969341276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_FrameworkPlayerState_h_407407646(TEXT("/Script/MultiplayerNetTest"),
		Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_FrameworkPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_FrameworkPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
