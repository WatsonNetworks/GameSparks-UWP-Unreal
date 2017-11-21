// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSparksScriptData;
struct FDateTime;
class UObject;
#ifdef GAMESPARKS_GameSparksScriptData_generated_h
#error "GameSparksScriptData.generated.h already included, missing '#pragma once' in GameSparksScriptData.h"
#endif
#define GAMESPARKS_GameSparksScriptData_generated_h

#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_int_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetIntArray(Z_Param_name,Z_Param_Out_int_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetDateTime(Z_Param_name,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=this->GetDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(UGameSparksScriptData*,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetGSDataArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UGameSparksScriptData*>*)Z_Param__Result=this->GetGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetGSData(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->GetGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetBoolean(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(int32,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetNumberArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(float,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetFloatArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetFloat(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(FString,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetStringArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->JSONString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksScriptData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=UGameSparksScriptData::CreateGameSparksScriptData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_int_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetIntArray(Z_Param_name,Z_Param_Out_int_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetDateTime(Z_Param_name,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=this->GetDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(UGameSparksScriptData*,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetGSDataArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UGameSparksScriptData*>*)Z_Param__Result=this->GetGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetGSData(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->GetGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetBoolean(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(int32,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetNumberArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(float,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetFloatArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=this->GetFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetFloat(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(FString,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetStringArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=this->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->JSONString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksScriptData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=UGameSparksScriptData::CreateGameSparksScriptData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSparksScriptData(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksScriptData(); \
public: \
	DECLARE_CLASS(UGameSparksScriptData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksScriptData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGameSparksScriptData(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGameSparksScriptData(); \
public: \
	DECLARE_CLASS(UGameSparksScriptData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksScriptData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksScriptData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksScriptData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksScriptData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksScriptData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksScriptData(UGameSparksScriptData&&); \
	NO_API UGameSparksScriptData(const UGameSparksScriptData&); \
public:


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksScriptData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksScriptData(UGameSparksScriptData&&); \
	NO_API UGameSparksScriptData(const UGameSparksScriptData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksScriptData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksScriptData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksScriptData)


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_11_PROLOG
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
