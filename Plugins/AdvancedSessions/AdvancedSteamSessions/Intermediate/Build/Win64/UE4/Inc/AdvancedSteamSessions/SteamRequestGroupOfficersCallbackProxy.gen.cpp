// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/SteamRequestGroupOfficersCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRequestGroupOfficersCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature()
	{
		struct _Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms
		{
			TArray<FBPSteamGroupOfficer> OfficerList;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfficerList_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OfficerList = { UE4CodeGen_Private::EPropertyClass::Array, "OfficerList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms, OfficerList), METADATA_PARAMS(NewProp_OfficerList_MetaData, ARRAY_COUNT(NewProp_OfficerList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfficerList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OfficerList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPSteamGroupOfficer, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OfficerList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OfficerList_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions, "BlueprintGroupOfficerDetailsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AdvancedSteamSessions_eventBlueprintGroupOfficerDetailsDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FBPSteamGroupOfficer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupOfficer, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupOfficer(FBPSteamGroupOfficer::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupOfficer"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSteamGroupOfficer")),new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>);
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupOfficer;
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupOfficer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupOfficer"), sizeof(FBPSteamGroupOfficer), Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamGroupOfficer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOwner_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
				{ "ToolTip", "Uint64 representation" },
			};
#endif
			auto NewProp_bIsOwner_SetBit = [](void* Obj){ ((FBPSteamGroupOfficer*)Obj)->bIsOwner = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOwner = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBPSteamGroupOfficer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsOwner_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsOwner_MetaData, ARRAY_COUNT(NewProp_bIsOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfficerUniqueNetID_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfficerUniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "OfficerUniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupOfficer, OfficerUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_OfficerUniqueNetID_MetaData, ARRAY_COUNT(NewProp_OfficerUniqueNetID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OfficerUniqueNetID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPSteamGroupOfficer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPSteamGroupOfficer),
				alignof(FBPSteamGroupOfficer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupOfficer_CRC() { return 427947489U; }
	void USteamRequestGroupOfficersCallbackProxy::StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy()
	{
		UClass* Class = USteamRequestGroupOfficersCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSteamGroupOfficerList", &USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList()
	{
		struct SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId GroupUniqueNetID;
			USteamRequestGroupOfficersCallbackProxy* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, ReturnValue), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupUniqueNetID = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupUniqueNetID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, GroupUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupUniqueNetID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
				{ "ToolTip", "Returns a list of steam group officers" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, "GetSteamGroupOfficerList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList, "GetSteamGroupOfficerList" }, // 1310144397
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SteamRequestGroupOfficersCallbackProxy.h" },
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
				{ "ToolTip", "Called when there is an unsuccessful results return" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailure_MetaData, ARRAY_COUNT(NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Classes/SteamRequestGroupOfficersCallbackProxy.h" },
				{ "ToolTip", "Called when there is a successful results return" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USteamRequestGroupOfficersCallbackProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USteamRequestGroupOfficersCallbackProxy::StaticClass,
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
	IMPLEMENT_CLASS(USteamRequestGroupOfficersCallbackProxy, 2536288095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamRequestGroupOfficersCallbackProxy(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, &USteamRequestGroupOfficersCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamRequestGroupOfficersCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRequestGroupOfficersCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
