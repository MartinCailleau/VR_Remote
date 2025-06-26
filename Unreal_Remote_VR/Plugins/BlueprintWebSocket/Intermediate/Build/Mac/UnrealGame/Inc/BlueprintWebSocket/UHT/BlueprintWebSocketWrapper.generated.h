// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintWebSocketWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UBlueprintWebSocket;
enum class EBlueprintWebSocketIsConnectedExecution : uint8;
#ifdef BLUEPRINTWEBSOCKET_BlueprintWebSocketWrapper_generated_h
#error "BlueprintWebSocketWrapper.generated.h already included, missing '#pragma once' in BlueprintWebSocketWrapper.h"
#endif
#define BLUEPRINTWEBSOCKET_BlueprintWebSocketWrapper_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_10_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketConnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectedEvent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_11_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketConnectionErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectionErrorEvent, const FString& ConnectionError);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_12_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosedEvent, int64 StatusCode, const FString& Reason, bool bWasClean);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_13_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageEvent, const FString& MessageString);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_14_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketRawMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRawMessageEvent, TArray<uint8> const& Data, int32 BytesRemaining);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_15_DELEGATE \
BLUEPRINTWEBSOCKET_API void FWebSocketMessageSentEvent_DelegateWrapper(const FMulticastScriptDelegate& WebSocketMessageSentEvent, const FString& MessageString);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMessage); \
	DECLARE_FUNCTION(execOnClosed); \
	DECLARE_FUNCTION(execOnConnectionError); \
	DECLARE_FUNCTION(execOnConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSendRawMessage); \
	DECLARE_FUNCTION(execSendBinaryFile); \
	DECLARE_FUNCTION(execSendStringFile); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execBranchIsConnected); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRemoveHeader); \
	DECLARE_FUNCTION(execAddHeader); \
	DECLARE_FUNCTION(execSetHeaders); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateWebSocket);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintWebSocket(); \
	friend struct Z_Construct_UClass_UBlueprintWebSocket_Statics; \
public: \
	DECLARE_CLASS(UBlueprintWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintWebSocket"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintWebSocket)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintWebSocket(UBlueprintWebSocket&&); \
	UBlueprintWebSocket(const UBlueprintWebSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintWebSocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintWebSocket) \
	NO_API virtual ~UBlueprintWebSocket();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_31_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTWEBSOCKET_API UClass* StaticClass<class UBlueprintWebSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintWebSocket_Source_BlueprintWebSocket_Public_BlueprintWebSocketWrapper_h


#define FOREACH_ENUM_EBLUEPRINTWEBSOCKETISCONNECTEDEXECUTION(op) \
	op(EBlueprintWebSocketIsConnectedExecution::Connected) \
	op(EBlueprintWebSocketIsConnectedExecution::NotConnected) 

enum class EBlueprintWebSocketIsConnectedExecution : uint8;
template<> struct TIsUEnumClass<EBlueprintWebSocketIsConnectedExecution> { enum { Value = true }; };
template<> BLUEPRINTWEBSOCKET_API UEnum* StaticEnum<EBlueprintWebSocketIsConnectedExecution>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
