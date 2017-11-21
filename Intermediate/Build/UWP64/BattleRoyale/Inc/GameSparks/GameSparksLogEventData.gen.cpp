// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/GameSparksLogEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksLogEventData() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksLogEventData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksLogEventData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetNumber();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetObject();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksScriptData_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetString();
// End Cross Module References
	void UGameSparksLogEventData::StaticRegisterNativesUGameSparksLogEventData()
	{
		UClass* Class = UGameSparksLogEventData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSparksLogEventAttributes", (Native)&UGameSparksLogEventData::execCreateGameSparksLogEventAttributes },
			{ "SetNumber", (Native)&UGameSparksLogEventData::execSetNumber },
			{ "SetObject", (Native)&UGameSparksLogEventData::execSetObject },
			{ "SetString", (Native)&UGameSparksLogEventData::execSetString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes()
	{
		struct GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms
		{
			UObject* WorldContextObject;
			UGameSparksLogEventData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks|Data" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Create Log Event Attributes" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
				{ "ToolTip", "Create a new Log Event Data object." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "CreateGameSparksLogEventAttributes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GameSparksLogEventData_eventCreateGameSparksLogEventAttributes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetNumber()
	{
		struct GameSparksLogEventData_eventSetNumber_Parms
		{
			FString name;
			int32 value;
			UGameSparksLogEventData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Int, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, value), METADATA_PARAMS(NewProp_value_MetaData, ARRAY_COUNT(NewProp_value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetNumber_Parms, name), METADATA_PARAMS(NewProp_name_MetaData, ARRAY_COUNT(NewProp_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks|Data" },
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetObject()
	{
		struct GameSparksLogEventData_eventSetObject_Parms
		{
			FString name;
			UGameSparksScriptData* value;
			UGameSparksLogEventData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Object, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, value), Z_Construct_UClass_UGameSparksScriptData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetObject_Parms, name), METADATA_PARAMS(NewProp_name_MetaData, ARRAY_COUNT(NewProp_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks|Data" },
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksLogEventData_SetString()
	{
		struct GameSparksLogEventData_eventSetString_Parms
		{
			FString name;
			FString value;
			UGameSparksLogEventData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UGameSparksLogEventData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, value), METADATA_PARAMS(NewProp_value_MetaData, ARRAY_COUNT(NewProp_value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksLogEventData_eventSetString_Parms, name), METADATA_PARAMS(NewProp_name_MetaData, ARRAY_COUNT(NewProp_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks|Data" },
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksLogEventData, "SetString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GameSparksLogEventData_eventSetString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksLogEventData_NoRegister()
	{
		return UGameSparksLogEventData::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSparksLogEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameSparksLogEventData_CreateGameSparksLogEventAttributes, "CreateGameSparksLogEventAttributes" }, // 1543821108
				{ &Z_Construct_UFunction_UGameSparksLogEventData_SetNumber, "SetNumber" }, // 3993378270
				{ &Z_Construct_UFunction_UGameSparksLogEventData_SetObject, "SetObject" }, // 3543633894
				{ &Z_Construct_UFunction_UGameSparksLogEventData_SetString, "SetString" }, // 957789298
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameSparksLogEventData.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_objects_MetaData[] = {
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_objects = { UE4CodeGen_Private::EPropertyClass::Map, "m_objects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_objects), METADATA_PARAMS(NewProp_m_objects_MetaData, ARRAY_COUNT(NewProp_m_objects_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_objects_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_objects_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_objects_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "m_objects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UGameSparksScriptData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_numbers_MetaData[] = {
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_numbers = { UE4CodeGen_Private::EPropertyClass::Map, "m_numbers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_numbers), METADATA_PARAMS(NewProp_m_numbers_MetaData, ARRAY_COUNT(NewProp_m_numbers_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_numbers_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_numbers_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_numbers_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "m_numbers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strings_MetaData[] = {
				{ "ModuleRelativePath", "Private/GameSparksLogEventData.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_strings = { UE4CodeGen_Private::EPropertyClass::Map, "m_strings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameSparksLogEventData, m_strings), METADATA_PARAMS(NewProp_m_strings_MetaData, ARRAY_COUNT(NewProp_m_strings_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strings_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_strings_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strings_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "m_strings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_objects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_objects_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_objects_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_numbers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_numbers_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_numbers_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_strings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_strings_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_strings_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameSparksLogEventData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameSparksLogEventData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSparksLogEventData, 1656081205);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksLogEventData(Z_Construct_UClass_UGameSparksLogEventData, &UGameSparksLogEventData::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksLogEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksLogEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
