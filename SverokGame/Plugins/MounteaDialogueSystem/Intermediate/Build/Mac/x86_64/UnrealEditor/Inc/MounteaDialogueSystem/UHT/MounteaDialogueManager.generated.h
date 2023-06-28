// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MounteaDialogueManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMounteaDialogueContext;
class USoundBase;
class UUserWidget;
enum class EDialogueManagerState : uint8;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueManager_generated_h
#error "MounteaDialogueManager.generated.h already included, missing '#pragma once' in MounteaDialogueManager.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueManager_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishedExecuteDialogueRow); \
	DECLARE_FUNCTION(execStartExecuteDialogueRow); \
	DECLARE_FUNCTION(execGetDefaultDialogueManagerState); \
	DECLARE_FUNCTION(execGetDialogueManagerState); \
	DECLARE_FUNCTION(execGetDialogueContext); \
	DECLARE_FUNCTION(execGetDialogueUIPtr); \
	DECLARE_FUNCTION(execGetDialogueWidgetClass); \
	DECLARE_FUNCTION(execGetOwningActor_Implementation); \
	DECLARE_FUNCTION(execOnDialogueVoiceSkipRequestEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueVoiceStartRequestEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueRowFinishedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueRowStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeFinishedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeSelectedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueClosedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueUserInterfaceChangedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueContextUpdatedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueInitializedEvent_Internal);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishedExecuteDialogueRow); \
	DECLARE_FUNCTION(execStartExecuteDialogueRow); \
	DECLARE_FUNCTION(execGetDefaultDialogueManagerState); \
	DECLARE_FUNCTION(execGetDialogueManagerState); \
	DECLARE_FUNCTION(execGetDialogueContext); \
	DECLARE_FUNCTION(execGetDialogueUIPtr); \
	DECLARE_FUNCTION(execGetDialogueWidgetClass); \
	DECLARE_FUNCTION(execGetOwningActor_Implementation); \
	DECLARE_FUNCTION(execOnDialogueVoiceSkipRequestEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueVoiceStartRequestEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueRowFinishedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueRowStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeFinishedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueNodeSelectedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueClosedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueStartedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueUserInterfaceChangedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueContextUpdatedEvent_Internal); \
	DECLARE_FUNCTION(execOnDialogueInitializedEvent_Internal);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueManager(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManager_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManager) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueManager*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueManager(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManager_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManager) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueManager*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueManager(UMounteaDialogueManager&&); \
	NO_API UMounteaDialogueManager(const UMounteaDialogueManager&); \
public: \
	NO_API virtual ~UMounteaDialogueManager();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueManager(UMounteaDialogueManager&&); \
	NO_API UMounteaDialogueManager(const UMounteaDialogueManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueManager) \
	NO_API virtual ~UMounteaDialogueManager();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_18_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
