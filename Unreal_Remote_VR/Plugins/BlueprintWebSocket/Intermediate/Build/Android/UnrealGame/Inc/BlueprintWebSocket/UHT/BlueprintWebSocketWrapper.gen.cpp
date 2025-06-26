// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintWebSocket/Public/BlueprintWebSocketWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocketWrapper() {}

// Begin Cross Module References
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister();
BLUEPRINTWEBSOCKET_API UEnum* Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket();
// End Cross Module References

// Begin Delegate FWebSocketConnectedEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketConnectedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketConnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectedEvent)
{
	WebSocketConnectedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWebSocketConnectedEvent

// Begin Delegate FWebSocketConnectionErrorEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms
	{
		FString ConnectionError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError = { "ConnectionError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms, ConnectionError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionError_MetaData), NewProp_ConnectionError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::NewProp_ConnectionError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketConnectionErrorEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketConnectionErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectionErrorEvent, const FString& ConnectionError)
{
	struct _Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms
	{
		FString ConnectionError;
	};
	_Script_BlueprintWebSocket_eventWebSocketConnectionErrorEvent_Parms Parms;
	Parms.ConnectionError=ConnectionError;
	WebSocketConnectionErrorEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketConnectionErrorEvent

// Begin Delegate FWebSocketClosedEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms
	{
		int64 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms), &Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketClosedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosedEvent, int64 StatusCode, const FString& Reason, bool bWasClean)
{
	struct _Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms
	{
		int64 StatusCode;
		FString Reason;
		bool bWasClean;
	};
	_Script_BlueprintWebSocket_eventWebSocketClosedEvent_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Reason=Reason;
	Parms.bWasClean=bWasClean ? true : false;
	WebSocketClosedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketClosedEvent

// Begin Delegate FWebSocketMessageEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms
	{
		FString MessageString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms, MessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageString_MetaData), NewProp_MessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::NewProp_MessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketMessageEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageEvent, const FString& MessageString)
{
	struct _Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms
	{
		FString MessageString;
	};
	_Script_BlueprintWebSocket_eventWebSocketMessageEvent_Parms Parms;
	Parms.MessageString=MessageString;
	WebSocketMessageEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketMessageEvent

// Begin Delegate FWebSocketRawMessageEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms
	{
		TArray<uint8> Data;
		int32 BytesRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_BytesRemaining = { "BytesRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms, BytesRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::NewProp_BytesRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketRawMessageEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketRawMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRawMessageEvent, TArray<uint8> const& Data, int32 BytesRemaining)
{
	struct _Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms
	{
		TArray<uint8> Data;
		int32 BytesRemaining;
	};
	_Script_BlueprintWebSocket_eventWebSocketRawMessageEvent_Parms Parms;
	Parms.Data=Data;
	Parms.BytesRemaining=BytesRemaining;
	WebSocketRawMessageEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketRawMessageEvent

// Begin Delegate FWebSocketMessageSentEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms
	{
		FString MessageString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms, MessageString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageString_MetaData), NewProp_MessageString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::NewProp_MessageString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketMessageSentEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketMessageSentEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageSentEvent, const FString& MessageString)
{
	struct _Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms
	{
		FString MessageString;
	};
	_Script_BlueprintWebSocket_eventWebSocketMessageSentEvent_Parms Parms;
	Parms.MessageString=MessageString;
	WebSocketMessageSentEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketMessageSentEvent

// Begin Enum EBlueprintWebSocketIsConnectedExecution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution;
static UEnum* EBlueprintWebSocketIsConnectedExecution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution, (UObject*)Z_Construct_UPackage__Script_BlueprintWebSocket(), TEXT("EBlueprintWebSocketIsConnectedExecution"));
	}
	return Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UEnum* StaticEnum<EBlueprintWebSocketIsConnectedExecution>()
{
	return EBlueprintWebSocketIsConnectedExecution_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""A socket's state. Used to create multi-pins nodes.\n **/" },
		{ "Connected.Name", "EBlueprintWebSocketIsConnectedExecution::Connected" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "NotConnected.Name", "EBlueprintWebSocketIsConnectedExecution::NotConnected" },
		{ "ToolTip", "A socket's state. Used to create multi-pins nodes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlueprintWebSocketIsConnectedExecution::Connected", (int64)EBlueprintWebSocketIsConnectedExecution::Connected },
		{ "EBlueprintWebSocketIsConnectedExecution::NotConnected", (int64)EBlueprintWebSocketIsConnectedExecution::NotConnected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
	nullptr,
	"EBlueprintWebSocketIsConnectedExecution",
	"EBlueprintWebSocketIsConnectedExecution",
	Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution()
{
	if (!Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.InnerSingleton, Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution.InnerSingleton;
}
// End Enum EBlueprintWebSocketIsConnectedExecution

// Begin Class UBlueprintWebSocket Function AddHeader
struct Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics
{
	struct BlueprintWebSocket_eventAddHeader_Parms
	{
		FString Header;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Add the specifed key / value to the headers.\n\x09 * @param Header The name of the header to add.\n\x09 * @param Value  The value of the header.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Add the specifed key / value to the headers.\n@param Header The name of the header to add.\n@param Value  The value of the header." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Header;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventAddHeader_Parms, Header), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Header_MetaData), NewProp_Header_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventAddHeader_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Header,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "AddHeader", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::BlueprintWebSocket_eventAddHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::BlueprintWebSocket_eventAddHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_AddHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_AddHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execAddHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Header);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHeader(Z_Param_Header,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function AddHeader

// Begin Class UBlueprintWebSocket Function BranchIsConnected
struct Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics
{
	struct BlueprintWebSocket_eventBranchIsConnected_Parms
	{
		EBlueprintWebSocketIsConnectedExecution Branches;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Returns whether this socket is currently connected to a server.\n\x09 * @return If we're connected to a server.\n\x09*/" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Returns whether this socket is currently connected to a server.\n@return If we're connected to a server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventBranchIsConnected_Parms, Branches), Z_Construct_UEnum_BlueprintWebSocket_EBlueprintWebSocketIsConnectedExecution, METADATA_PARAMS(0, nullptr) }; // 2236213486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::NewProp_Branches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "BranchIsConnected", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::BlueprintWebSocket_eventBranchIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::BlueprintWebSocket_eventBranchIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execBranchIsConnected)
{
	P_GET_ENUM_REF(EBlueprintWebSocketIsConnectedExecution,Z_Param_Out_Branches);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BranchIsConnected((EBlueprintWebSocketIsConnectedExecution&)(Z_Param_Out_Branches));
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function BranchIsConnected

// Begin Class UBlueprintWebSocket Function Close
struct Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics
{
	struct BlueprintWebSocket_eventClose_Parms
	{
		int32 Code;
		FString Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Close the connection with the WebSocket server.\n\x09 * @param Code\x09 The code to send to the server.\n\x09 * @param Reason The reason to send to the server.\n\x09*/" },
		{ "CPP_Default_Code", "1000" },
		{ "CPP_Default_Reason", "" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Close the connection with the WebSocket server.\n@param Code   The code to send to the server.\n@param Reason The reason to send to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventClose_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventClose_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "Close", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::BlueprintWebSocket_eventClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::BlueprintWebSocket_eventClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execClose)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Code);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close(Z_Param_Code,Z_Param_Reason);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function Close

// Begin Class UBlueprintWebSocket Function Connect
struct Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics
{
	struct BlueprintWebSocket_eventConnect_Parms
	{
		FString Url;
		FString Protocol;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Connect to the WebSocket server with the specified protocol.\n\x09 * @param Url\x09   The server's URL.\n\x09 * @param Protocol The protocol to use for connection. \"ws\" or \"wss\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Connect to the WebSocket server with the specified protocol.\n@param Url      The server's URL.\n@param Protocol The protocol to use for connection. \"ws\" or \"wss\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventConnect_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::NewProp_Protocol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::BlueprintWebSocket_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::BlueprintWebSocket_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_Url,Z_Param_Protocol);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function Connect

// Begin Class UBlueprintWebSocket Function CreateWebSocket
struct Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics
{
	struct BlueprintWebSocket_eventCreateWebSocket_Parms
	{
		UBlueprintWebSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Create a WebSocket object to connect to a WebSocket server.\n\x09 * @return A new WebSocket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Create a WebSocket object to connect to a WebSocket server.\n@return A new WebSocket." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "New WebSocket" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventCreateWebSocket_Parms, ReturnValue), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "CreateWebSocket", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::BlueprintWebSocket_eventCreateWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::BlueprintWebSocket_eventCreateWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execCreateWebSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlueprintWebSocket**)Z_Param__Result=UBlueprintWebSocket::CreateWebSocket();
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function CreateWebSocket

// Begin Class UBlueprintWebSocket Function IsConnected
struct Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics
{
	struct BlueprintWebSocket_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Returns whether this socket is currently connected to a server.\n\x09 * @return If we're connected to a server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Returns whether this socket is currently connected to a server.\n@return If we're connected to a server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Connected" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintWebSocket_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventIsConnected_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::BlueprintWebSocket_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::BlueprintWebSocket_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function IsConnected

// Begin Class UBlueprintWebSocket Function OnClosed
struct Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics
{
	struct BlueprintWebSocket_eventOnClosed_Parms
	{
		int32 Status;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnClosed_Parms, Status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((BlueprintWebSocket_eventOnClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventOnClosed_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnClosed", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::BlueprintWebSocket_eventOnClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::BlueprintWebSocket_eventOnClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execOnClosed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Status);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClosed(Z_Param_Status,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function OnClosed

// Begin Class UBlueprintWebSocket Function OnConnected
struct Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnConnected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execOnConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnected();
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function OnConnected

// Begin Class UBlueprintWebSocket Function OnConnectionError
struct Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics
{
	struct BlueprintWebSocket_eventOnConnectionError_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnConnectionError_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnConnectionError", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::BlueprintWebSocket_eventOnConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::BlueprintWebSocket_eventOnConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execOnConnectionError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnectionError(Z_Param_Error);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function OnConnectionError

// Begin Class UBlueprintWebSocket Function OnMessage
struct Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics
{
	struct BlueprintWebSocket_eventOnMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventOnMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "OnMessage", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::BlueprintWebSocket_eventOnMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::BlueprintWebSocket_eventOnMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_OnMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_OnMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execOnMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function OnMessage

// Begin Class UBlueprintWebSocket Function RemoveHeader
struct Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics
{
	struct BlueprintWebSocket_eventRemoveHeader_Parms
	{
		FString HeaderToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Remove the specified header from the list of headers.\n\x09 * @param HeaderToRemove The name of the header we want to remove\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Remove the specified header from the list of headers.\n@param HeaderToRemove The name of the header we want to remove" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove = { "HeaderToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventRemoveHeader_Parms, HeaderToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderToRemove_MetaData), NewProp_HeaderToRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::NewProp_HeaderToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "RemoveHeader", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::BlueprintWebSocket_eventRemoveHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::BlueprintWebSocket_eventRemoveHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execRemoveHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveHeader(Z_Param_HeaderToRemove);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function RemoveHeader

// Begin Class UBlueprintWebSocket Function SendBinaryFile
struct Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics
{
	struct BlueprintWebSocket_eventSendBinaryFile_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified file to the WebSocket server as binary.\n\x09 * @param FilePath The path of the file to send\n\x09 * @return If the file was sent. False indicates either the file\n\x09 * *       was not found or permission errors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified file to the WebSocket server as binary.\n@param FilePath The path of the file to send\n@return If the file was sent. False indicates either the file\n*       was not found or permission errors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Sent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendBinaryFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintWebSocket_eventSendBinaryFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventSendBinaryFile_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendBinaryFile", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::BlueprintWebSocket_eventSendBinaryFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::BlueprintWebSocket_eventSendBinaryFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execSendBinaryFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendBinaryFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function SendBinaryFile

// Begin Class UBlueprintWebSocket Function SendMessage
struct Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics
{
	struct BlueprintWebSocket_eventSendMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified message to the WebSocket server.\n\x09 * @param Message The data to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified message to the WebSocket server.\n@param Message The data to send." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::BlueprintWebSocket_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::BlueprintWebSocket_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function SendMessage

// Begin Class UBlueprintWebSocket Function SendRawMessage
struct Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics
{
	struct BlueprintWebSocket_eventSendRawMessage_Parms
	{
		TArray<uint8> Message;
		bool bIsBinary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified binary message to the WebSocket server.\n\x09 * @param Message   The data to send.\n\x09 * @param bIsBinary If this is a binary message or not.\n\x09*/" },
		{ "CPP_Default_bIsBinary", "false" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified binary message to the WebSocket server.\n@param Message   The data to send.\n@param bIsBinary If this is a binary message or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBinary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Message_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Message;
	static void NewProp_bIsBinary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBinary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_Inner = { "Message", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendRawMessage_Parms, Message), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
void Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_SetBit(void* Obj)
{
	((BlueprintWebSocket_eventSendRawMessage_Parms*)Obj)->bIsBinary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary = { "bIsBinary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventSendRawMessage_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBinary_MetaData), NewProp_bIsBinary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::NewProp_bIsBinary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendRawMessage", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::BlueprintWebSocket_eventSendRawMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::BlueprintWebSocket_eventSendRawMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execSendRawMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Message);
	P_GET_UBOOL(Z_Param_bIsBinary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendRawMessage(Z_Param_Out_Message,Z_Param_bIsBinary);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function SendRawMessage

// Begin Class UBlueprintWebSocket Function SendStringFile
struct Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics
{
	struct BlueprintWebSocket_eventSendStringFile_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Sends the specified file to the WebSocket server as string.\n\x09 * @param FilePath The path of the file to send\n\x09 * @return If the file was sent. False indicates either the file\n\x09 * *       was not found or permission errors.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Sends the specified file to the WebSocket server as string.\n@param FilePath The path of the file to send\n@return If the file was sent. False indicates either the file\n*       was not found or permission errors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Sent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSendStringFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintWebSocket_eventSendStringFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintWebSocket_eventSendStringFile_Parms), &Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SendStringFile", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::BlueprintWebSocket_eventSendStringFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::BlueprintWebSocket_eventSendStringFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execSendStringFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendStringFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function SendStringFile

// Begin Class UBlueprintWebSocket Function SetHeaders
struct Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics
{
	struct BlueprintWebSocket_eventSetHeaders_Parms
	{
		TMap<FString,FString> InHeaders;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n\x09 * Set the specified headers for the connection.\n\x09 * If the socket already have headers, it will keep the old headers\n\x09 * and override the duplicated headers with the new values.\n\x09 * @param InHeaders The header used during connection upgrade.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "Set the specified headers for the connection.\nIf the socket already have headers, it will keep the old headers\nand override the duplicated headers with the new values.\n@param InHeaders The header used during connection upgrade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHeaders_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InHeaders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InHeaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InHeaders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_ValueProp = { "InHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_Key_KeyProp = { "InHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders = { "InHeaders", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintWebSocket_eventSetHeaders_Parms, InHeaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHeaders_MetaData), NewProp_InHeaders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::NewProp_InHeaders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintWebSocket, nullptr, "SetHeaders", nullptr, nullptr, Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::BlueprintWebSocket_eventSetHeaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::BlueprintWebSocket_eventSetHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintWebSocket::execSetHeaders)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_InHeaders);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeaders(Z_Param_Out_InHeaders);
	P_NATIVE_END;
}
// End Class UBlueprintWebSocket Function SetHeaders

// Begin Class UBlueprintWebSocket
void UBlueprintWebSocket::StaticRegisterNativesUBlueprintWebSocket()
{
	UClass* Class = UBlueprintWebSocket::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHeader", &UBlueprintWebSocket::execAddHeader },
		{ "BranchIsConnected", &UBlueprintWebSocket::execBranchIsConnected },
		{ "Close", &UBlueprintWebSocket::execClose },
		{ "Connect", &UBlueprintWebSocket::execConnect },
		{ "CreateWebSocket", &UBlueprintWebSocket::execCreateWebSocket },
		{ "IsConnected", &UBlueprintWebSocket::execIsConnected },
		{ "OnClosed", &UBlueprintWebSocket::execOnClosed },
		{ "OnConnected", &UBlueprintWebSocket::execOnConnected },
		{ "OnConnectionError", &UBlueprintWebSocket::execOnConnectionError },
		{ "OnMessage", &UBlueprintWebSocket::execOnMessage },
		{ "RemoveHeader", &UBlueprintWebSocket::execRemoveHeader },
		{ "SendBinaryFile", &UBlueprintWebSocket::execSendBinaryFile },
		{ "SendMessage", &UBlueprintWebSocket::execSendMessage },
		{ "SendRawMessage", &UBlueprintWebSocket::execSendRawMessage },
		{ "SendStringFile", &UBlueprintWebSocket::execSendStringFile },
		{ "SetHeaders", &UBlueprintWebSocket::execSetHeaders },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintWebSocket);
UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister()
{
	return UBlueprintWebSocket::StaticClass();
}
struct Z_Construct_UClass_UBlueprintWebSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *    A wrapper around the engine's native WebSocket.\n **/" },
		{ "IncludePath", "BlueprintWebSocketWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "A wrapper around the engine's native WebSocket." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectedEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the WebSocket successfully connect to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the WebSocket successfully connect to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionErrorEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the WebSocket fail to connect to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the WebSocket fail to connect to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCloseEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the connection is closed. The connection can be closed by the client or the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the connection is closed. The connection can be closed by the client or the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the server sent a string message. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the server sent a string message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRawMessageEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called when the server sent a binary message. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called when the server sent a binary message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageSentEvent_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "Comment", "/* This event is called just after a message has been sent to the server. */" },
		{ "ModuleRelativePath", "Public/BlueprintWebSocketWrapper.h" },
		{ "ToolTip", "This event is called just after a message has been sent to the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionErrorEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessageEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSentEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintWebSocket_AddHeader, "AddHeader" }, // 3579317288
		{ &Z_Construct_UFunction_UBlueprintWebSocket_BranchIsConnected, "BranchIsConnected" }, // 3143977183
		{ &Z_Construct_UFunction_UBlueprintWebSocket_Close, "Close" }, // 3595574446
		{ &Z_Construct_UFunction_UBlueprintWebSocket_Connect, "Connect" }, // 605562997
		{ &Z_Construct_UFunction_UBlueprintWebSocket_CreateWebSocket, "CreateWebSocket" }, // 2691820998
		{ &Z_Construct_UFunction_UBlueprintWebSocket_IsConnected, "IsConnected" }, // 77686302
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnClosed, "OnClosed" }, // 1528333129
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnConnected, "OnConnected" }, // 3800288005
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnConnectionError, "OnConnectionError" }, // 1931106488
		{ &Z_Construct_UFunction_UBlueprintWebSocket_OnMessage, "OnMessage" }, // 3432813939
		{ &Z_Construct_UFunction_UBlueprintWebSocket_RemoveHeader, "RemoveHeader" }, // 1448202917
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendBinaryFile, "SendBinaryFile" }, // 760227705
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendMessage, "SendMessage" }, // 1154075499
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendRawMessage, "SendRawMessage" }, // 3333908430
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SendStringFile, "SendStringFile" }, // 2197105510
		{ &Z_Construct_UFunction_UBlueprintWebSocket_SetHeaders, "SetHeaders" }, // 2113171791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintWebSocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent = { "OnConnectedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnConnectedEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectedEvent_MetaData), NewProp_OnConnectedEvent_MetaData) }; // 138062789
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent = { "OnConnectionErrorEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnConnectionErrorEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionErrorEvent_MetaData), NewProp_OnConnectionErrorEvent_MetaData) }; // 3835764138
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent = { "OnCloseEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnCloseEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCloseEvent_MetaData), NewProp_OnCloseEvent_MetaData) }; // 2650998838
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent = { "OnMessageEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnMessageEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageEvent_MetaData), NewProp_OnMessageEvent_MetaData) }; // 1046934168
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent = { "OnRawMessageEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnRawMessageEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRawMessageEvent_MetaData), NewProp_OnRawMessageEvent_MetaData) }; // 1787074747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent = { "OnMessageSentEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintWebSocket, OnMessageSentEvent), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageSentEvent_MetaData), NewProp_OnMessageSentEvent_MetaData) }; // 2591730316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnConnectionErrorEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnCloseEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnRawMessageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintWebSocket_Statics::NewProp_OnMessageSentEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintWebSocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintWebSocket_Statics::ClassParams = {
	&UBlueprintWebSocket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintWebSocket_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintWebSocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintWebSocket()
{
	if (!Z_Registration_Info_UClass_UBlueprintWebSocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintWebSocket.OuterSingleton, Z_Construct_UClass_UBlueprintWebSocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintWebSocket.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UBlueprintWebSocket>()
{
	return UBlueprintWebSocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintWebSocket);
UBlueprintWebSocket::~UBlueprintWebSocket() {}
// End Class UBlueprintWebSocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlueprintWebSocketIsConnectedExecution_StaticEnum, TEXT("EBlueprintWebSocketIsConnectedExecution"), &Z_Registration_Info_UEnum_EBlueprintWebSocketIsConnectedExecution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2236213486U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintWebSocket, UBlueprintWebSocket::StaticClass, TEXT("UBlueprintWebSocket"), &Z_Registration_Info_UClass_UBlueprintWebSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintWebSocket), 3260072074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_3886284511(TEXT("/Script/BlueprintWebSocket"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
