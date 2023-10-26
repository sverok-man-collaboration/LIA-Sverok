// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MounteaDialogueWBPInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueManagerInterface;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueWBPInterface_generated_h
#error "MounteaDialogueWBPInterface.generated.h already included, missing '#pragma once' in MounteaDialogueWBPInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueWBPInterface_generated_h

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_SPARSE_DATA
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_RPC_WRAPPERS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_ACCESSORS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_CALLBACK_WRAPPERS
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueWBPInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueWBPInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueWBPInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueWBPInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueWBPInterface(UMounteaDialogueWBPInterface&&); \
	NO_API UMounteaDialogueWBPInterface(const UMounteaDialogueWBPInterface&); \
public: \
	NO_API virtual ~UMounteaDialogueWBPInterface();


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueWBPInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMounteaDialogueWBPInterface(UMounteaDialogueWBPInterface&&); \
	NO_API UMounteaDialogueWBPInterface(const UMounteaDialogueWBPInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueWBPInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueWBPInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueWBPInterface) \
	NO_API virtual ~UMounteaDialogueWBPInterface();


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueWBPInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueWBPInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueWBPInterface)


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueWBPInterface() {} \
public: \
	typedef UMounteaDialogueWBPInterface UClassType; \
	typedef IMounteaDialogueWBPInterface ThisClass; \
	static void Execute_OnOptionSelected(UObject* O, FGuid const& SelectionGUID); \
	static void Execute_RefreshDialogueWidget(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& Command); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IMounteaDialogueWBPInterface() {} \
public: \
	typedef UMounteaDialogueWBPInterface UClassType; \
	typedef IMounteaDialogueWBPInterface ThisClass; \
	static void Execute_OnOptionSelected(UObject* O, FGuid const& SelectionGUID); \
	static void Execute_RefreshDialogueWidget(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& Command); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_11_PROLOG
#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_SPARSE_DATA \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_RPC_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_ACCESSORS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_CALLBACK_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_SPARSE_DATA \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_ACCESSORS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_CALLBACK_WRAPPERS \
	FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueWBPInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueWBPInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
