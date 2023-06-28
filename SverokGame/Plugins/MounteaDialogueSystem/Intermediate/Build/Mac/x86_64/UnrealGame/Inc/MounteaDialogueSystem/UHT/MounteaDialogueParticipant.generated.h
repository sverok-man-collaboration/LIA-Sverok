// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MounteaDialogueParticipant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
enum class EDialogueParticipantState : uint8;
struct FGuid; 
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipant_generated_h
#error "MounteaDialogueParticipant.generated.h already included, missing '#pragma once' in MounteaDialogueParticipant.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipant_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_RPC_WRAPPERS \
	virtual void InitializeParticipant_Implementation(); \
 \
	DECLARE_FUNCTION(execGetTraversedPath); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execSetDefaultParticipantState); \
	DECLARE_FUNCTION(execGetDefaultParticipantState); \
	DECLARE_FUNCTION(execSetParticipantState); \
	DECLARE_FUNCTION(execGetParticipantState); \
	DECLARE_FUNCTION(execSetDialogueGraph); \
	DECLARE_FUNCTION(execGetDialogueGraph); \
	DECLARE_FUNCTION(execGetSavedStartingNode); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execFindAudioComponentByTag); \
	DECLARE_FUNCTION(execFindAudioComponentByName); \
	DECLARE_FUNCTION(execFindAudioComponent); \
	DECLARE_FUNCTION(execInitializeParticipant);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTraversedPath); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execSetDefaultParticipantState); \
	DECLARE_FUNCTION(execGetDefaultParticipantState); \
	DECLARE_FUNCTION(execSetParticipantState); \
	DECLARE_FUNCTION(execGetParticipantState); \
	DECLARE_FUNCTION(execSetDialogueGraph); \
	DECLARE_FUNCTION(execGetDialogueGraph); \
	DECLARE_FUNCTION(execGetSavedStartingNode); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execFindAudioComponentByTag); \
	DECLARE_FUNCTION(execFindAudioComponentByName); \
	DECLARE_FUNCTION(execFindAudioComponent); \
	DECLARE_FUNCTION(execInitializeParticipant);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipant(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipant_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipant, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipant) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueParticipant*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipant(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipant_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipant, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipant) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueParticipant*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueParticipant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueParticipant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueParticipant(UMounteaDialogueParticipant&&); \
	NO_API UMounteaDialogueParticipant(const UMounteaDialogueParticipant&); \
public: \
	NO_API virtual ~UMounteaDialogueParticipant();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueParticipant(UMounteaDialogueParticipant&&); \
	NO_API UMounteaDialogueParticipant(const UMounteaDialogueParticipant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueParticipant) \
	NO_API virtual ~UMounteaDialogueParticipant();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_19_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueParticipant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
