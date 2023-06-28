// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorators/MounteaDialogueDecoratorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueParticipantInterface;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UObject;
class UWorld;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueDecoratorBase_generated_h
#error "MounteaDialogueDecoratorBase.generated.h already included, missing '#pragma once' in MounteaDialogueDecoratorBase.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueDecoratorBase_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_RPC_WRAPPERS \
	virtual void ExecuteDecorator_Implementation(); \
	virtual bool EvaluateDecorator_Implementation(); \
	virtual bool ValidateDecorator_Implementation(TArray<FText>& ValidationMessages); \
	virtual void CleanupDecorator_Implementation(); \
	virtual void InitializeDecorator_Implementation(UWorld* World, TScriptInterface<IMounteaDialogueParticipantInterface> const& OwningParticipant); \
	virtual FString GetDecoratorDocumentationLink_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetOwnerParticipant); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetOwningGraph); \
	DECLARE_FUNCTION(execGetOwningNode); \
	DECLARE_FUNCTION(execGetOwningWorld); \
	DECLARE_FUNCTION(execStoreWorldReference); \
	DECLARE_FUNCTION(execExecuteDecorator); \
	DECLARE_FUNCTION(execEvaluateDecorator); \
	DECLARE_FUNCTION(execValidateDecorator); \
	DECLARE_FUNCTION(execCleanupDecorator); \
	DECLARE_FUNCTION(execInitializeDecorator); \
	DECLARE_FUNCTION(execGetDecoratorDocumentationLink);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwnerParticipant); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetOwningGraph); \
	DECLARE_FUNCTION(execGetOwningNode); \
	DECLARE_FUNCTION(execGetOwningWorld); \
	DECLARE_FUNCTION(execStoreWorldReference); \
	DECLARE_FUNCTION(execExecuteDecorator); \
	DECLARE_FUNCTION(execEvaluateDecorator); \
	DECLARE_FUNCTION(execValidateDecorator); \
	DECLARE_FUNCTION(execCleanupDecorator); \
	DECLARE_FUNCTION(execInitializeDecorator); \
	DECLARE_FUNCTION(execGetDecoratorDocumentationLink);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueDecoratorBase(); \
	friend struct Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueDecoratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueDecoratorBase)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueDecoratorBase(); \
	friend struct Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueDecoratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueDecoratorBase)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueDecoratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueDecoratorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueDecoratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueDecoratorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueDecoratorBase(UMounteaDialogueDecoratorBase&&); \
	NO_API UMounteaDialogueDecoratorBase(const UMounteaDialogueDecoratorBase&); \
public: \
	NO_API virtual ~UMounteaDialogueDecoratorBase();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueDecoratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueDecoratorBase(UMounteaDialogueDecoratorBase&&); \
	NO_API UMounteaDialogueDecoratorBase(const UMounteaDialogueDecoratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueDecoratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueDecoratorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueDecoratorBase) \
	NO_API virtual ~UMounteaDialogueDecoratorBase();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_30_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueDecoratorBase>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FMounteaDialogueDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h


#define FOREACH_ENUM_EDECORATORSTATE(op) \
	op(EDecoratorState::Uninitialized) \
	op(EDecoratorState::Initialized) 

enum class EDecoratorState : uint8;
template<> struct TIsUEnumClass<EDecoratorState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDecoratorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
