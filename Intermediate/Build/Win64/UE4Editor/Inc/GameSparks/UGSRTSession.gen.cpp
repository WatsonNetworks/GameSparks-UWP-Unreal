// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/RT/UGSRTSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGSRTSession() {}
// Cross Module References
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTSession();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTSession_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature();
	GAMESPARKS_API UEnum* Z_Construct_UEnum_GameSparks_DeliveryIntent();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_CreateRTSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_GetActivePeers();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_GetPeerId();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Send();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Start();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTSession_Stop();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature()
	{
		struct GSRTSession_eventOnData_Parms
		{
			UGSRTSession* session;
			int32 sender;
			int32 opCode;
			UGSRTData* data;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data = { UE4CodeGen_Private::EPropertyClass::Object, "data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, data), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_opCode = { UE4CodeGen_Private::EPropertyClass::Int, "opCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, opCode), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_sender = { UE4CodeGen_Private::EPropertyClass::Int, "sender", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, sender), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnData_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_opCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sender,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_session,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnData__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature()
	{
		struct GSRTSession_eventOnPlayerDisconnect_Parms
		{
			UGSRTSession* session;
			int32 peerId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerId = { UE4CodeGen_Private::EPropertyClass::Int, "peerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerDisconnect_Parms, peerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerDisconnect_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_peerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_session,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnPlayerDisconnect__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnPlayerDisconnect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature()
	{
		struct GSRTSession_eventOnPlayerConnect_Parms
		{
			UGSRTSession* session;
			int32 peerId;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerId = { UE4CodeGen_Private::EPropertyClass::Int, "peerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerConnect_Parms, peerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnPlayerConnect_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_peerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_session,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnPlayerConnect__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnPlayerConnect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature()
	{
		struct GSRTSession_eventOnReady_Parms
		{
			UGSRTSession* session;
			bool ready;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ready_SetBit = [](void* Obj){ ((GSRTSession_eventOnReady_Parms*)Obj)->ready = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ready = { UE4CodeGen_Private::EPropertyClass::Bool, "ready", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GSRTSession_eventOnReady_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ready_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_session = { UE4CodeGen_Private::EPropertyClass::Object, "session", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventOnReady_Parms, session), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ready,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_session,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "OnReady__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(GSRTSession_eventOnReady_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* DeliveryIntent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSparks_DeliveryIntent, Z_Construct_UPackage__Script_GameSparks(), TEXT("DeliveryIntent"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DeliveryIntent(DeliveryIntent_StaticEnum, TEXT("/Script/GameSparks"), TEXT("DeliveryIntent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSparks_DeliveryIntent_CRC() { return 1634389463U; }
	UEnum* Z_Construct_UEnum_GameSparks_DeliveryIntent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSparks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DeliveryIntent"), 0, Get_Z_Construct_UEnum_GameSparks_DeliveryIntent_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DeliveryIntent::RELIABLE", (int64)DeliveryIntent::RELIABLE },
				{ "DeliveryIntent::UNRELIABLE", (int64)DeliveryIntent::UNRELIABLE },
				{ "DeliveryIntent::UNRELIABLE_SEQUENCED", (int64)DeliveryIntent::UNRELIABLE_SEQUENCED },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
				{ "RELIABLE.DisplayName", "RELIABLE" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "UNRELIABLE.DisplayName", "UNRELIABLE" },
				{ "UNRELIABLE.ToolTip", "<summary>\nSend over UDP, don't discard out of sequence packets\n</summary>" },
				{ "UNRELIABLE_SEQUENCED.DisplayName", "UNRELIABLE_SEQUENCED" },
				{ "UNRELIABLE_SEQUENCED.ToolTip", "<summary>\nSend over UDP, discard out of sequence packets\n</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSparks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"DeliveryIntent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"DeliveryIntent",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGSRTSession::StaticRegisterNativesUGSRTSession()
	{
		UClass* Class = UGSRTSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRTSession", (Native)&UGSRTSession::execCreateRTSession },
			{ "GetActivePeers", (Native)&UGSRTSession::execGetActivePeers },
			{ "GetPeerId", (Native)&UGSRTSession::execGetPeerId },
			{ "Send", (Native)&UGSRTSession::execSend },
			{ "Start", (Native)&UGSRTSession::execStart },
			{ "Stop", (Native)&UGSRTSession::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_CreateRTSession()
	{
		struct GSRTSession_eventCreateRTSession_Parms
		{
			UObject* WorldContextObject;
			FString host;
			FString port;
			FString token;
			UGSRTSession* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, ReturnValue), Z_Construct_UClass_UGSRTSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_token = { UE4CodeGen_Private::EPropertyClass::Str, "token", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, token), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_port = { UE4CodeGen_Private::EPropertyClass::Str, "port", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, port), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_host = { UE4CodeGen_Private::EPropertyClass::Str, "host", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, host), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventCreateRTSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_token,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_port,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_host,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Create GS RT Session" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
				{ "ToolTip", "Create a new GS Data object." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "CreateRTSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GSRTSession_eventCreateRTSession_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_GetActivePeers()
	{
		struct GSRTSession_eventGetActivePeers_Parms
		{
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventGetActivePeers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "GetActivePeers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTSession_eventGetActivePeers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_GetPeerId()
	{
		struct GSRTSession_eventGetPeerId_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventGetPeerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "GetPeerId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(GSRTSession_eventGetPeerId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_Send()
	{
		struct GSRTSession_eventSend_Parms
		{
			int32 opCode;
			DeliveryIntent intent;
			UGSRTData* data;
			TArray<int32> peerIds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_peerIds = { UE4CodeGen_Private::EPropertyClass::Array, "peerIds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, peerIds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_peerIds_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "peerIds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data = { UE4CodeGen_Private::EPropertyClass::Object, "data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, data), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_intent = { UE4CodeGen_Private::EPropertyClass::Enum, "intent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, intent), Z_Construct_UEnum_GameSparks_DeliveryIntent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_intent_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_opCode = { UE4CodeGen_Private::EPropertyClass::Int, "opCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GSRTSession_eventSend_Parms, opCode), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_peerIds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_peerIds_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_intent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_intent_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_opCode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Send", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(GSRTSession_eventSend_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Start", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGSRTSession_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameSparksRT|Session" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTSession, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGSRTSession_NoRegister()
	{
		return UGSRTSession::StaticClass();
	}
	UClass* Z_Construct_UClass_UGSRTSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGSRTSession_CreateRTSession, "CreateRTSession" }, // 1579055543
				{ &Z_Construct_UFunction_UGSRTSession_GetActivePeers, "GetActivePeers" }, // 3328293258
				{ &Z_Construct_UFunction_UGSRTSession_GetPeerId, "GetPeerId" }, // 2745522870
				{ &Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature, "OnData__DelegateSignature" }, // 455217365
				{ &Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature, "OnPlayerConnect__DelegateSignature" }, // 951213132
				{ &Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature, "OnPlayerDisconnect__DelegateSignature" }, // 2055732871
				{ &Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature, "OnReady__DelegateSignature" }, // 2788958866
				{ &Z_Construct_UFunction_UGSRTSession_Send, "Send" }, // 2724853086
				{ &Z_Construct_UFunction_UGSRTSession_Start, "Start" }, // 229477735
				{ &Z_Construct_UFunction_UGSRTSession_Stop, "Stop" }, // 2624449342
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "RT/UGSRTSession.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReady_MetaData[] = {
				{ "Category", "GameSparksRT" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			auto NewProp_IsReady_SetBit = [](void* Obj){ ((UGSRTSession*)Obj)->IsReady = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReady = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReady", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGSRTSession), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReady_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReady_MetaData, ARRAY_COUNT(NewProp_IsReady_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDataDelegate_MetaData[] = {
				{ "Category", "GameSparksRT" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDataDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnDataDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnData__DelegateSignature, METADATA_PARAMS(NewProp_OnDataDelegate_MetaData, ARRAY_COUNT(NewProp_OnDataDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDisconnectDelegate_MetaData[] = {
				{ "Category", "GameSparksRT" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDisconnectDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayerDisconnectDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnPlayerDisconnectDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerDisconnect__DelegateSignature, METADATA_PARAMS(NewProp_OnPlayerDisconnectDelegate_MetaData, ARRAY_COUNT(NewProp_OnPlayerDisconnectDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerConnectDelegate_MetaData[] = {
				{ "Category", "GameSparksRT" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerConnectDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayerConnectDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnPlayerConnectDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnPlayerConnect__DelegateSignature, METADATA_PARAMS(NewProp_OnPlayerConnectDelegate_MetaData, ARRAY_COUNT(NewProp_OnPlayerConnectDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadyDelegate_MetaData[] = {
				{ "Category", "GameSparksRT" },
				{ "ModuleRelativePath", "Private/RT/UGSRTSession.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadyDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReadyDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGSRTSession, OnReadyDelegate), Z_Construct_UDelegateFunction_UGSRTSession_OnReady__DelegateSignature, METADATA_PARAMS(NewProp_OnReadyDelegate_MetaData, ARRAY_COUNT(NewProp_OnReadyDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReady,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDataDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPlayerDisconnectDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPlayerConnectDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnReadyDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGSRTSession>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGSRTSession::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UGSRTSession, 1095384365);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSRTSession(Z_Construct_UClass_UGSRTSession, &UGSRTSession::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGSRTSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRTSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
