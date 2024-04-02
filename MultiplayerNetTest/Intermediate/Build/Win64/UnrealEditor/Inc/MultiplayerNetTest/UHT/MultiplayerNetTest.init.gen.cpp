// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerNetTest_init() {}
	MULTIPLAYERNETTEST_API UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature();
	MULTIPLAYERNETTEST_API UFunction* Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerNetTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerNetTest()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerNetTest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerNetTest_Joined__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerNetTest_Leaving__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerNetTest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD8864078,
				0xFC5CB33C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerNetTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerNetTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerNetTest(Z_Construct_UPackage__Script_MultiplayerNetTest, TEXT("/Script/MultiplayerNetTest"), Z_Registration_Info_UPackage__Script_MultiplayerNetTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD8864078, 0xFC5CB33C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
