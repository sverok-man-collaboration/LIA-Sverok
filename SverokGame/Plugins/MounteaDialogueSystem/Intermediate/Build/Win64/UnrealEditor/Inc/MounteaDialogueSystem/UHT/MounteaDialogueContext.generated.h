// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MounteaDialogueContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueParticipantInterface;
class UMounteaDialogueContext;
class UMounteaDialogueGraphNode;
struct FDialogueRow;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueContext_generated_h
#error "MounteaDialogueContext.generated.h already included, missing '#pragma once' in MounteaDialogueContext.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueContext_generated_h

#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_14_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueContextUpdatedFromBlueprint_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdatedFromBlueprint, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms Parms; \
	Parms.Context=Context; \
	DialogueContextUpdatedFromBlueprint.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_SPARSE_DATA
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateActiveDialogueParticipantBP); \
	DECLARE_FUNCTION(execUpdateDialoguePlayerParticipantBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowDataIndexBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueNodeBP); \
	DECLARE_FUNCTION(execUpdateDialogueParticipantBP); \
	DECLARE_FUNCTION(execSetDialogueContextBP); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateActiveDialogueParticipantBP); \
	DECLARE_FUNCTION(execUpdateDialoguePlayerParticipantBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowDataIndexBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueNodeBP); \
	DECLARE_FUNCTION(execUpdateDialogueParticipantBP); \
	DECLARE_FUNCTION(execSetDialogueContextBP); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_ACCESSORS
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueContext(); \
	friend struct Z_Construct_UClass_UMounteaDialogueContext_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueContext)


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMounteaDialogueContext(); \
	friend struct Z_Construct_UClass_UMounteaDialogueContext_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueContext)


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueContext(UMounteaDialogueContext&&); \
	NO_API UMounteaDialogueContext(const UMounteaDialogueContext&); \
public: \
	NO_API virtual ~UMounteaDialogueContext();


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueContext(UMounteaDialogueContext&&); \
	NO_API UMounteaDialogueContext(const UMounteaDialogueContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueContext) \
	NO_API virtual ~UMounteaDialogueContext();


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_24_PROLOG
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_SPARSE_DATA \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_RPC_WRAPPERS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_ACCESSORS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_INCLASS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_SPARSE_DATA \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_ACCESSORS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
