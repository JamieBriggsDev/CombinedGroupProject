// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedSteamFriendsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSteamFriendsLibrary() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed();
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo();
// End Cross Module References
	static UEnum* SteamAvatarSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("SteamAvatarSize"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SteamAvatarSize(SteamAvatarSize_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("SteamAvatarSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize_CRC() { return 3622549372U; }
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SteamAvatarSize"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SteamAvatarSize::SteamAvatar_Small", (int64)SteamAvatarSize::SteamAvatar_Small },
				{ "SteamAvatarSize::SteamAvatar_Medium", (int64)SteamAvatarSize::SteamAvatar_Medium },
				{ "SteamAvatarSize::SteamAvatar_Large", (int64)SteamAvatarSize::SteamAvatar_Large },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SteamAvatarSize",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"SteamAvatarSize",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBPSteamGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamGroupInfo, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamGroupInfo(FBPSteamGroupInfo::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPSteamGroupInfo")),new UScriptStruct::TCppStructOps<FBPSteamGroupInfo>);
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamGroupInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamGroupInfo"), sizeof(FBPSteamGroupInfo), Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamGroupInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numChatting_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_numChatting = { UE4CodeGen_Private::EPropertyClass::Int, "numChatting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, numChatting), METADATA_PARAMS(NewProp_numChatting_MetaData, ARRAY_COUNT(NewProp_numChatting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numInGame_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_numInGame = { UE4CodeGen_Private::EPropertyClass::Int, "numInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, numInGame), METADATA_PARAMS(NewProp_numInGame_MetaData, ARRAY_COUNT(NewProp_numInGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOnline_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_numOnline = { UE4CodeGen_Private::EPropertyClass::Int, "numOnline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, numOnline), METADATA_PARAMS(NewProp_numOnline_MetaData, ARRAY_COUNT(NewProp_numOnline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupTag_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupTag = { UE4CodeGen_Private::EPropertyClass::Str, "GroupTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, GroupTag), METADATA_PARAMS(NewProp_GroupTag_MetaData, ARRAY_COUNT(NewProp_GroupTag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Uint64 representation" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Str, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, GroupName), METADATA_PARAMS(NewProp_GroupName_MetaData, ARRAY_COUNT(NewProp_GroupName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupID = { UE4CodeGen_Private::EPropertyClass::Struct, "GroupID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FBPSteamGroupInfo, GroupID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_GroupID_MetaData, ARRAY_COUNT(NewProp_GroupID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numChatting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numInGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numOnline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupTag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPSteamGroupInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBPSteamGroupInfo),
				alignof(FBPSteamGroupInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamGroupInfo_CRC() { return 519918751U; }
	void UAdvancedSteamFriendsLibrary::StaticRegisterNativesUAdvancedSteamFriendsLibrary()
	{
		UClass* Class = UAdvancedSteamFriendsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSteamIDFromString", &UAdvancedSteamFriendsLibrary::execCreateSteamIDFromString },
			{ "GetFriendSteamLevel", &UAdvancedSteamFriendsLibrary::execGetFriendSteamLevel },
			{ "GetSteamFriendAvatar", &UAdvancedSteamFriendsLibrary::execGetSteamFriendAvatar },
			{ "GetSteamFriendGamePlayed", &UAdvancedSteamFriendsLibrary::execGetSteamFriendGamePlayed },
			{ "GetSteamGroups", &UAdvancedSteamFriendsLibrary::execGetSteamGroups },
			{ "GetSteamPersonaName", &UAdvancedSteamFriendsLibrary::execGetSteamPersonaName },
			{ "RequestSteamFriendInfo", &UAdvancedSteamFriendsLibrary::execRequestSteamFriendInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString()
	{
		struct AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms
		{
			FString SteamID64;
			FBPUniqueNetId ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID64_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID64 = { UE4CodeGen_Private::EPropertyClass::Str, "SteamID64", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms, SteamID64), METADATA_PARAMS(NewProp_SteamID64_MetaData, ARRAY_COUNT(NewProp_SteamID64_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteamID64,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Creates a unique steam id directly from a string holding a uint64 value, useful for testing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "CreateSteamIDFromString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AdvancedSteamFriendsLibrary_eventCreateSteamIDFromString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel()
	{
		struct AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms
		{
			FBPUniqueNetId UniqueNetId;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Gets the level of a friends steam account, STEAM ONLY, Returns -1 if the steam level is not known, might need RequestSteamFriendInfo called first." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "GetFriendSteamLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdvancedSteamFriendsLibrary_eventGetFriendSteamLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms
		{
			FBPUniqueNetId UniqueNetId;
			EBlueprintAsyncResultSwitch Result;
			SteamAvatarSize AvatarSize;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvatarSize = { UE4CodeGen_Private::EPropertyClass::Enum, "AvatarSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms, AvatarSize), Z_Construct_UEnum_AdvancedSteamSessions_SteamAvatarSize, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvatarSize_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvatarSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvatarSize_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "CPP_Default_AvatarSize", "SteamAvatar_Medium" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Get a texture of a valid friends avatar, STEAM ONLY, Returns invalid texture if the subsystem hasn't loaded that size of avatar yet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "GetSteamFriendAvatar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamFriendAvatar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms
		{
			FBPUniqueNetId UniqueNetId;
			EBlueprintResultSwitch Result;
			FString GameName;
			int32 AppID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID = { UE4CodeGen_Private::EPropertyClass::Int, "AppID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName = { UE4CodeGen_Private::EPropertyClass::Str, "GameName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms, GameName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms, Result), Z_Construct_UEnum_AdvancedSessions_EBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Gets the current game played by a friend - AppID is int32 even though steam ids are uint32, can't be helped in blueprint currently\n      *  The game name is retrieved from steamSDK AppList which isn't available to all game IDs without request, can use the AppID with the\n      *  WebAPI GetAppList request as an alternative." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "GetSteamFriendGamePlayed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamFriendGamePlayed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms
		{
			TArray<FBPSteamGroupInfo> SteamGroups;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamGroups = { UE4CodeGen_Private::EPropertyClass::Array, "SteamGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms, SteamGroups), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPSteamGroupInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteamGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SteamGroups_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|SteamAPI|SteamGroups" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Get a full list of steam groups" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "GetSteamGroups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamGroups_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName()
	{
		struct AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms
		{
			FBPUniqueNetId UniqueNetId;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Gets the persona name of a steam ID, STEAM ONLY, Returns empty if no result, might need RequestSteamFriendInfo called first." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "GetSteamPersonaName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdvancedSteamFriendsLibrary_eventGetSteamPersonaName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo()
	{
		struct AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bRequireNameOnly_SetBit = [](void* Obj){ ((AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms*)Obj)->bRequireNameOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequireNameOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequireNameOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueNetId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(NewProp_UniqueNetId_MetaData, ARRAY_COUNT(NewProp_UniqueNetId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequireNameOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueNetId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Online|AdvancedFriends|SteamAPI" },
				{ "CPP_Default_bRequireNameOnly", "false" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
				{ "ToolTip", "Preloads the avatar and name of a steam friend, return whether it is already available or not, STEAM ONLY, Takes time to actually load everything after this is called." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamFriendsLibrary, "RequestSteamFriendInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AdvancedSteamFriendsLibrary_eventRequestSteamFriendInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary_NoRegister()
	{
		return UAdvancedSteamFriendsLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_CreateSteamIDFromString, "CreateSteamIDFromString" }, // 3304694577
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 2555646123
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar, "GetSteamFriendAvatar" }, // 1258332605
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed, "GetSteamFriendGamePlayed" }, // 17731211
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamGroups, "GetSteamGroups" }, // 3235985416
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_GetSteamPersonaName, "GetSteamPersonaName" }, // 974511285
				{ &Z_Construct_UFunction_UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo, "RequestSteamFriendInfo" }, // 4075691849
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AdvancedSteamFriendsLibrary.h" },
				{ "ModuleRelativePath", "Classes/AdvancedSteamFriendsLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvancedSteamFriendsLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvancedSteamFriendsLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedSteamFriendsLibrary, 3107466526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedSteamFriendsLibrary(Z_Construct_UClass_UAdvancedSteamFriendsLibrary, &UAdvancedSteamFriendsLibrary::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("UAdvancedSteamFriendsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSteamFriendsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
