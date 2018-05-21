// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SteamWSRequestUGCDetailsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWSRequestUGCDetailsCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms
		{
			FBPSteamWorkshopItemDetails WorkShopDetails;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkShopDetails_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkShopDetails = { UE4CodeGen_Private::EPropertyClass::Struct, "WorkShopDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms, WorkShopDetails), Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails, METADATA_PARAMS(NewProp_WorkShopDetails_MetaData, ARRAY_COUNT(NewProp_WorkShopDetails_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkShopDetails,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/SteamWSRequestUGCDetailsCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions, "BlueprintWorkshopDetailsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void USteamWSRequestUGCDetailsCallbackProxy::StaticRegisterNativesUSteamWSRequestUGCDetailsCallbackProxy()
	{
		UClass* Class = USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorkshopItemDetails", &USteamWSRequestUGCDetailsCallbackProxy::execGetWorkshopItemDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails()
	{
		struct SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms
		{
			UObject* WorldContextObject;
			FBPSteamWorkshopID WorkShopID;
			USteamWSRequestUGCDetailsCallbackProxy* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, ReturnValue), Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkShopID = { UE4CodeGen_Private::EPropertyClass::Struct, "WorkShopID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, WorkShopID), Z_Construct_UScriptStruct_FBPSteamWorkshopID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkShopID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|AdvancedSteamWorkshop" },
				{ "ModuleRelativePath", "Classes/SteamWSRequestUGCDetailsCallbackProxy.h" },
				{ "ToolTip", "Ends the current session" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy, "GetWorkshopItemDetails", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister()
	{
		return USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails, "GetWorkshopItemDetails" }, // 205455333
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SteamWSRequestUGCDetailsCallbackProxy.h" },
				{ "ModuleRelativePath", "Classes/SteamWSRequestUGCDetailsCallbackProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SteamWSRequestUGCDetailsCallbackProxy.h" },
				{ "ToolTip", "Called when there is an unsuccessful results return" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamWSRequestUGCDetailsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SteamWSRequestUGCDetailsCallbackProxy.h" },
				{ "ToolTip", "Called when there is a successful results return" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamWSRequestUGCDetailsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USteamWSRequestUGCDetailsCallbackProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USteamWSRequestUGCDetailsCallbackProxy::StaticClass,
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
	IMPLEMENT_CLASS(USteamWSRequestUGCDetailsCallbackProxy, 1789176234);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamWSRequestUGCDetailsCallbackProxy(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy, &USteamWSRequestUGCDetailsCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamWSRequestUGCDetailsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWSRequestUGCDetailsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
