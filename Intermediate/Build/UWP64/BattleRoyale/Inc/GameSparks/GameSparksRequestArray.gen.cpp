// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/GameSparksRequestArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksRequestArray() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksRequestArray_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksRequestArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UGameSparksRequestArray::StaticRegisterNativesUGameSparksRequestArray()
	{
		UClass* Class = UGameSparksRequestArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSparksRequestArray", (Native)&UGameSparksRequestArray::execCreateGameSparksRequestArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray()
	{
		struct GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms
		{
			UObject* WorldContextObject;
			UGameSparksRequestArray* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms, ReturnValue), Z_Construct_UClass_UGameSparksRequestArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks|Data" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Create GameSparksRequestArray" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksRequestArray, "CreateGameSparksRequestArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksRequestArray_NoRegister()
	{
		return UGameSparksRequestArray::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSparksRequestArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray, "CreateGameSparksRequestArray" }, // 1743733460
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameSparksRequestArray.h" },
				{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
				{ "Category", "GameSparks|Request Params" },
				{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray = { UE4CodeGen_Private::EPropertyClass::Array, "StringArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UGameSparksRequestArray, StringArray), METADATA_PARAMS(NewProp_StringArray_MetaData, ARRAY_COUNT(NewProp_StringArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StringArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringArray_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameSparksRequestArray>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameSparksRequestArray::StaticClass,
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
	IMPLEMENT_CLASS(UGameSparksRequestArray, 868392767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksRequestArray(Z_Construct_UClass_UGameSparksRequestArray, &UGameSparksRequestArray::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksRequestArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksRequestArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
