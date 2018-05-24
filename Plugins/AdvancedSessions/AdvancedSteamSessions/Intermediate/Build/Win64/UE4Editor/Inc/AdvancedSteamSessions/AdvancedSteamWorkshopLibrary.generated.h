// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamWorkshopID;
#ifdef ADVANCEDSTEAMSESSIONS_AdvancedSteamWorkshopLibrary_generated_h
#error "AdvancedSteamWorkshopLibrary.generated.h already included, missing '#pragma once' in AdvancedSteamWorkshopLibrary.h"
#endif
#define ADVANCEDSTEAMSESSIONS_AdvancedSteamWorkshopLibrary_generated_h

#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_203_GENERATED_BODY \
	friend ADVANCEDSTEAMSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails(); \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_59_GENERATED_BODY \
	friend ADVANCEDSTEAMSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID(); \
	ADVANCEDSTEAMSESSIONS_API static class UScriptStruct* StaticStruct();


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumSubscribedWorkshopItems) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(Z_Param_Out_NumberOfItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscribedWorkshopItems) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPSteamWorkshopID>*)Z_Param__Result=UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(Z_Param_Out_NumberOfItems); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumSubscribedWorkshopItems) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(Z_Param_Out_NumberOfItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscribedWorkshopItems) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumberOfItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FBPSteamWorkshopID>*)Z_Param__Result=UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(Z_Param_Out_NumberOfItems); \
		P_NATIVE_END; \
	}


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSteamWorkshopLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamWorkshopLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamWorkshopLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSteamWorkshopLibrary(); \
	friend ADVANCEDSTEAMSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary(); \
public: \
	DECLARE_CLASS(UAdvancedSteamWorkshopLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamWorkshopLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamWorkshopLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamWorkshopLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamWorkshopLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamWorkshopLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamWorkshopLibrary(UAdvancedSteamWorkshopLibrary&&); \
	NO_API UAdvancedSteamWorkshopLibrary(const UAdvancedSteamWorkshopLibrary&); \
public:


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamWorkshopLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamWorkshopLibrary(UAdvancedSteamWorkshopLibrary&&); \
	NO_API UAdvancedSteamWorkshopLibrary(const UAdvancedSteamWorkshopLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamWorkshopLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamWorkshopLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamWorkshopLibrary)


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_PRIVATE_PROPERTY_OFFSET
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_300_PROLOG
#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_RPC_WRAPPERS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_INCLASS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_PRIVATE_PROPERTY_OFFSET \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_RPC_WRAPPERS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_INCLASS_NO_PURE_DECLS \
	CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h_303_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombinedGroupProject_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_AdvancedSteamWorkshopLibrary_h


#define FOREACH_ENUM_FBPWORKSHOPFILETYPE(op) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeCommunity) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeCollection) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeArt) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeVideo) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeGame) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeSoftware) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeConcept) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeMerch) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo) \
	op(FBPWorkshopFileType::k_EWorkshopFileTypeMax) 
#define FOREACH_ENUM_FBPSTEAMRESULT(op) \
	op(FBPSteamResult::k_EResultOK) \
	op(FBPSteamResult::k_EResultFail) \
	op(FBPSteamResult::k_EResultNoConnection) \
	op(FBPSteamResult::k_EResultInvalidPassword) \
	op(FBPSteamResult::k_EResultLoggedInElsewhere) \
	op(FBPSteamResult::k_EResultInvalidProtocolVer) \
	op(FBPSteamResult::k_EResultInvalidParam) \
	op(FBPSteamResult::k_EResultFileNotFound) \
	op(FBPSteamResult::k_EResultBusy) \
	op(FBPSteamResult::k_EResultInvalidState) \
	op(FBPSteamResult::k_EResultInvalidName) \
	op(FBPSteamResult::k_EResultInvalidEmail) \
	op(FBPSteamResult::k_EResultDuplicateName) \
	op(FBPSteamResult::k_EResultAccessDenied) \
	op(FBPSteamResult::k_EResultTimeout) \
	op(FBPSteamResult::k_EResultBanned) \
	op(FBPSteamResult::k_EResultAccountNotFound) \
	op(FBPSteamResult::k_EResultInvalidSteamID) \
	op(FBPSteamResult::k_EResultServiceUnavailable) \
	op(FBPSteamResult::k_EResultNotLoggedOn) \
	op(FBPSteamResult::k_EResultPending) \
	op(FBPSteamResult::k_EResultEncryptionFailure) \
	op(FBPSteamResult::k_EResultInsufficientPrivilege) \
	op(FBPSteamResult::k_EResultLimitExceeded) \
	op(FBPSteamResult::k_EResultRevoked) \
	op(FBPSteamResult::k_EResultExpired) \
	op(FBPSteamResult::k_EResultAlreadyRedeemed) \
	op(FBPSteamResult::k_EResultDuplicateRequest) \
	op(FBPSteamResult::k_EResultAlreadyOwned) \
	op(FBPSteamResult::k_EResultIPNotFound) \
	op(FBPSteamResult::k_EResultPersistFailed) \
	op(FBPSteamResult::k_EResultLockingFailed) \
	op(FBPSteamResult::k_EResultLogonSessionReplaced) \
	op(FBPSteamResult::k_EResultConnectFailed) \
	op(FBPSteamResult::k_EResultHandshakeFailed) \
	op(FBPSteamResult::k_EResultIOFailure) \
	op(FBPSteamResult::k_EResultRemoteDisconnect) \
	op(FBPSteamResult::k_EResultShoppingCartNotFound) \
	op(FBPSteamResult::k_EResultBlocked) \
	op(FBPSteamResult::k_EResultIgnored) \
	op(FBPSteamResult::k_EResultNoMatch) \
	op(FBPSteamResult::k_EResultAccountDisabled) \
	op(FBPSteamResult::k_EResultServiceReadOnly) \
	op(FBPSteamResult::k_EResultAccountNotFeatured) \
	op(FBPSteamResult::k_EResultAdministratorOK) \
	op(FBPSteamResult::k_EResultContentVersion) \
	op(FBPSteamResult::k_EResultTryAnotherCM) \
	op(FBPSteamResult::k_EResultPasswordRequiredToKickSession) \
	op(FBPSteamResult::k_EResultAlreadyLoggedInElsewhere) \
	op(FBPSteamResult::k_EResultSuspended) \
	op(FBPSteamResult::k_EResultCancelled) \
	op(FBPSteamResult::k_EResultDataCorruption) \
	op(FBPSteamResult::k_EResultDiskFull) \
	op(FBPSteamResult::k_EResultRemoteCallFailed) \
	op(FBPSteamResult::k_EResultPasswordUnset) \
	op(FBPSteamResult::k_EResultExternalAccountUnlinked) \
	op(FBPSteamResult::k_EResultPSNTicketInvalid) \
	op(FBPSteamResult::k_EResultExternalAccountAlreadyLinked) \
	op(FBPSteamResult::k_EResultRemoteFileConflict) \
	op(FBPSteamResult::k_EResultIllegalPassword) \
	op(FBPSteamResult::k_EResultSameAsPreviousValue) \
	op(FBPSteamResult::k_EResultAccountLogonDenied) \
	op(FBPSteamResult::k_EResultCannotUseOldPassword) \
	op(FBPSteamResult::k_EResultInvalidLoginAuthCode) \
	op(FBPSteamResult::k_EResultAccountLogonDeniedNoMail) \
	op(FBPSteamResult::k_EResultHardwareNotCapableOfIPT) \
	op(FBPSteamResult::k_EResultIPTInitError) \
	op(FBPSteamResult::k_EResultParentalControlRestricted) \
	op(FBPSteamResult::k_EResultFacebookQueryError) \
	op(FBPSteamResult::k_EResultExpiredLoginAuthCode) \
	op(FBPSteamResult::k_EResultIPLoginRestrictionFailed) \
	op(FBPSteamResult::k_EResultAccountLockedDown) \
	op(FBPSteamResult::k_EResultAccountLogonDeniedVerifiedEmailRequired) \
	op(FBPSteamResult::k_EResultNoMatchingURL) \
	op(FBPSteamResult::k_EResultBadResponse) \
	op(FBPSteamResult::k_EResultRequirePasswordReEntry) \
	op(FBPSteamResult::k_EResultValueOutOfRange) \
	op(FBPSteamResult::k_EResultUnexpectedError) \
	op(FBPSteamResult::k_EResultDisabled) \
	op(FBPSteamResult::k_EResultInvalidCEGSubmission) \
	op(FBPSteamResult::k_EResultRestrictedDevice) \
	op(FBPSteamResult::k_EResultRegionLocked) \
	op(FBPSteamResult::k_EResultRateLimitExceeded) \
	op(FBPSteamResult::k_EResultAccountLoginDeniedNeedTwoFactor) \
	op(FBPSteamResult::k_EResultItemDeleted) \
	op(FBPSteamResult::k_EResultAccountLoginDeniedThrottle) \
	op(FBPSteamResult::k_EResultTwoFactorCodeMismatch) \
	op(FBPSteamResult::k_EResultTwoFactorActivationCodeMismatch) \
	op(FBPSteamResult::k_EResultAccountAssociatedToMultiplePartners) \
	op(FBPSteamResult::k_EResultNotModified) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
