// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MounteaDialogueManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMounteaDialogueContext;
class USoundBase;
class UUserWidget;
enum class EDialogueManagerState : uint8;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerInterface_generated_h
#error "MounteaDialogueManagerInterface.generated.h already included, missing '#pragma once' in MounteaDialogueManagerInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerInterface_generated_h

#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_20_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueInitialized_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueInitialized_DelegateWrapper(const FMulticastScriptDelegate& DialogueInitialized, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueInitialized_Parms Parms; \
	Parms.Context=Context; \
	DialogueInitialized.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_21_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueEvent_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueEvent, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueEvent_Parms Parms; \
	Parms.Context=Context; \
	DialogueEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_23_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueContextUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdated, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms Parms; \
	Parms.Context=Context; \
	DialogueContextUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_24_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms \
{ \
	TSubclassOf<UUserWidget>  DialogueWidgetClass; \
	UUserWidget* DialogueWidget; \
}; \
static inline void FDialogueUserInterfaceChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueUserInterfaceChanged, TSubclassOf<UUserWidget>  DialogueWidgetClass, UUserWidget* DialogueWidget) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms Parms; \
	Parms.DialogueWidgetClass=DialogueWidgetClass; \
	Parms.DialogueWidget=DialogueWidget; \
	DialogueUserInterfaceChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_26_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueNodeEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueNodeEvent, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms Parms; \
	Parms.Context=Context; \
	DialogueNodeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_27_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms \
{ \
	UMounteaDialogueContext* Context; \
}; \
static inline void FDialogueRowEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueRowEvent, UMounteaDialogueContext* Context) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms Parms; \
	Parms.Context=Context; \
	DialogueRowEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_29_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueFailed_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FDialogueFailed_DelegateWrapper(const FMulticastScriptDelegate& DialogueFailed, const FString& ErrorMessage) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueFailed_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	DialogueFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_31_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms \
{ \
	EDialogueManagerState NewState; \
}; \
static inline void FDialogueManagerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueManagerStateChanged, EDialogueManagerState const& NewState) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms Parms; \
	Parms.NewState=NewState; \
	DialogueManagerStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_33_DELEGATE \
struct _Script_MounteaDialogueSystem_eventDialogueVoiceEvent_Parms \
{ \
	USoundBase* NewDialogueVoice; \
}; \
static inline void FDialogueVoiceEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueVoiceEvent, USoundBase* NewDialogueVoice) \
{ \
	_Script_MounteaDialogueSystem_eventDialogueVoiceEvent_Parms Parms; \
	Parms.NewDialogueVoice=NewDialogueVoice; \
	DialogueVoiceEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_SPARSE_DATA
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_RPC_WRAPPERS \
	virtual EDialogueManagerState GetState_Implementation() const { return (EDialogueManagerState)0; }; \
	virtual void PrepareNode_Implementation() {}; \
	virtual AActor* GetOwningActor_Implementation() const { return NULL; }; \
	virtual UUserWidget* GetDialogueWidget_Implementation() { return NULL; }; \
	virtual UMounteaDialogueContext* GetDialogueContextEvent_Implementation() const { return NULL; }; \
	virtual void CallDialogueNodeSelected_Implementation(FGuid const& NodeGUID) {}; \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execPrepareNode); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetDialogueWidget); \
	DECLARE_FUNCTION(execGetDialogueContextEvent); \
	DECLARE_FUNCTION(execCallDialogueNodeSelected);


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CallDialogueNodeSelected_Implementation(FGuid const& NodeGUID) {}; \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execPrepareNode); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetDialogueWidget); \
	DECLARE_FUNCTION(execGetDialogueContextEvent); \
	DECLARE_FUNCTION(execCallDialogueNodeSelected);


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_ACCESSORS
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueManagerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManagerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueManagerInterface(UMounteaDialogueManagerInterface&&); \
	NO_API UMounteaDialogueManagerInterface(const UMounteaDialogueManagerInterface&); \
public: \
	NO_API virtual ~UMounteaDialogueManagerInterface();


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueManagerInterface(UMounteaDialogueManagerInterface&&); \
	NO_API UMounteaDialogueManagerInterface(const UMounteaDialogueManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueManagerInterface) \
	NO_API virtual ~UMounteaDialogueManagerInterface();


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueManagerInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManagerInterface)


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueManagerInterface() {} \
public: \
	typedef UMounteaDialogueManagerInterface UClassType; \
	typedef IMounteaDialogueManagerInterface ThisClass; \
	static void Execute_CallDialogueNodeSelected(UObject* O, FGuid const& NodeGUID); \
	static UMounteaDialogueContext* Execute_GetDialogueContextEvent(const UObject* O); \
	static UUserWidget* Execute_GetDialogueWidget(UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static EDialogueManagerState Execute_GetState(const UObject* O); \
	static void Execute_PrepareNode(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IMounteaDialogueManagerInterface() {} \
public: \
	typedef UMounteaDialogueManagerInterface UClassType; \
	typedef IMounteaDialogueManagerInterface ThisClass; \
	static void Execute_CallDialogueNodeSelected(UObject* O, FGuid const& NodeGUID); \
	static UMounteaDialogueContext* Execute_GetDialogueContextEvent(const UObject* O); \
	static UUserWidget* Execute_GetDialogueWidget(UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static EDialogueManagerState Execute_GetState(const UObject* O); \
	static void Execute_PrepareNode(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_11_PROLOG
#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_SPARSE_DATA \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_RPC_WRAPPERS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_ACCESSORS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_SPARSE_DATA \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_ACCESSORS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
