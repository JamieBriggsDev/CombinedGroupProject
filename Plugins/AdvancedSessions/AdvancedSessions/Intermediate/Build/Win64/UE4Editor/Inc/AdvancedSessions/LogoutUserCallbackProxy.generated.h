// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class ULogoutUserCallbackProxy;
#ifdef ADVANCEDSESSIONS_LogoutUserCallbackProxy_generated_h
#error "LogoutUserCallbackProxy.generated.h already included, missing '#pragma once' in LogoutUserCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_LogoutUserCallbackProxy_generated_h

#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogoutUser) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULogoutUserCallbackProxy**)Z_Param__Result=ULogoutUserCallbackProxy::LogoutUser(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogoutUser) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULogoutUserCallbackProxy**)Z_Param__Result=ULogoutUserCallbackProxy::LogoutUser(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogoutUserCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_ULogoutUserCallbackProxy(); \
public: \
	DECLARE_CLASS(ULogoutUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULogoutUserCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULogoutUserCallbackProxy(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_ULogoutUserCallbackProxy(); \
public: \
	DECLARE_CLASS(ULogoutUserCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(ULogoutUserCallbackProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutUserCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULogoutUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutUserCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(ULogoutUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const ULogoutUserCallbackProxy&); \
public:


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(ULogoutUserCallbackProxy&&); \
	ADVANCEDSESSIONS_API ULogoutUserCallbackProxy(const ULogoutUserCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, ULogoutUserCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutUserCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutUserCallbackProxy)


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_10_PROLOG
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LogoutUserCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_LogoutUserCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
