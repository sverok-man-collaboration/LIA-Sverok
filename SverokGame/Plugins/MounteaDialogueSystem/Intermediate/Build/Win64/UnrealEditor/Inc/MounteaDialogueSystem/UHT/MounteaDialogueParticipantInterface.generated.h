// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MounteaDialogueParticipantInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAudioComponent;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
enum class EDialogueParticipantState : uint8;
struct FGuid; 
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantInterface_generated_h
#error "MounteaDialogueParticipantInterface.generated.h already included, missing '#pragma once' in MounteaDialogueParticipantInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantInterface_generated_h

#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_22_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms \
{ \
	UMounteaDialogueGraph* NewGraph; \
}; \
static inline void FDialogueGraphChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueGraphChanged, UMounteaDialogueGraph* NewGraph) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms Parms; \
	Parms.NewGraph=NewGraph; \
	DialogueGraphChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_23_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms \
{ \
	EDialogueParticipantState NewState; \
}; \
static inline void FDialogueParticipantStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantStateChanged, EDialogueParticipantState const& NewState) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms Parms; \
	Parms.NewState=NewState; \
	DialogueParticipantStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_24_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms \
{ \
	const UAudioComponent* NewAudioComp; \
}; \
static inline void FDialogueParticipantAudioComponentChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantAudioComponentChanged, const UAudioComponent* NewAudioComp) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms Parms; \
	Parms.NewAudioComp=NewAudioComp; \
	DialogueParticipantAudioComponentChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_25_DELEGATE \
struct _Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms \
{ \
	const UMounteaDialogueGraphNode* NewSavedNode; \
}; \
static inline void FParticipantStartingNodeSaved_DelegateWrapper(const FMulticastScriptDelegate& ParticipantStartingNodeSaved, const UMounteaDialogueGraphNode* NewSavedNode) \
{ \
	_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms Parms; \
	Parms.NewSavedNode=NewSavedNode; \
	ParticipantStartingNodeSaved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_SPARSE_DATA
#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_RPC_WRAPPERS \
	virtual EDialogueParticipantState GetState_Implementation() const { return (EDialogueParticipantState)0; }; \
	virtual void SaveTraversedPath_Implementation(TMap<FGuid,int32>& InPath) {}; \
	virtual void SaveStartingNode_Implementation(UMounteaDialogueGraphNode* NewStartingNode) {}; \
	virtual AActor* GetOwningActor_Implementation() const { return NULL; }; \
	virtual bool CanStartDialogueEvent_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSaveTraversedPath); \
	DECLARE_FUNCTION(execSaveStartingNode); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCanStartDialogueEvent);


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSaveTraversedPath); \
	DECLARE_FUNCTION(execSaveStartingNode); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCanStartDialogueEvent);


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_ACCESSORS
#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_CALLBACK_WRAPPERS
#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueParticipantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueParticipantInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipantInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueParticipantInterface(UMounteaDialogueParticipantInterface&&); \
	NO_API UMounteaDialogueParticipantInterface(const UMounteaDialogueParticipantInterface&); \
public: \
	NO_API virtual ~UMounteaDialogueParticipantInterface();


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueParticipantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueParticipantInterface(UMounteaDialogueParticipantInterface&&); \
	NO_API UMounteaDialogueParticipantInterface(const UMounteaDialogueParticipantInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipantInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueParticipantInterface) \
	NO_API virtual ~UMounteaDialogueParticipantInterface();


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipantInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipantInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipantInterface)


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueParticipantInterface() {} \
public: \
	typedef UMounteaDialogueParticipantInterface UClassType; \
	typedef IMounteaDialogueParticipantInterface ThisClass; \
	static bool Execute_CanStartDialogueEvent(const UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static EDialogueParticipantState Execute_GetState(const UObject* O); \
	static void Execute_SaveStartingNode(UObject* O, UMounteaDialogueGraphNode* NewStartingNode); \
	static void Execute_SaveTraversedPath(UObject* O, TMap<FGuid,int32>& InPath); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IMounteaDialogueParticipantInterface() {} \
public: \
	typedef UMounteaDialogueParticipantInterface UClassType; \
	typedef IMounteaDialogueParticipantInterface ThisClass; \
	static bool Execute_CanStartDialogueEvent(const UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static EDialogueParticipantState Execute_GetState(const UObject* O); \
	static void Execute_SaveStartingNode(UObject* O, UMounteaDialogueGraphNode* NewStartingNode); \
	static void Execute_SaveTraversedPath(UObject* O, TMap<FGuid,int32>& InPath); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_11_PROLOG
#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_SPARSE_DATA \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_RPC_WRAPPERS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_ACCESSORS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_SPARSE_DATA \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_ACCESSORS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueParticipantInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
