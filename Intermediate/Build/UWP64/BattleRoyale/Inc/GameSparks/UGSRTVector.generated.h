// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UGSRTVector;
class UObject;
#ifdef GAMESPARKS_UGSRTVector_generated_h
#error "UGSRTVector.generated.h already included, missing '#pragma once' in UGSRTVector.h"
#endif
#define GAMESPARKS_UGSRTVector_generated_h

#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFromFVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetFromFVector(Z_Param_Out_v); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXYZW(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXYZ(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXY(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetW(Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetZ(Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetY(Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetX(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=UGSRTVector::CreateRTVector(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFromFVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetFromFVector(Z_Param_Out_v); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXYZW(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXYZ(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetXY(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetW(Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetZ(Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetY(Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=this->SetX(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=UGSRTVector::CreateRTVector(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRTVector(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGSRTVector(); \
public: \
	DECLARE_CLASS(UGSRTVector, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTVector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGSRTVector(); \
	friend GAMESPARKS_API class UClass* Z_Construct_UClass_UGSRTVector(); \
public: \
	DECLARE_CLASS(UGSRTVector, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTVector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTVector(UGSRTVector&&); \
	NO_API UGSRTVector(const UGSRTVector&); \
public:


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTVector(UGSRTVector&&); \
	NO_API UGSRTVector(const UGSRTVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTVector)


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_13_PROLOG
#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS_NO_PURE_DECLS \
	BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GSRTVector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleRoyale_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS