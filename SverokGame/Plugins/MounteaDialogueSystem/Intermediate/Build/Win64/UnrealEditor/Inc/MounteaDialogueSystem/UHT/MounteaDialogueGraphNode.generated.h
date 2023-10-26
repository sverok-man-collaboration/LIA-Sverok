// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/MounteaDialogueGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UWorld;
struct FGuid;
struct FMounteaDialogueDecorator;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_generated_h
#error "MounteaDialogueGraphNode.generated.h already included, missing '#pragma once' in MounteaDialogueGraphNode.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_generated_h

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_SPARSE_DATA
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_RPC_WRAPPERS \
	virtual bool ValidateNodeRuntime_Implementation() const; \
	virtual void InitializeNode_Implementation(UWorld* InWorld); \
 \
	DECLARE_FUNCTION(execSetNewWorld); \
	DECLARE_FUNCTION(execValidateNodeRuntime); \
	DECLARE_FUNCTION(execGetParentNodes); \
	DECLARE_FUNCTION(execGetChildrenNodes); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNodeGUID); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetMaxChildNodes); \
	DECLARE_FUNCTION(execDoesInheritDecorators); \
	DECLARE_FUNCTION(execCanStartNode); \
	DECLARE_FUNCTION(execGetNodeDecorators); \
	DECLARE_FUNCTION(execDoesAutoStart); \
	DECLARE_FUNCTION(execInitializeNode);


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNewWorld); \
	DECLARE_FUNCTION(execValidateNodeRuntime); \
	DECLARE_FUNCTION(execGetParentNodes); \
	DECLARE_FUNCTION(execGetChildrenNodes); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNodeGUID); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetMaxChildNodes); \
	DECLARE_FUNCTION(execDoesInheritDecorators); \
	DECLARE_FUNCTION(execCanStartNode); \
	DECLARE_FUNCTION(execGetNodeDecorators); \
	DECLARE_FUNCTION(execDoesAutoStart); \
	DECLARE_FUNCTION(execInitializeNode);


#if WITH_EDITOR
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS \
	virtual FString GetNodeDocumentationLink_Implementation() const; \
	virtual FText GetNodeCategory_Implementation() const; \
	virtual FText GetDescription_Implementation() const; \
	virtual FText GetNodeTitle_Implementation() const; \
	virtual FText GetNodeTooltipText_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDefaultTooltipBody); \
	DECLARE_FUNCTION(execGetNodeDocumentationLink); \
	DECLARE_FUNCTION(execGetNodeCategory); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execGetNodeTooltipText);


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultTooltipBody); \
	DECLARE_FUNCTION(execGetNodeDocumentationLink); \
	DECLARE_FUNCTION(execGetNodeCategory); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execGetNodeTooltipText);


#else
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_ACCESSORS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_CALLBACK_WRAPPERS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraphNode(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraphNode_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraphNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraphNode)


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraphNode(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraphNode_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraphNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraphNode)


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueGraphNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueGraphNode(UMounteaDialogueGraphNode&&); \
	NO_API UMounteaDialogueGraphNode(const UMounteaDialogueGraphNode&); \
public: \
	NO_API virtual ~UMounteaDialogueGraphNode();


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueGraphNode(UMounteaDialogueGraphNode&&); \
	NO_API UMounteaDialogueGraphNode(const UMounteaDialogueGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraphNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueGraphNode) \
	NO_API virtual ~UMounteaDialogueGraphNode();


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_20_PROLOG
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_SPARSE_DATA \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_RPC_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_ACCESSORS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_CALLBACK_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_INCLASS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_SPARSE_DATA \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_ACCESSORS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_CALLBACK_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
