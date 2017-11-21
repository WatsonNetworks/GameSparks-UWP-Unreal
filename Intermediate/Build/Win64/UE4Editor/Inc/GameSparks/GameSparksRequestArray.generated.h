// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UGameSparksRequestArray;
#ifdef GAMESPARKS_GameSparksRequestArray_generated_h
#error "GameSparksRequestArray.generated.h already included, missing '#pragma once' in GameSparksRequestArray.h"
#endif
#define GAMESPARKS_GameSparksRequestArray_generated_h

#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGameSparksRequestArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksRequestArray**)Z_Param__Result=UGameSparksRequestArray::CreateGameSparksRequestArray(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGameSparksRequestArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksRequestArray**)Z_Param__Result=UGameSparksRequestArray::CreateGameSparksRequestArray(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSparksRequestArray(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksRequestArray(); \
public: \
	DECLARE_CLASS(UGameSparksRequestArray, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksRequestArray) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUGameSparksRequestArray(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksRequestArray(); \
public: \
	DECLARE_CLASS(UGameSparksRequestArray, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksRequestArray) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksRequestArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksRequestArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksRequestArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksRequestArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksRequestArray(UGameSparksRequestArray&&); \
	NO_API UGameSparksRequestArray(const UGameSparksRequestArray&); \
public:


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksRequestArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksRequestArray(UGameSparksRequestArray&&); \
	NO_API UGameSparksRequestArray(const UGameSparksRequestArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksRequestArray); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksRequestArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksRequestArray)


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_PRIVATE_PROPERTY_OFFSET
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_5_PROLOG
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_RPC_WRAPPERS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_INCLASS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_INCLASS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksRequestArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS