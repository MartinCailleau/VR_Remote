// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintWebSocket_init() {}
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature();
	BLUEPRINTWEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintWebSocket;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintWebSocket()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintWebSocket.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_OnReconnectionEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketClosedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketConnectionErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketMessageSentEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintWebSocket_WebSocketRawMessageEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintWebSocket",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xED6F830A,
				0xED51452F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintWebSocket.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintWebSocket.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintWebSocket(Z_Construct_UPackage__Script_BlueprintWebSocket, TEXT("/Script/BlueprintWebSocket"), Z_Registration_Info_UPackage__Script_BlueprintWebSocket, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED6F830A, 0xED51452F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
