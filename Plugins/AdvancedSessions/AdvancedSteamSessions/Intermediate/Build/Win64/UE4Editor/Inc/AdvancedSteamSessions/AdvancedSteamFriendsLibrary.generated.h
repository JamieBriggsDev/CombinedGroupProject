// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamGroupInfo;
struct FBPUniqueNetId;
enum class EBlueprintResultSwitch : uint8;
enum class EBlueprintAsyncResultSwitch : uint8;
enum class SteamAvatarSize : uint8;
class UTexture2D;
#ifdef ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h
#error "AdvancedSteamFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedSteamFriendsLibrary.h"
#endif
#define ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h

#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_35_GENERATED_BODY \
	friend ADVANCEDSTEAMSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSteamGroupInfo(); \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSteamGroups) \
	{ \
		P_GET_TARRAY_REF(FBPSteamGroupInfo,Z_Param_Out_SteamGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamFriendsLibrary::GetSteamGroups(Z_Param_Out_SteamGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GameName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(Z_Param_UniqueNetId,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_GameName,Z_Param_Out_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID64); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPUniqueNetId*)Z_Param__Result=UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(Z_Param_SteamID64); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamPersonaName) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamPersonaName(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL(Z_Param_bRequireNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId,Z_Param_bRequireNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintAsyncResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(SteamAvatarSize,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,(EBlueprintAsyncResultSwitch&)(Z_Param_Out_Result),SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSteamGroups) \
	{ \
		P_GET_TARRAY_REF(FBPSteamGroupInfo,Z_Param_Out_SteamGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamFriendsLibrary::GetSteamGroups(Z_Param_Out_SteamGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GameName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_AppID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(Z_Param_UniqueNetId,(EBlueprintResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_GameName,Z_Param_Out_AppID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID64); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPUniqueNetId*)Z_Param__Result=UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(Z_Param_SteamID64); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamPersonaName) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamPersonaName(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL(Z_Param_bRequireNameOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId,Z_Param_bRequireNameOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_ENUM_REF(EBlueprintAsyncResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(SteamAvatarSize,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,(EBlueprintAsyncResultSwitch&)(Z_Param_Out_Result),SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamFriendsLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public:


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary)


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_PRIVATE_PROPERTY_OFFSET
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_56_PROLOG
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_RPC_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_INCLASS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_INCLASS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamFriendsLibrary_h


#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
