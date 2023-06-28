// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/MounteaDialogueSystemBFC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class IMounteaDialogueParticipantInterface;
class UAudioComponent;
class UDataTable;
class UMounteaDialogueContext;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UMounteaDialogueSystemSettings;
class UObject;
class UUserWidget;
struct FDialogueRow;
struct FDialogueRowData;
struct FGuid;
struct FSubtitlesSettings;
struct FUIRowID;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueSystemBFC_generated_h
#error "MounteaDialogueSystemBFC.generated.h already included, missing '#pragma once' in MounteaDialogueSystemBFC.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueSystemBFC_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubtitlesSettings); \
	DECLARE_FUNCTION(execGetRowDuration); \
	DECLARE_FUNCTION(execFindDialogueRow); \
	DECLARE_FUNCTION(execGetDialogueRow); \
	DECLARE_FUNCTION(execIsDialogueRowDataValid); \
	DECLARE_FUNCTION(execIsDialogueRowValid); \
	DECLARE_FUNCTION(execGetAllowedChildNodes); \
	DECLARE_FUNCTION(execGetFirstChildNode); \
	DECLARE_FUNCTION(execGetChildrenNodeFromIndex); \
	DECLARE_FUNCTION(execFindNodeByGUID); \
	DECLARE_FUNCTION(execGetDialogueManager); \
	DECLARE_FUNCTION(execInitializeDialogue); \
	DECLARE_FUNCTION(execCloseDialogue); \
	DECLARE_FUNCTION(execIsContextValid); \
	DECLARE_FUNCTION(execGetDefaultDialogueWidget); \
	DECLARE_FUNCTION(execGetDialogueSystemSettings); \
	DECLARE_FUNCTION(execGetPlayerDialogueParticipant); \
	DECLARE_FUNCTION(execFindAudioComponentByTag); \
	DECLARE_FUNCTION(execFindAudioComponentByName); \
	DECLARE_FUNCTION(execHasNodeBeenTraversed);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubtitlesSettings); \
	DECLARE_FUNCTION(execGetRowDuration); \
	DECLARE_FUNCTION(execFindDialogueRow); \
	DECLARE_FUNCTION(execGetDialogueRow); \
	DECLARE_FUNCTION(execIsDialogueRowDataValid); \
	DECLARE_FUNCTION(execIsDialogueRowValid); \
	DECLARE_FUNCTION(execGetAllowedChildNodes); \
	DECLARE_FUNCTION(execGetFirstChildNode); \
	DECLARE_FUNCTION(execGetChildrenNodeFromIndex); \
	DECLARE_FUNCTION(execFindNodeByGUID); \
	DECLARE_FUNCTION(execGetDialogueManager); \
	DECLARE_FUNCTION(execInitializeDialogue); \
	DECLARE_FUNCTION(execCloseDialogue); \
	DECLARE_FUNCTION(execIsContextValid); \
	DECLARE_FUNCTION(execGetDefaultDialogueWidget); \
	DECLARE_FUNCTION(execGetDialogueSystemSettings); \
	DECLARE_FUNCTION(execGetPlayerDialogueParticipant); \
	DECLARE_FUNCTION(execFindAudioComponentByTag); \
	DECLARE_FUNCTION(execFindAudioComponentByName); \
	DECLARE_FUNCTION(execHasNodeBeenTraversed);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueSystemBFC(); \
	friend struct Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueSystemBFC, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueSystemBFC)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueSystemBFC(); \
	friend struct Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueSystemBFC, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueSystemBFC)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueSystemBFC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueSystemBFC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueSystemBFC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueSystemBFC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueSystemBFC(UMounteaDialogueSystemBFC&&); \
	NO_API UMounteaDialogueSystemBFC(const UMounteaDialogueSystemBFC&); \
public: \
	NO_API virtual ~UMounteaDialogueSystemBFC();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueSystemBFC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueSystemBFC(UMounteaDialogueSystemBFC&&); \
	NO_API UMounteaDialogueSystemBFC(const UMounteaDialogueSystemBFC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueSystemBFC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueSystemBFC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueSystemBFC) \
	NO_API virtual ~UMounteaDialogueSystemBFC();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_31_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueSystemBFC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
