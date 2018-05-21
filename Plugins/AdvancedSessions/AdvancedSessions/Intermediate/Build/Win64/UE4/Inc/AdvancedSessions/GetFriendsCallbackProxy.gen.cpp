// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GetFriendsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetFriendsCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetFriendsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms
		{
			TArray<FBPFriendInfo> Results;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results = { UE4CodeGen_Private::EPropertyClass::Array, "Results", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms, Results), METADATA_PARAMS(NewProp_Results_MetaData, ARRAY_COUNT(NewProp_Results_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Results", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPFriendInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Results,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Results_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GetFriendsCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions, "BlueprintGetFriendsListDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvancedSessions_eventBlueprintGetFriendsListDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGetFriendsCallbackProxy::StaticRegisterNativesUGetFriendsCallbackProxy()
	{
		UClass* Class = UGetFriendsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAndStoreFriendsList", &UGetFriendsCallbackProxy::execGetAndStoreFriendsList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList()
	{
		struct GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UGetFriendsCallbackProxy* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, ReturnValue), Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|AdvancedFriends" },
				{ "ModuleRelativePath", "Classes/GetFriendsCallbackProxy.h" },
				{ "ToolTip", "Gets the players list of friends from the OnlineSubsystem and returns it, can be retrieved later with GetStoredFriendsList" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetFriendsCallbackProxy, "GetAndStoreFriendsList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GetFriendsCallbackProxy_eventGetAndStoreFriendsList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetFriendsCallbackProxy_NoRegister()
	{
		return UGetFriendsCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UGetFriendsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGetFriendsCallbackProxy_GetAndStoreFriendsList, "GetAndStoreFriendsList" }, // 2952858811
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GetFriendsCallbackProxy.h" },
				{ "ModuleRelativePath", "Classes/GetFriendsCallbackProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GetFriendsCallbackProxy.h" },
				{ "ToolTip", "Called when there was an error retrieving the friends list" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGetFriendsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GetFriendsCallbackProxy.h" },
				{ "ToolTip", "Called when the friends list successfully was retrieved" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGetFriendsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGetFriendsCallbackProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGetFriendsCallbackProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UGetFriendsCallbackProxy, 1092160097);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetFriendsCallbackProxy(Z_Construct_UClass_UGetFriendsCallbackProxy, &UGetFriendsCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UGetFriendsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetFriendsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
