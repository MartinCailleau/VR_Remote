// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintWebSocket/Private/BlueprintWebSocketNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocketNodes() {}

// Begin Cross Module References
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UBlueprintWebSocket_NoRegister();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_NoRegister();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketReconnectProxy();
BLUEPRINTWEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature();
BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket();
// End Cross Module References

// Begin Delegate FWebSocketEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventWebSocketEvent_Parms
	{
		const UBlueprintWebSocket* Socket;
		int32 StatusCode;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Socket;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, Socket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, StatusCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusCode_MetaData), NewProp_StatusCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventWebSocketEvent_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "WebSocketEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventWebSocketEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWebSocketEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketEvent, const UBlueprintWebSocket* Socket, const int32 StatusCode, const FString& Message)
{
	struct _Script_BlueprintWebSocket_eventWebSocketEvent_Parms
	{
		const UBlueprintWebSocket* Socket;
		int32 StatusCode;
		FString Message;
	};
	_Script_BlueprintWebSocket_eventWebSocketEvent_Parms Parms;
	Parms.Socket=Socket;
	Parms.StatusCode=StatusCode;
	Parms.Message=Message;
	WebSocketEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWebSocketEvent

// Begin Class UWebSocketConnectAsyncProxyBase Function OnCloseInternal
struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics
{
	struct WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms
	{
		int64 Status;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasClean_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms), &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasClean_MetaData), NewProp_bWasClean_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnCloseInternal", nullptr, nullptr, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnCloseInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnCloseInternal)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Status);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCloseInternal(Z_Param_Status,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// End Class UWebSocketConnectAsyncProxyBase Function OnCloseInternal

// Begin Class UWebSocketConnectAsyncProxyBase Function OnConnectedInternal
struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnConnectedInternal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnConnectedInternal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnectedInternal();
	P_NATIVE_END;
}
// End Class UWebSocketConnectAsyncProxyBase Function OnConnectedInternal

// Begin Class UWebSocketConnectAsyncProxyBase Function OnConnectionErrorInternal
struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics
{
	struct WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnConnectionErrorInternal", nullptr, nullptr, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnConnectionErrorInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnConnectionErrorInternal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnectionErrorInternal(Z_Param_Error);
	P_NATIVE_END;
}
// End Class UWebSocketConnectAsyncProxyBase Function OnConnectionErrorInternal

// Begin Class UWebSocketConnectAsyncProxyBase Function OnMessageInternal
struct Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics
{
	struct WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, nullptr, "OnMessageInternal", nullptr, nullptr, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::WebSocketConnectAsyncProxyBase_eventOnMessageInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketConnectAsyncProxyBase::execOnMessageInternal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMessageInternal(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UWebSocketConnectAsyncProxyBase Function OnMessageInternal

// Begin Class UWebSocketConnectAsyncProxyBase
void UWebSocketConnectAsyncProxyBase::StaticRegisterNativesUWebSocketConnectAsyncProxyBase()
{
	UClass* Class = UWebSocketConnectAsyncProxyBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCloseInternal", &UWebSocketConnectAsyncProxyBase::execOnCloseInternal },
		{ "OnConnectedInternal", &UWebSocketConnectAsyncProxyBase::execOnConnectedInternal },
		{ "OnConnectionErrorInternal", &UWebSocketConnectAsyncProxyBase::execOnConnectionErrorInternal },
		{ "OnMessageInternal", &UWebSocketConnectAsyncProxyBase::execOnMessageInternal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketConnectAsyncProxyBase);
UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_NoRegister()
{
	return UWebSocketConnectAsyncProxyBase::StaticClass();
}
struct Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for asynchronous helper nodes\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for asynchronous helper nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[] = {
		{ "Comment", "/* Called once the WebSocket is connected to the server. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called once the WebSocket is connected to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[] = {
		{ "Comment", "/* Called when the socket fail to connect to the server. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the socket fail to connect to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[] = {
		{ "Comment", "/* Called when the connection to the server has been closed. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the connection to the server has been closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[] = {
		{ "Comment", "/* Called when the server has sent a message. */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Called when the server has sent a message." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Socket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnCloseInternal, "OnCloseInternal" }, // 3923448504
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectedInternal, "OnConnectedInternal" }, // 2048407941
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnConnectionErrorInternal, "OnConnectionErrorInternal" }, // 3407934994
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxyBase_OnMessageInternal, "OnMessageInternal" }, // 4242088724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketConnectAsyncProxyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnConnected), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnected_MetaData), NewProp_OnConnected_MetaData) }; // 1879854788
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnConnectionError), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionError_MetaData), NewProp_OnConnectionError_MetaData) }; // 1879854788
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose = { "OnClose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnClose), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClose_MetaData), NewProp_OnClose_MetaData) }; // 1879854788
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, OnMessage), Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessage_MetaData), NewProp_OnMessage_MetaData) }; // 1879854788
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketConnectAsyncProxyBase, Socket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Socket_MetaData), NewProp_Socket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_OnMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::NewProp_Socket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::ClassParams = {
	&UWebSocketConnectAsyncProxyBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxyBase()
{
	if (!Z_Registration_Info_UClass_UWebSocketConnectAsyncProxyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketConnectAsyncProxyBase.OuterSingleton, Z_Construct_UClass_UWebSocketConnectAsyncProxyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocketConnectAsyncProxyBase.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketConnectAsyncProxyBase>()
{
	return UWebSocketConnectAsyncProxyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketConnectAsyncProxyBase);
UWebSocketConnectAsyncProxyBase::~UWebSocketConnectAsyncProxyBase() {}
// End Class UWebSocketConnectAsyncProxyBase

// Begin Class UWebSocketConnectAsyncProxy Function Connect
struct Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics
{
	struct WebSocketConnectAsyncProxy_eventConnect_Parms
	{
		const UBlueprintWebSocket* WebSocket;
		FString Url;
		FString Protocol;
		UWebSocketConnectAsyncProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Helper node to easily connect to server and handle connection events.\n     * @param WebSocket The WebSocket used to connect.\n     * @param Url       The URL of the server we want to connect to.\n     * @param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n     * @param Headers   The header used during the upgrade.\n    */" },
		{ "DisplayName", "Connect WebSocket to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Helper node to easily connect to server and handle connection events.\n@param WebSocket The WebSocket used to connect.\n@param Url       The URL of the server we want to connect to.\n@param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n@param Headers   The header used during the upgrade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebSocket_MetaData), NewProp_WebSocket_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketConnectAsyncProxy_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_WebSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketConnectAsyncProxy, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::WebSocketConnectAsyncProxy_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::WebSocketConnectAsyncProxy_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketConnectAsyncProxy::execConnect)
{
	P_GET_OBJECT(UBlueprintWebSocket,Z_Param_WebSocket);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWebSocketConnectAsyncProxy**)Z_Param__Result=UWebSocketConnectAsyncProxy::Connect(Z_Param_WebSocket,Z_Param_Url,Z_Param_Protocol);
	P_NATIVE_END;
}
// End Class UWebSocketConnectAsyncProxy Function Connect

// Begin Class UWebSocketConnectAsyncProxy
void UWebSocketConnectAsyncProxy::StaticRegisterNativesUWebSocketConnectAsyncProxy()
{
	UClass* Class = UWebSocketConnectAsyncProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UWebSocketConnectAsyncProxy::execConnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketConnectAsyncProxy);
UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy_NoRegister()
{
	return UWebSocketConnectAsyncProxy::StaticClass();
}
struct Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to easily handle connection and events.\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asynchronous node to easily handle connection and events." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketConnectAsyncProxy_Connect, "Connect" }, // 554299141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketConnectAsyncProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::ClassParams = {
	&UWebSocketConnectAsyncProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocketConnectAsyncProxy()
{
	if (!Z_Registration_Info_UClass_UWebSocketConnectAsyncProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketConnectAsyncProxy.OuterSingleton, Z_Construct_UClass_UWebSocketConnectAsyncProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocketConnectAsyncProxy.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketConnectAsyncProxy>()
{
	return UWebSocketConnectAsyncProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketConnectAsyncProxy);
UWebSocketConnectAsyncProxy::~UWebSocketConnectAsyncProxy() {}
// End Class UWebSocketConnectAsyncProxy

// Begin Delegate FOnReconnectionEvent
struct Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics
{
	struct _Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms
	{
		UBlueprintWebSocket* WebSocket;
		int32 RemainingAttempts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_RemainingAttempts = { "RemainingAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms, RemainingAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_WebSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::NewProp_RemainingAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintWebSocket, nullptr, "OnReconnectionEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReconnectionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnReconnectionEvent, UBlueprintWebSocket* WebSocket, int32 RemainingAttempts)
{
	struct _Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms
	{
		UBlueprintWebSocket* WebSocket;
		int32 RemainingAttempts;
	};
	_Script_BlueprintWebSocket_eventOnReconnectionEvent_Parms Parms;
	Parms.WebSocket=WebSocket;
	Parms.RemainingAttempts=RemainingAttempts;
	OnReconnectionEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnReconnectionEvent

// Begin Class UWebSocketCreateConnectAsyncProxy Function Connect
struct Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics
{
	struct WebSocketCreateConnectAsyncProxy_eventConnect_Parms
	{
		FString Url;
		FString Protocol;
		TMap<FString,FString> Headers;
		UWebSocketCreateConnectAsyncProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Headers" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Helper node to easily connect to server and handle connection events.\n     * @param Url       The URL of the server we want to connect to.\n     * @param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n     * @param Headers   The header used during the upgrade.\n    */" },
		{ "DisplayName", "Connect to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Helper node to easily connect to server and handle connection events.\n@param Url       The URL of the server we want to connect to.\n@param Protocol  The protocol to use. Should be \"ws\" or \"wss\".\n@param Headers   The header used during the upgrade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketCreateConnectAsyncProxy_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::WebSocketCreateConnectAsyncProxy_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::WebSocketCreateConnectAsyncProxy_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketCreateConnectAsyncProxy::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWebSocketCreateConnectAsyncProxy**)Z_Param__Result=UWebSocketCreateConnectAsyncProxy::Connect(Z_Param_Url,Z_Param_Protocol,Z_Param_Out_Headers);
	P_NATIVE_END;
}
// End Class UWebSocketCreateConnectAsyncProxy Function Connect

// Begin Class UWebSocketCreateConnectAsyncProxy
void UWebSocketCreateConnectAsyncProxy::StaticRegisterNativesUWebSocketCreateConnectAsyncProxy()
{
	UClass* Class = UWebSocketCreateConnectAsyncProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UWebSocketCreateConnectAsyncProxy::execConnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketCreateConnectAsyncProxy);
UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_NoRegister()
{
	return UWebSocketCreateConnectAsyncProxy::StaticClass();
}
struct Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Asynchronous node to easily handle connection and events.\n **/" },
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asynchronous node to easily handle connection and events." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketCreateConnectAsyncProxy_Connect, "Connect" }, // 970554604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketCreateConnectAsyncProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWebSocketConnectAsyncProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::ClassParams = {
	&UWebSocketCreateConnectAsyncProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy()
{
	if (!Z_Registration_Info_UClass_UWebSocketCreateConnectAsyncProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketCreateConnectAsyncProxy.OuterSingleton, Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocketCreateConnectAsyncProxy.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketCreateConnectAsyncProxy>()
{
	return UWebSocketCreateConnectAsyncProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketCreateConnectAsyncProxy);
UWebSocketCreateConnectAsyncProxy::~UWebSocketCreateConnectAsyncProxy() {}
// End Class UWebSocketCreateConnectAsyncProxy

// Begin Class UWebSocketReconnectProxy Function OnConnected
struct Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "OnConnected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketReconnectProxy::execOnConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnected();
	P_NATIVE_END;
}
// End Class UWebSocketReconnectProxy Function OnConnected

// Begin Class UWebSocketReconnectProxy Function OnError
struct Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics
{
	struct WebSocketReconnectProxy_eventOnError_Parms
	{
		FString ConnectionError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError = { "ConnectionError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventOnError_Parms, ConnectionError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionError_MetaData), NewProp_ConnectionError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::NewProp_ConnectionError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "OnError", nullptr, nullptr, Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::WebSocketReconnectProxy_eventOnError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::WebSocketReconnectProxy_eventOnError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_OnError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_OnError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketReconnectProxy::execOnError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnError(Z_Param_ConnectionError);
	P_NATIVE_END;
}
// End Class UWebSocketReconnectProxy Function OnError

// Begin Class UWebSocketReconnectProxy Function Reconnect
struct Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics
{
	struct WebSocketReconnectProxy_eventReconnect_Parms
	{
		const UBlueprintWebSocket* WebSocket;
		FString Protocol;
		FString URL;
		int32 MaxAttemptCount;
		UWebSocketReconnectProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "WebSocket" },
		{ "Comment", "/**\n     * Tries to reconnect to the specified server.\n     * @param WebSocket The WebSocket we want to connect.\n     * @param Protocol The protocol to use.\n     * @param URL The URL of the server.\n     * @param MaxAttemptCount The maximum attempt before we fail the reconnection. Pass < 1 for unlimited.\n    */" },
		{ "CPP_Default_MaxAttemptCount", "1" },
		{ "DisplayName", "Reconnect to WebSocket server" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "Tries to reconnect to the specified server.\n@param WebSocket The WebSocket we want to connect.\n@param Protocol The protocol to use.\n@param URL The URL of the server.\n@param MaxAttemptCount The maximum attempt before we fail the reconnection. Pass < 1 for unlimited." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebSocket_MetaData), NewProp_WebSocket_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, Protocol), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_MaxAttemptCount = { "MaxAttemptCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, MaxAttemptCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSocketReconnectProxy_eventReconnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_WebSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_MaxAttemptCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketReconnectProxy, nullptr, "Reconnect", nullptr, nullptr, Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::WebSocketReconnectProxy_eventReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::WebSocketReconnectProxy_eventReconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSocketReconnectProxy::execReconnect)
{
	P_GET_OBJECT(UBlueprintWebSocket,Z_Param_WebSocket);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWebSocketReconnectProxy**)Z_Param__Result=UWebSocketReconnectProxy::Reconnect(Z_Param_WebSocket,Z_Param_Protocol,Z_Param_URL,Z_Param_MaxAttemptCount);
	P_NATIVE_END;
}
// End Class UWebSocketReconnectProxy Function Reconnect

// Begin Class UWebSocketReconnectProxy
void UWebSocketReconnectProxy::StaticRegisterNativesUWebSocketReconnectProxy()
{
	UClass* Class = UWebSocketReconnectProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnConnected", &UWebSocketReconnectProxy::execOnConnected },
		{ "OnError", &UWebSocketReconnectProxy::execOnError },
		{ "Reconnect", &UWebSocketReconnectProxy::execReconnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketReconnectProxy);
UClass* Z_Construct_UClass_UWebSocketReconnectProxy_NoRegister()
{
	return UWebSocketReconnectProxy::StaticClass();
}
struct Z_Construct_UClass_UWebSocketReconnectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintWebSocketNodes.h" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[] = {
		{ "Comment", "/**\n     * The socket is connected to the server.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "The socket is connected to the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttemptFailed_MetaData[] = {
		{ "Comment", "/**\n     * An attempt to reconnect failed.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "An attempt to reconnect failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
		{ "Comment", "/**\n     * We failed all attempts.\n    */" },
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
		{ "ToolTip", "We failed all attempts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintWebSocketNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Connected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AttemptFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_OnConnected, "OnConnected" }, // 1143979989
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_OnError, "OnError" }, // 367119763
		{ &Z_Construct_UFunction_UWebSocketReconnectProxy_Reconnect, "Reconnect" }, // 1215145745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketReconnectProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, Connected), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connected_MetaData), NewProp_Connected_MetaData) }; // 3286528754
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed = { "AttemptFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, AttemptFailed), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttemptFailed_MetaData), NewProp_AttemptFailed_MetaData) }; // 3286528754
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, Failed), Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failed_MetaData), NewProp_Failed_MetaData) }; // 3286528754
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebSocketReconnectProxy, WebSocket), Z_Construct_UClass_UBlueprintWebSocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebSocket_MetaData), NewProp_WebSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Connected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_AttemptFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_Failed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketReconnectProxy_Statics::NewProp_WebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWebSocketReconnectProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintWebSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketReconnectProxy_Statics::ClassParams = {
	&UWebSocketReconnectProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketReconnectProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSocketReconnectProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWebSocketReconnectProxy()
{
	if (!Z_Registration_Info_UClass_UWebSocketReconnectProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketReconnectProxy.OuterSingleton, Z_Construct_UClass_UWebSocketReconnectProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSocketReconnectProxy.OuterSingleton;
}
template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<UWebSocketReconnectProxy>()
{
	return UWebSocketReconnectProxy::StaticClass();
}
UWebSocketReconnectProxy::UWebSocketReconnectProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketReconnectProxy);
UWebSocketReconnectProxy::~UWebSocketReconnectProxy() {}
// End Class UWebSocketReconnectProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSocketConnectAsyncProxyBase, UWebSocketConnectAsyncProxyBase::StaticClass, TEXT("UWebSocketConnectAsyncProxyBase"), &Z_Registration_Info_UClass_UWebSocketConnectAsyncProxyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketConnectAsyncProxyBase), 1245214557U) },
		{ Z_Construct_UClass_UWebSocketConnectAsyncProxy, UWebSocketConnectAsyncProxy::StaticClass, TEXT("UWebSocketConnectAsyncProxy"), &Z_Registration_Info_UClass_UWebSocketConnectAsyncProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketConnectAsyncProxy), 955809056U) },
		{ Z_Construct_UClass_UWebSocketCreateConnectAsyncProxy, UWebSocketCreateConnectAsyncProxy::StaticClass, TEXT("UWebSocketCreateConnectAsyncProxy"), &Z_Registration_Info_UClass_UWebSocketCreateConnectAsyncProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketCreateConnectAsyncProxy), 1365159817U) },
		{ Z_Construct_UClass_UWebSocketReconnectProxy, UWebSocketReconnectProxy::StaticClass, TEXT("UWebSocketReconnectProxy"), &Z_Registration_Info_UClass_UWebSocketReconnectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketReconnectProxy), 3155396710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_3407864751(TEXT("/Script/BlueprintWebSocket"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Private_BlueprintWebSocketNodes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
