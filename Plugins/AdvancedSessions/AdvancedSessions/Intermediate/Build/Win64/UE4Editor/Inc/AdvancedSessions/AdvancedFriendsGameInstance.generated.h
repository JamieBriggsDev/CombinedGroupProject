// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPLoginStatus : uint8;
struct FBPUniqueNetId;
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h
#error "AdvancedFriendsGameInstance.generated.h already included, missing '#pragma once' in AdvancedFriendsGameInstance.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h

#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms \
	{ \
		int32 PlayerNum; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms \
	{ \
		int32 PlayerNum; \
		EBPLoginStatus PreviousStatus; \
		EBPLoginStatus NewStatus; \
		FBPUniqueNetId NewPlayerUniqueNetID; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms \
	{ \
		FBPUniqueNetId PlayerId; \
		bool bIsTalking; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInvited; \
		FBlueprintSessionResult SessionToJoin; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInviting; \
		FString AppId; \
		FBlueprintSessionResult SessionToJoin; \
	};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance(); \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance(); \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public:


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance)


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_26_PROLOG \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
