// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/GameSparksObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksObject() {}
// Cross Module References
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksLogEvent__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksObject();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksAvailable__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_Connect();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_Disconnect();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_IsAuthenticated();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_IsAvailable();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_Logout();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiCredential();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiDomain();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiStage();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksLogEvent__DelegateSignature()
	{
		struct GameSparksObject_eventOnGameSparksLogEvent_Parms
		{
			FString logMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_logMessage = { UE4CodeGen_Private::EPropertyClass::Str, "logMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventOnGameSparksLogEvent_Parms, logMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_logMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "OnGameSparksLogEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GameSparksObject_eventOnGameSparksLogEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksAvailable__DelegateSignature()
	{
		struct GameSparksObject_eventOnGameSparksAvailable_Parms
		{
			bool available;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_available_SetBit = [](void* Obj){ ((GameSparksObject_eventOnGameSparksAvailable_Parms*)Obj)->available = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_available = { UE4CodeGen_Private::EPropertyClass::Bool, "available", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameSparksObject_eventOnGameSparksAvailable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_available_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_available,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "OnGameSparksAvailable__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GameSparksObject_eventOnGameSparksAvailable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGameSparksObject::StaticRegisterNativesUGameSparksObject()
	{
		UClass* Class = UGameSparksObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", (Native)&UGameSparksObject::execConnect },
			{ "Disconnect", (Native)&UGameSparksObject::execDisconnect },
			{ "IsAuthenticated", (Native)&UGameSparksObject::execIsAuthenticated },
			{ "IsAvailable", (Native)&UGameSparksObject::execIsAvailable },
			{ "Logout", (Native)&UGameSparksObject::execLogout },
			{ "SetApiCredential", (Native)&UGameSparksObject::execSetApiCredential },
			{ "SetApiDomain", (Native)&UGameSparksObject::execSetApiDomain },
			{ "SetApiStage", (Native)&UGameSparksObject::execSetApiStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_Connect()
	{
		struct GameSparksObject_eventConnect_Parms
		{
			FString apikey;
			FString secret;
			bool previewServer;
			bool clearCachedAuthentication;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_clearCachedAuthentication_SetBit = [](void* Obj){ ((GameSparksObject_eventConnect_Parms*)Obj)->clearCachedAuthentication = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clearCachedAuthentication = { UE4CodeGen_Private::EPropertyClass::Bool, "clearCachedAuthentication", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameSparksObject_eventConnect_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_clearCachedAuthentication_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_previewServer_SetBit = [](void* Obj){ ((GameSparksObject_eventConnect_Parms*)Obj)->previewServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_previewServer = { UE4CodeGen_Private::EPropertyClass::Bool, "previewServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameSparksObject_eventConnect_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_previewServer_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret = { UE4CodeGen_Private::EPropertyClass::Str, "secret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventConnect_Parms, secret), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_apikey = { UE4CodeGen_Private::EPropertyClass::Str, "apikey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventConnect_Parms, apikey), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_clearCachedAuthentication,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_previewServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_secret,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_apikey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "CPP_Default_clearCachedAuthentication", "false" },
				{ "CPP_Default_previewServer", "true" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Connects to the GameSparks service with the supplied details\n* apiKey - The API Key of the game to connect to\n* secret - The API Secret of the game to connect to\n* Preview Server - Whether to connect to the live, or preview servers\n* clearCachedAuthentication - Forgets any cached authentication details before connecting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "Connect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventConnect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Disconnects the from GameSparks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "Disconnect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_IsAuthenticated()
	{
		struct GameSparksObject_eventIsAuthenticated_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameSparksObject_eventIsAuthenticated_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameSparksObject_eventIsAuthenticated_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Indicates if the current socket is connected and has an associated player" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "IsAuthenticated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventIsAuthenticated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_IsAvailable()
	{
		struct GameSparksObject_eventIsAvailable_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GameSparksObject_eventIsAvailable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GameSparksObject_eventIsAvailable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Indicates if the current socket is connected" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "IsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventIsAvailable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Disconnects the socket, clears cached authentication details, and reconnects" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "Logout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiCredential()
	{
		struct GameSparksObject_eventSetApiCredential_Parms
		{
			FString credential;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_credential = { UE4CodeGen_Private::EPropertyClass::Str, "credential", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventSetApiCredential_Parms, credential), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_credential,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "! set the API credential type (like device, server, etc.) - use empty string to reset to the default. the default is \"device\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "SetApiCredential", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventSetApiCredential_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiDomain()
	{
		struct GameSparksObject_eventSetApiDomain_Parms
		{
			FString domain;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_domain = { UE4CodeGen_Private::EPropertyClass::Str, "domain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventSetApiDomain_Parms, domain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_domain,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "! set api domain to use. pass empty string to reset to the default. The default is \"ws.gamesparks.net\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "SetApiDomain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventSetApiDomain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameSparksObject_SetApiStage()
	{
		struct GameSparksObject_eventSetApiStage_Parms
		{
			FString stage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_stage = { UE4CodeGen_Private::EPropertyClass::Str, "stage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameSparksObject_eventSetApiStage_Parms, stage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_stage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "! Set the api stage. if you passed usePreviewServer=true into Connect(), this will be \"preview\", \"live\" otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksObject, "SetApiStage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GameSparksObject_eventSetApiStage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksObject_NoRegister()
	{
		return UGameSparksObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameSparksObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameSparksObject_Connect, "Connect" }, // 1236587967
				{ &Z_Construct_UFunction_UGameSparksObject_Disconnect, "Disconnect" }, // 4230572822
				{ &Z_Construct_UFunction_UGameSparksObject_IsAuthenticated, "IsAuthenticated" }, // 494637617
				{ &Z_Construct_UFunction_UGameSparksObject_IsAvailable, "IsAvailable" }, // 619828154
				{ &Z_Construct_UFunction_UGameSparksObject_Logout, "Logout" }, // 2558363081
				{ &Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksAvailable__DelegateSignature, "OnGameSparksAvailable__DelegateSignature" }, // 682522140
				{ &Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksLogEvent__DelegateSignature, "OnGameSparksLogEvent__DelegateSignature" }, // 2943871068
				{ &Z_Construct_UFunction_UGameSparksObject_SetApiCredential, "SetApiCredential" }, // 3703379609
				{ &Z_Construct_UFunction_UGameSparksObject_SetApiDomain, "SetApiDomain" }, // 2825256558
				{ &Z_Construct_UFunction_UGameSparksObject_SetApiStage, "SetApiStage" }, // 1103188825
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "GameSparksObject.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameSparksDebugLog_MetaData[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Called by GameSparks when a new log message was generated, useful for debugging" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSparksDebugLog = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGameSparksDebugLog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameSparksObject, OnGameSparksDebugLog), Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksLogEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnGameSparksDebugLog_MetaData, ARRAY_COUNT(NewProp_OnGameSparksDebugLog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameSparksAvailableDelegate_MetaData[] = {
				{ "Category", "GameSparks" },
				{ "ModuleRelativePath", "Private/GameSparksObject.h" },
				{ "ToolTip", "Called by GameSparks when the availability changed" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSparksAvailableDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGameSparksAvailableDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameSparksObject, OnGameSparksAvailableDelegate), Z_Construct_UDelegateFunction_UGameSparksObject_OnGameSparksAvailable__DelegateSignature, METADATA_PARAMS(NewProp_OnGameSparksAvailableDelegate_MetaData, ARRAY_COUNT(NewProp_OnGameSparksAvailableDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGameSparksDebugLog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGameSparksAvailableDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameSparksObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameSparksObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UGameSparksObject, 3530017555);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksObject(Z_Construct_UClass_UGameSparksObject, &UGameSparksObject::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
