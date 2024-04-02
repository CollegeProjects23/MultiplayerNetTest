// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FClientHandle;
#ifdef MULTIPLAYERNETTEST_NetGameMode_generated_h
#error "NetGameMode.generated.h already included, missing '#pragma once' in NetGameMode.h"
#endif
#define MULTIPLAYERNETTEST_NetGameMode_generated_h

#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientHandle_Statics; \
	MULTIPLAYERNETTEST_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERNETTEST_API UScriptStruct* StaticStruct<struct FClientHandle>();

#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_48_DELEGATE \
MULTIPLAYERNETTEST_API void FJoined_DelegateWrapper(const FMulticastScriptDelegate& Joined, FClientHandle Player);


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_51_DELEGATE \
MULTIPLAYERNETTEST_API void FLeaving_DelegateWrapper(const FMulticastScriptDelegate& Leaving, FClientHandle LeavingPlayer);


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_SPARSE_DATA
#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerHandle); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execIsThisPlayerAccounted); \
	DECLARE_FUNCTION(execOnPlayerRemoving); \
	DECLARE_FUNCTION(execOnLevelTransition); \
	DECLARE_FUNCTION(execOnPlayerLogin);


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerHandle); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execIsThisPlayerAccounted); \
	DECLARE_FUNCTION(execOnPlayerRemoving); \
	DECLARE_FUNCTION(execOnLevelTransition); \
	DECLARE_FUNCTION(execOnPlayerLogin);


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_ACCESSORS
#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetGameMode(); \
	friend struct Z_Construct_UClass_ANetGameMode_Statics; \
public: \
	DECLARE_CLASS(ANetGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerNetTest"), NO_API) \
	DECLARE_SERIALIZER(ANetGameMode)


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_INCLASS \
private: \
	static void StaticRegisterNativesANetGameMode(); \
	friend struct Z_Construct_UClass_ANetGameMode_Statics; \
public: \
	DECLARE_CLASS(ANetGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerNetTest"), NO_API) \
	DECLARE_SERIALIZER(ANetGameMode)


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetGameMode(ANetGameMode&&); \
	NO_API ANetGameMode(const ANetGameMode&); \
public: \
	NO_API virtual ~ANetGameMode();


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetGameMode(ANetGameMode&&); \
	NO_API ANetGameMode(const ANetGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetGameMode) \
	NO_API virtual ~ANetGameMode();


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_56_PROLOG
#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_SPARSE_DATA \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_RPC_WRAPPERS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_ACCESSORS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_INCLASS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_SPARSE_DATA \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_ACCESSORS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERNETTEST_API UClass* StaticClass<class ANetGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_joe19_OneDrive_Documents_GitHub_MultiplayerNetTest_MultiplayerNetTest_Source_MultiplayerNetTest_Public_NetGameMode_h


#define FOREACH_ENUM_ECONNECTION_STATE(op) \
	op(EConnection_State::Connecting) \
	op(EConnection_State::Connected) \
	op(EConnection_State::Disconnected) 

enum class EConnection_State : uint8;
template<> struct TIsUEnumClass<EConnection_State> { enum { Value = true }; };
template<> MULTIPLAYERNETTEST_API UEnum* StaticEnum<EConnection_State>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
