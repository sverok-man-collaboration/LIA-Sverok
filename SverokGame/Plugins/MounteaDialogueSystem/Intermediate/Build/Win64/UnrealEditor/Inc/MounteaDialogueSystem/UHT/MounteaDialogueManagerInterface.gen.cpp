// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/MounteaDialogueManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManagerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueInitialized_Parms
		{
			UMounteaDialogueContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueInitialized_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueInitialized__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueInitialized_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueEvent_Parms
		{
			UMounteaDialogueContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueEvent_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms
		{
			UMounteaDialogueContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueContextUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms
		{
			TSubclassOf<UUserWidget>  DialogueWidgetClass;
			UUserWidget* DialogueWidget;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms, DialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueUserInterfaceChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms
		{
			UMounteaDialogueContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueNodeEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms
		{
			UMounteaDialogueContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueRowEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueFailed_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms
		{
			EDialogueManagerState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData)) }; // 2269609251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueManagerStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueVoiceEvent_Parms
		{
			USoundBase* NewDialogueVoice;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueVoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::NewProp_NewDialogueVoice = { "NewDialogueVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueVoiceEvent_Parms, NewDialogueVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::NewProp_NewDialogueVoice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueVoiceEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueVoiceEvent_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueManagerState*)Z_Param__Result=P_THIS->GetState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execPrepareNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareNode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDialogueWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetDialogueWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDialogueContextEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueContext**)Z_Param__Result=P_THIS->GetDialogueContextEvent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCallDialogueNodeSelected)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDialogueNodeSelected_Implementation(Z_Param_Out_NodeGUID);
		P_NATIVE_END;
	}
	struct MounteaDialogueManagerInterface_eventCallDialogueNodeSelected_Parms
	{
		FGuid NodeGUID;
	};
	struct MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms
	{
		UMounteaDialogueContext* ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms
	{
		UUserWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct MounteaDialogueManagerInterface_eventGetOwningActor_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueManagerInterface_eventGetOwningActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct MounteaDialogueManagerInterface_eventGetState_Parms
	{
		EDialogueManagerState ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueManagerInterface_eventGetState_Parms()
			: ReturnValue((EDialogueManagerState)0)
		{
		}
	};
	void IMounteaDialogueManagerInterface::CallDialogueNodeSelected(FGuid const& NodeGUID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CallDialogueNodeSelected instead.");
	}
	UMounteaDialogueContext* IMounteaDialogueManagerInterface::GetDialogueContextEvent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueContextEvent instead.");
		MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms Parms;
		return Parms.ReturnValue;
	}
	UUserWidget* IMounteaDialogueManagerInterface::GetDialogueWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueWidget instead.");
		MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* IMounteaDialogueManagerInterface::GetOwningActor() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOwningActor instead.");
		MounteaDialogueManagerInterface_eventGetOwningActor_Parms Parms;
		return Parms.ReturnValue;
	}
	EDialogueManagerState IMounteaDialogueManagerInterface::GetState() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetState instead.");
		MounteaDialogueManagerInterface_eventGetState_Parms Parms;
		return Parms.ReturnValue;
	}
	void IMounteaDialogueManagerInterface::PrepareNode()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareNode instead.");
	}
	void UMounteaDialogueManagerInterface::StaticRegisterNativesUMounteaDialogueManagerInterface()
	{
		UClass* Class = UMounteaDialogueManagerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallDialogueNodeSelected", &IMounteaDialogueManagerInterface::execCallDialogueNodeSelected },
			{ "GetDialogueContextEvent", &IMounteaDialogueManagerInterface::execGetDialogueContextEvent },
			{ "GetDialogueWidget", &IMounteaDialogueManagerInterface::execGetDialogueWidget },
			{ "GetOwningActor", &IMounteaDialogueManagerInterface::execGetOwningActor },
			{ "GetState", &IMounteaDialogueManagerInterface::execGetState },
			{ "PrepareNode", &IMounteaDialogueManagerInterface::execPrepareNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventCallDialogueNodeSelected_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::NewProp_NodeGUID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Notifies the Dialogue  that a node has been selected.\n\x09 *\n\x09 * @param NodeGUID The GUID of the selected node.\n\x09 */" },
		{ "Keywords", "select, chosen, option" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Notifies the Dialogue  that a node has been selected.\n\n@param NodeGUID The GUID of the selected node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CallDialogueNodeSelected", nullptr, nullptr, sizeof(MounteaDialogueManagerInterface_eventCallDialogueNodeSelected_Parms), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Retrieves the current dialogue context associated with this dialogue instance.\n\x09 *\n\x09 * @return The dialogue context object for this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Retrieves the current dialogue context associated with this dialogue instance.\n\n@return The dialogue context object for this instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDialogueContextEvent", nullptr, nullptr, sizeof(MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the widget used to display the current dialogue.\n\x09 *\n\x09 * @return The widget used to display the current dialogue.\n\x09 */" },
		{ "Keywords", "UI, Widget" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Returns the widget used to display the current dialogue.\n\n@return The widget used to display the current dialogue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDialogueWidget", nullptr, nullptr, sizeof(MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the owning actor for this Dialogue Manager Component.\n\x09 *\n\x09 * @return The owning actor for this Dialogue Manager Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Returns the owning actor for this Dialogue Manager Component.\n\n@return The owning actor for this Dialogue Manager Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(MounteaDialogueManagerInterface_eventGetOwningActor_Parms), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(nullptr, 0) }; // 2269609251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Interface call.\n\x09 * Retrieves current Dialogue Manager State.\n\x09 * State defines whether Manager can start/close dialogue or not.\n\x09 * \n\x09 * @return ManagerState\x09Manager state value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Interface call.\nRetrieves current Dialogue Manager State.\nState defines whether Manager can start/close dialogue or not.\n\n@return ManagerState Manager state value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetState", nullptr, nullptr, sizeof(MounteaDialogueManagerInterface_eventGetState_Parms), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Prepares the node for execution.\n\x09 * Asks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\n\x09 * In this preparation stage, Nodes are asked to process all Decorators.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
		{ "ToolTip", "Prepares the node for execution.\nAsks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\nIn this preparation stage, Nodes are asked to process all Decorators." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "PrepareNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueManagerInterface);
	UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister()
	{
		return UMounteaDialogueManagerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CallDialogueNodeSelected, "CallDialogueNodeSelected" }, // 1603965915
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContextEvent, "GetDialogueContextEvent" }, // 2244486356
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget, "GetDialogueWidget" }, // 1104310481
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor, "GetOwningActor" }, // 1470301522
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetState, "GetState" }, // 1566866796
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode, "PrepareNode" }, // 3450421665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueManagerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueManagerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::ClassParams = {
		&UMounteaDialogueManagerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueManagerInterface>()
	{
		return UMounteaDialogueManagerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueManagerInterface);
	UMounteaDialogueManagerInterface::~UMounteaDialogueManagerInterface() {}
	static FName NAME_UMounteaDialogueManagerInterface_CallDialogueNodeSelected = FName(TEXT("CallDialogueNodeSelected"));
	void IMounteaDialogueManagerInterface::Execute_CallDialogueNodeSelected(UObject* O, FGuid const& NodeGUID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		MounteaDialogueManagerInterface_eventCallDialogueNodeSelected_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CallDialogueNodeSelected);
		if (Func)
		{
			Parms.NodeGUID=NodeGUID;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			I->CallDialogueNodeSelected_Implementation(NodeGUID);
		}
	}
	static FName NAME_UMounteaDialogueManagerInterface_GetDialogueContextEvent = FName(TEXT("GetDialogueContextEvent"));
	UMounteaDialogueContext* IMounteaDialogueManagerInterface::Execute_GetDialogueContextEvent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		MounteaDialogueManagerInterface_eventGetDialogueContextEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDialogueContextEvent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDialogueContextEvent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueManagerInterface_GetDialogueWidget = FName(TEXT("GetDialogueWidget"));
	UUserWidget* IMounteaDialogueManagerInterface::Execute_GetDialogueWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDialogueWidget);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetDialogueWidget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueManagerInterface_GetOwningActor = FName(TEXT("GetOwningActor"));
	AActor* IMounteaDialogueManagerInterface::Execute_GetOwningActor(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		MounteaDialogueManagerInterface_eventGetOwningActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetOwningActor);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetOwningActor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueManagerInterface_GetState = FName(TEXT("GetState"));
	EDialogueManagerState IMounteaDialogueManagerInterface::Execute_GetState(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		MounteaDialogueManagerInterface_eventGetState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetState);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetState_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueManagerInterface_PrepareNode = FName(TEXT("PrepareNode"));
	void IMounteaDialogueManagerInterface::Execute_PrepareNode(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_PrepareNode);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
		{
			I->PrepareNode_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueManagerInterface, UMounteaDialogueManagerInterface::StaticClass, TEXT("UMounteaDialogueManagerInterface"), &Z_Registration_Info_UClass_UMounteaDialogueManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueManagerInterface), 3007441672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_3030848644(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueManagerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
