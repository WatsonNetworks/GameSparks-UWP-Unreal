// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSparksScriptData;
class UGameSparksLogEventData;
class UObject;
#ifdef GAMESPARKS_GameSparksLogEventData_generated_h
#error "GameSparksLogEventData.generated.h already included, missing '#pragma once' in GameSparksLogEventData.h"
#endif
#define GAMESPARKS_GameSparksLogEventData_generated_h

#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetObject(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksLogEventAttributes) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=UGameSparksLogEventData::CreateGameSparksLogEventAttributes(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetObject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetObject(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=this->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksLogEventAttributes) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksLogEventData**)Z_Param__Result=UGameSparksLogEventData::CreateGameSparksLogEventAttributes(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSparksLogEventData(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksLogEventData(); \
public: \
	DECLARE_CLASS(UGameSparksLogEventData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksLogEventData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameSparksLogEventData(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksLogEventData(); \
public: \
	DECLARE_CLASS(UGameSparksLogEventData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksLogEventData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksLogEventData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksLogEventData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksLogEventData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksLogEventData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksLogEventData(UGameSparksLogEventData&&); \
	NO_API UGameSparksLogEventData(const UGameSparksLogEventData&); \
public:


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksLogEventData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksLogEventData(UGameSparksLogEventData&&); \
	NO_API UGameSparksLogEventData(const UGameSparksLogEventData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksLogEventData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksLogEventData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksLogEventData)


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_strings() { return STRUCT_OFFSET(UGameSparksLogEventData, m_strings); } \
	FORCEINLINE static uint32 __PPO__m_numbers() { return STRUCT_OFFSET(UGameSparksLogEventData, m_numbers); } \
	FORCEINLINE static uint32 __PPO__m_objects() { return STRUCT_OFFSET(UGameSparksLogEventData, m_objects); }


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_10_PROLOG
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_RPC_WRAPPERS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_INCLASS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_INCLASS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksLogEventData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
