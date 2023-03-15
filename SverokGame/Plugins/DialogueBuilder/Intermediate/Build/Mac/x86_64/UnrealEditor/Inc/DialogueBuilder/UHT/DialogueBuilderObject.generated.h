// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueBuilderObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDialogueDetailsStruct;
#ifdef DIALOGUEBUILDER_DialogueBuilderObject_generated_h
#error "DialogueBuilderObject.generated.h already included, missing '#pragma once' in DialogueBuilderObject.h"
#endif
#define DIALOGUEBUILDER_DialogueBuilderObject_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DIALOGUEBUILDER_API UScriptStruct* StaticStruct<struct FDialogueDetailsStruct>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugGetAllIndexes); \
	DECLARE_FUNCTION(execSetDataElement); \
	DECLARE_FUNCTION(execRemoveDataElement); \
	DECLARE_FUNCTION(execAddDialogueDataElement); \
	DECLARE_FUNCTION(execIsPossibleToMoveFurther); \
	DECLARE_FUNCTION(execGetListIndexFromNodeID); \
	DECLARE_FUNCTION(execMarkNodeasAlreadyPlayed); \
	DECLARE_FUNCTION(execMoveToNextNodesFromNodeID); \
	DECLARE_FUNCTION(execStartDialogueFromNodeID); \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugGetAllIndexes); \
	DECLARE_FUNCTION(execSetDataElement); \
	DECLARE_FUNCTION(execRemoveDataElement); \
	DECLARE_FUNCTION(execAddDialogueDataElement); \
	DECLARE_FUNCTION(execIsPossibleToMoveFurther); \
	DECLARE_FUNCTION(execGetListIndexFromNodeID); \
	DECLARE_FUNCTION(execMarkNodeasAlreadyPlayed); \
	DECLARE_FUNCTION(execMoveToNextNodesFromNodeID); \
	DECLARE_FUNCTION(execStartDialogueFromNodeID); \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueBuilderObject(); \
	friend struct Z_Construct_UClass_UDialogueBuilderObject_Statics; \
public: \
	DECLARE_CLASS(UDialogueBuilderObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueBuilder"), NO_API) \
	DECLARE_SERIALIZER(UDialogueBuilderObject) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Test=NETFIELD_REP_START, \
		NETFIELD_REP_END=Test	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueBuilderObject(); \
	friend struct Z_Construct_UClass_UDialogueBuilderObject_Statics; \
public: \
	DECLARE_CLASS(UDialogueBuilderObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueBuilder"), NO_API) \
	DECLARE_SERIALIZER(UDialogueBuilderObject) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Test=NETFIELD_REP_START, \
		NETFIELD_REP_END=Test	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueBuilderObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueBuilderObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueBuilderObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueBuilderObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueBuilderObject(UDialogueBuilderObject&&); \
	NO_API UDialogueBuilderObject(const UDialogueBuilderObject&); \
public: \
	NO_API virtual ~UDialogueBuilderObject();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueBuilderObject(UDialogueBuilderObject&&); \
	NO_API UDialogueBuilderObject(const UDialogueBuilderObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueBuilderObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueBuilderObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueBuilderObject) \
	NO_API virtual ~UDialogueBuilderObject();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_97_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEBUILDER_API UClass* StaticClass<class UDialogueBuilderObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
