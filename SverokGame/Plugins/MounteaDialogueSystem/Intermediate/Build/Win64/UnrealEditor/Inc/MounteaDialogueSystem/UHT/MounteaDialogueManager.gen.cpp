// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Components/MounteaDialogueManager.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManager();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManager_NoRegister();
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
	DEFINE_FUNCTION(UMounteaDialogueManager::execFinishedExecuteDialogueRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishedExecuteDialogueRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execStartExecuteDialogueRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartExecuteDialogueRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetDefaultDialogueManagerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueManagerState*)Z_Param__Result=P_THIS->GetDefaultDialogueManagerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetDialogueManagerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueManagerState*)Z_Param__Result=P_THIS->GetDialogueManagerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetDialogueContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueContext**)Z_Param__Result=P_THIS->GetDialogueContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetDialogueUIPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetDialogueUIPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetDialogueWidgetClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UUserWidget> *)Z_Param__Result=P_THIS->GetDialogueWidgetClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execGetOwningActor_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execContinueDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueVoiceSkipRequestEvent_Internal)
	{
		P_GET_OBJECT(USoundBase,Z_Param_VoiceToSkip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueVoiceSkipRequestEvent_Internal(Z_Param_VoiceToSkip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueVoiceStartRequestEvent_Internal)
	{
		P_GET_OBJECT(USoundBase,Z_Param_VoiceToStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueVoiceStartRequestEvent_Internal(Z_Param_VoiceToStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueRowFinishedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueRowFinishedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueRowStartedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueRowStartedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueNodeFinishedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueNodeFinishedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueNodeStartedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueNodeStartedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueNodeSelectedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueNodeSelectedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueClosedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueClosedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueStartedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueStartedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueUserInterfaceChangedEvent_Internal)
	{
		P_GET_OBJECT(UClass,Z_Param_DialogueUIClass);
		P_GET_OBJECT(UUserWidget,Z_Param_DialogueUIWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueUserInterfaceChangedEvent_Internal(Z_Param_DialogueUIClass,Z_Param_DialogueUIWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueContextUpdatedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_NewContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueContextUpdatedEvent_Internal(Z_Param_NewContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueManager::execOnDialogueInitializedEvent_Internal)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueInitializedEvent_Internal(Z_Param_Context);
		P_NATIVE_END;
	}
	struct MounteaDialogueManager_eventOnDialogueClosedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueInitializedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueStartedEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	struct MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Parms
	{
		TSubclassOf<UUserWidget>  DialogueUIClass;
		UUserWidget* DialogueUIWidget;
	};
	struct MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Parms
	{
		USoundBase* VoiceToSkip;
	};
	struct MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Parms
	{
		USoundBase* VoiceToStart;
	};
	static FName NAME_UMounteaDialogueManager_OnDialogueClosedEvent = FName(TEXT("OnDialogueClosedEvent"));
	void UMounteaDialogueManager::OnDialogueClosedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueClosedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueClosedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueContextUpdatedEvent = FName(TEXT("OnDialogueContextUpdatedEvent"));
	void UMounteaDialogueManager::OnDialogueContextUpdatedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueContextUpdatedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueInitializedEvent = FName(TEXT("OnDialogueInitializedEvent"));
	void UMounteaDialogueManager::OnDialogueInitializedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueInitializedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueInitializedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueNodeFinishedEvent = FName(TEXT("OnDialogueNodeFinishedEvent"));
	void UMounteaDialogueManager::OnDialogueNodeFinishedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueNodeFinishedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueNodeSelectedEvent = FName(TEXT("OnDialogueNodeSelectedEvent"));
	void UMounteaDialogueManager::OnDialogueNodeSelectedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueNodeSelectedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueNodeStartedEvent = FName(TEXT("OnDialogueNodeStartedEvent"));
	void UMounteaDialogueManager::OnDialogueNodeStartedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueNodeStartedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueStartedEvent = FName(TEXT("OnDialogueStartedEvent"));
	void UMounteaDialogueManager::OnDialogueStartedEvent(UMounteaDialogueContext* Context)
	{
		MounteaDialogueManager_eventOnDialogueStartedEvent_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueStartedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent = FName(TEXT("OnDialogueUserInterfaceChangedEvent"));
	void UMounteaDialogueManager::OnDialogueUserInterfaceChangedEvent(TSubclassOf<UUserWidget>  DialogueUIClass, UUserWidget* DialogueUIWidget)
	{
		MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Parms Parms;
		Parms.DialogueUIClass=DialogueUIClass;
		Parms.DialogueUIWidget=DialogueUIWidget;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent = FName(TEXT("OnDialogueVoiceSkipRequestEvent"));
	void UMounteaDialogueManager::OnDialogueVoiceSkipRequestEvent(USoundBase* VoiceToSkip)
	{
		MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Parms Parms;
		Parms.VoiceToSkip=VoiceToSkip;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent),&Parms);
	}
	static FName NAME_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent = FName(TEXT("OnDialogueVoiceStartRequestEvent"));
	void UMounteaDialogueManager::OnDialogueVoiceStartRequestEvent(USoundBase* VoiceToStart)
	{
		MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Parms Parms;
		Parms.VoiceToStart=VoiceToStart;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent),&Parms);
	}
	void UMounteaDialogueManager::StaticRegisterNativesUMounteaDialogueManager()
	{
		UClass* Class = UMounteaDialogueManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinueDialogue", &UMounteaDialogueManager::execContinueDialogue },
			{ "FinishedExecuteDialogueRow", &UMounteaDialogueManager::execFinishedExecuteDialogueRow },
			{ "GetDefaultDialogueManagerState", &UMounteaDialogueManager::execGetDefaultDialogueManagerState },
			{ "GetDialogueContext", &UMounteaDialogueManager::execGetDialogueContext },
			{ "GetDialogueManagerState", &UMounteaDialogueManager::execGetDialogueManagerState },
			{ "GetDialogueUIPtr", &UMounteaDialogueManager::execGetDialogueUIPtr },
			{ "GetDialogueWidgetClass", &UMounteaDialogueManager::execGetDialogueWidgetClass },
			{ "GetOwningActor_Implementation", &UMounteaDialogueManager::execGetOwningActor_Implementation },
			{ "OnDialogueClosedEvent_Internal", &UMounteaDialogueManager::execOnDialogueClosedEvent_Internal },
			{ "OnDialogueContextUpdatedEvent_Internal", &UMounteaDialogueManager::execOnDialogueContextUpdatedEvent_Internal },
			{ "OnDialogueInitializedEvent_Internal", &UMounteaDialogueManager::execOnDialogueInitializedEvent_Internal },
			{ "OnDialogueNodeFinishedEvent_Internal", &UMounteaDialogueManager::execOnDialogueNodeFinishedEvent_Internal },
			{ "OnDialogueNodeSelectedEvent_Internal", &UMounteaDialogueManager::execOnDialogueNodeSelectedEvent_Internal },
			{ "OnDialogueNodeStartedEvent_Internal", &UMounteaDialogueManager::execOnDialogueNodeStartedEvent_Internal },
			{ "OnDialogueRowFinishedEvent_Internal", &UMounteaDialogueManager::execOnDialogueRowFinishedEvent_Internal },
			{ "OnDialogueRowStartedEvent_Internal", &UMounteaDialogueManager::execOnDialogueRowStartedEvent_Internal },
			{ "OnDialogueStartedEvent_Internal", &UMounteaDialogueManager::execOnDialogueStartedEvent_Internal },
			{ "OnDialogueUserInterfaceChangedEvent_Internal", &UMounteaDialogueManager::execOnDialogueUserInterfaceChangedEvent_Internal },
			{ "OnDialogueVoiceSkipRequestEvent_Internal", &UMounteaDialogueManager::execOnDialogueVoiceSkipRequestEvent_Internal },
			{ "OnDialogueVoiceStartRequestEvent_Internal", &UMounteaDialogueManager::execOnDialogueVoiceStartRequestEvent_Internal },
			{ "StartExecuteDialogueRow", &UMounteaDialogueManager::execStartExecuteDialogueRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "ContinueDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "FinishedExecuteDialogueRow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics
	{
		struct MounteaDialogueManager_eventGetDefaultDialogueManagerState_Parms
		{
			EDialogueManagerState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetDefaultDialogueManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(nullptr, 0) }; // 2269609251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the default state of the Dialogue Manager.\n\x09 * @return The default state of the Dialogue Manager.\n\x09 */" },
		{ "Keywords", "Context, Get" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Returns the default state of the Dialogue Manager.\n@return The default state of the Dialogue Manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetDefaultDialogueManagerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::MounteaDialogueManager_eventGetDefaultDialogueManagerState_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics
	{
		struct MounteaDialogueManager_eventGetDialogueContext_Parms
		{
			UMounteaDialogueContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetDialogueContext_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue Context if any exists.\n\x09 * \xe2\x9d\x97 Could return null\n\x09 */" },
		{ "Keywords", "Context, Get" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Returns Dialogue Context if any exists.\n\xe2\x9d\x97 Could return null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetDialogueContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::MounteaDialogueManager_eventGetDialogueContext_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics
	{
		struct MounteaDialogueManager_eventGetDialogueManagerState_Parms
		{
			EDialogueManagerState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetDialogueManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(nullptr, 0) }; // 2269609251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the current state of the Dialogue Manager.\n\x09 * @return The current state of the Dialogue Manager.\n\x09 */" },
		{ "Keywords", "Context, Get" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Returns the current state of the Dialogue Manager.\n@return The current state of the Dialogue Manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetDialogueManagerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::MounteaDialogueManager_eventGetDialogueManagerState_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics
	{
		struct MounteaDialogueManager_eventGetDialogueUIPtr_Parms
		{
			UUserWidget* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetDialogueUIPtr_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue Widget Pointer if any exists already.\n\x09 * \xe2\x9d\x97 Could return null\n\x09 */" },
		{ "Keywords", "UI, Widget" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Returns Dialogue Widget Pointer if any exists already.\n\xe2\x9d\x97 Could return null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetDialogueUIPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::MounteaDialogueManager_eventGetDialogueUIPtr_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics
	{
		struct MounteaDialogueManager_eventGetDialogueWidgetClass_Parms
		{
			TSubclassOf<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetDialogueWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue Widget Class if any exists already.\n\x09 * \xe2\x9d\x97 If none specified per Manager will return Class from Project Settings\n\x09 * \xe2\x9d\x97 Could return null\n\x09 */" },
		{ "Keywords", "UI, Widget" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Returns Dialogue Widget Class if any exists already.\n\xe2\x9d\x97 If none specified per Manager will return Class from Project Settings\n\xe2\x9d\x97 Could return null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetDialogueWidgetClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::MounteaDialogueManager_eventGetDialogueWidgetClass_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics
	{
		struct MounteaDialogueManager_eventGetOwningActor_Implementation_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventGetOwningActor_Implementation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "GetOwningActor_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::MounteaDialogueManager_eventGetOwningActor_Implementation_Parms), Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueClosedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue has Closed.\n\x09 * Could be either by manual request or automatic, as there are no nodes to follow.\n\x09 */" },
		{ "Keywords", "Close, Context" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue has Closed.\nCould be either by manual request or automatic, as there are no nodes to follow." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueClosedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueClosedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueClosedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueClosedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueClosedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueClosedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Context is updated.\n\x09 * \xe2\x9d\x97 Could be Null\n\x09 */" },
		{ "Keywords", "Update, Context" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Context is updated.\n\xe2\x9d\x97 Could be Null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueContextUpdatedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Internal_Parms
		{
			UMounteaDialogueContext* NewContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::NewProp_NewContext = { "NewContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Internal_Parms, NewContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::NewProp_NewContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueContextUpdatedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueContextUpdatedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueInitializedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Even called when Dialogue is Initialized.\n\x09 * \xe2\x9d\x97 In order to use native logic, call Parent node\n\x09 */" },
		{ "Keywords", "Initialized, Start" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Even called when Dialogue is Initialized.\n\xe2\x9d\x97 In order to use native logic, call Parent node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueInitializedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueInitializedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueInitializedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueInitializedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueInitializedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueInitializedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has Finished.\n\x09 */" },
		{ "Keywords", "Finish, End, Complete" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Node has Finished." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeFinishedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeFinishedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueNodeFinishedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when new Node is selected.\n\x09 */" },
		{ "Keywords", "Start, Begin" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when new Node is selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeSelectedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeSelectedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueNodeSelectedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has Started.\n\x09 */" },
		{ "Keywords", "Start, Begin" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Node has Started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeStartedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueNodeStartedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueNodeStartedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueRowFinishedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueRowFinishedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueRowFinishedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueRowFinishedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueRowStartedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueRowStartedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueRowStartedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueRowStartedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueStartedEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue has Started.\n\x09 */" },
		{ "Keywords", "Update, Context" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue has Started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueStartedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueStartedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueStartedEvent_Internal_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueStartedEvent_Internal_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueStartedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueStartedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueUIWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueUIWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIClass = { "DialogueUIClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Parms, DialogueUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIWidget = { "DialogueUIWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Parms, DialogueUIWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::NewProp_DialogueUIWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Widget Class or Widget have changed.\n\x09 * \xe2\x9d\x97 Dialogue Widget Could be Null\n\x09 */" },
		{ "Keywords", "Update, Context" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Widget Class or Widget have changed.\n\xe2\x9d\x97 Dialogue Widget Could be Null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueUserInterfaceChangedEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Internal_Parms
		{
			TSubclassOf<UUserWidget>  DialogueUIClass;
			UUserWidget* DialogueUIWidget;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueUIWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueUIWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIClass = { "DialogueUIClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Internal_Parms, DialogueUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIWidget = { "DialogueUIWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Internal_Parms, DialogueUIWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::NewProp_DialogueUIWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueUserInterfaceChangedEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueUserInterfaceChangedEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceToSkip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::NewProp_VoiceToSkip = { "VoiceToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Parms, VoiceToSkip), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::NewProp_VoiceToSkip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when the user requests to skip a dialogue voice line.\n\x09 * \xe2\x9d\x97 VoiceToSkip could be null.\n\x09 *\n\x09 * @param VoiceToSkip - The voice line to be skipped.\n\x09 */" },
		{ "Keywords", "Finish, End, Complete" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when the user requests to skip a dialogue voice line.\n\xe2\x9d\x97 VoiceToSkip could be null.\n\n@param VoiceToSkip - The voice line to be skipped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueVoiceSkipRequestEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Internal_Parms
		{
			USoundBase* VoiceToSkip;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceToSkip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::NewProp_VoiceToSkip = { "VoiceToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Internal_Parms, VoiceToSkip), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::NewProp_VoiceToSkip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueVoiceSkipRequestEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueVoiceSkipRequestEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceToStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::NewProp_VoiceToStart = { "VoiceToStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Parms, VoiceToStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::NewProp_VoiceToStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when a new voice line is requested to play in dialogue.\n\x09 * \xe2\x9d\x97 VoiceToStart may be null.\n\x09 *\n\x09 * @param VoiceToStart The voice line to start playing.\n\x09 */" },
		{ "Keywords", "Finish, End, Complete" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when a new voice line is requested to play in dialogue.\n\xe2\x9d\x97 VoiceToStart may be null.\n\n@param VoiceToStart The voice line to start playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueVoiceStartRequestEvent", nullptr, nullptr, sizeof(MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics
	{
		struct MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Internal_Parms
		{
			USoundBase* VoiceToStart;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceToStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::NewProp_VoiceToStart = { "VoiceToStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Internal_Parms, VoiceToStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::NewProp_VoiceToStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnDialogueVoiceStartRequestEvent_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::MounteaDialogueManager_eventOnDialogueVoiceStartRequestEvent_Internal_Parms), Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "StartExecuteDialogueRow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueManager);
	UClass* Z_Construct_UClass_UMounteaDialogueManager_NoRegister()
	{
		return UMounteaDialogueManager::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueContextUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueContextUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueUserInterfaceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueUserInterfaceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRowStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRowStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRowFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRowFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueManagerStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueManagerStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueVoiceStartRequest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueVoiceStartRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueVoiceSkipRequest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueVoiceSkipRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitingForInput_MetaData[];
#endif
		static void NewProp_bWaitingForInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitingForInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultManagerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultManagerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultManagerState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ManagerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidgetPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_RowTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_RowTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasCursorVisible_MetaData[];
#endif
		static void NewProp_bWasCursorVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCursorVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueManager_ContinueDialogue, "ContinueDialogue" }, // 1464483507
		{ &Z_Construct_UFunction_UMounteaDialogueManager_FinishedExecuteDialogueRow, "FinishedExecuteDialogueRow" }, // 644108442
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetDefaultDialogueManagerState, "GetDefaultDialogueManagerState" }, // 1260287167
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueContext, "GetDialogueContext" }, // 1161352033
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueManagerState, "GetDialogueManagerState" }, // 526201229
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueUIPtr, "GetDialogueUIPtr" }, // 74569471
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetDialogueWidgetClass, "GetDialogueWidgetClass" }, // 620879799
		{ &Z_Construct_UFunction_UMounteaDialogueManager_GetOwningActor_Implementation, "GetOwningActor_Implementation" }, // 1937856723
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent, "OnDialogueClosedEvent" }, // 332280132
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueClosedEvent_Internal, "OnDialogueClosedEvent_Internal" }, // 2283270383
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent, "OnDialogueContextUpdatedEvent" }, // 133127501
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueContextUpdatedEvent_Internal, "OnDialogueContextUpdatedEvent_Internal" }, // 3486306083
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent, "OnDialogueInitializedEvent" }, // 2285714955
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueInitializedEvent_Internal, "OnDialogueInitializedEvent_Internal" }, // 3917272380
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent, "OnDialogueNodeFinishedEvent" }, // 4272207188
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeFinishedEvent_Internal, "OnDialogueNodeFinishedEvent_Internal" }, // 3168829972
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent, "OnDialogueNodeSelectedEvent" }, // 1257721437
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeSelectedEvent_Internal, "OnDialogueNodeSelectedEvent_Internal" }, // 2892883014
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent, "OnDialogueNodeStartedEvent" }, // 383860150
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueNodeStartedEvent_Internal, "OnDialogueNodeStartedEvent_Internal" }, // 3215301579
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowFinishedEvent_Internal, "OnDialogueRowFinishedEvent_Internal" }, // 724645790
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueRowStartedEvent_Internal, "OnDialogueRowStartedEvent_Internal" }, // 3499554841
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent, "OnDialogueStartedEvent" }, // 3705841164
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueStartedEvent_Internal, "OnDialogueStartedEvent_Internal" }, // 2210274786
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent, "OnDialogueUserInterfaceChangedEvent" }, // 1414731412
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueUserInterfaceChangedEvent_Internal, "OnDialogueUserInterfaceChangedEvent_Internal" }, // 1007705832
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent, "OnDialogueVoiceSkipRequestEvent" }, // 719520932
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceSkipRequestEvent_Internal, "OnDialogueVoiceSkipRequestEvent_Internal" }, // 178768761
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent, "OnDialogueVoiceStartRequestEvent" }, // 2896882338
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnDialogueVoiceStartRequestEvent_Internal, "OnDialogueVoiceStartRequestEvent_Internal" }, // 1675429158
		{ &Z_Construct_UFunction_UMounteaDialogueManager_StartExecuteDialogueRow, "StartExecuteDialogueRow" }, // 2251724319
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea" },
		{ "Comment", "/**\n *  Mountea Dialogue Manager Component\n *\n * Should be attached to Player Controller or any other Controller which should be able to trigger dialogues.\n * \xe2\x9d\x94 Allows any Actor to be Dialogue Manager\n * \xe2\x9d\x94 Implements 'IMounteaDialogueManagerInterface'.\n * \xe2\x9d\x97 If attached to non-Controller class, then it will show Dialogue UI to first found Player Controller\n */" },
		{ "DisplayName", "Mountea Dialogue Manager" },
		{ "IncludePath", "Components/MounteaDialogueManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Mountea Dialogue Manager Component\n\nShould be attached to Player Controller or any other Controller which should be able to trigger dialogues.\n\xe2\x9d\x94 Allows any Actor to be Dialogue Manager\n\xe2\x9d\x94 Implements 'IMounteaDialogueManagerInterface'.\n\xe2\x9d\x97 If attached to non-Controller class, then it will show Dialogue UI to first found Player Controller" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueInitialized_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Even called when Dialogue is Initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Even called when Dialogue is Initialized." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueInitialized = { "OnDialogueInitialized", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueInitialized), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueInitialized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueInitialized_MetaData)) }; // 2618677592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue has started.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted = { "OnDialogueStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted_MetaData)) }; // 123298053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue has been closed.\n\x09 * Could be either manual or automatic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue has been closed.\nCould be either manual or automatic." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed = { "OnDialogueClosed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueClosed), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed_MetaData)) }; // 123298053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Context is updated.\n\x09 * \xe2\x9d\x97 Could be Null\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Context is updated.\n\xe2\x9d\x97 Could be Null" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated = { "OnDialogueContextUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueContextUpdated), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated_MetaData)) }; // 2768885734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Widget Class or Widget have changed.\n\x09 *\xe2\x9d\x97 Dialogue Widget Could be Null\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Widget Class or Widget have changed.\n\xe2\x9d\x97 Dialogue Widget Could be Null" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged = { "OnDialogueUserInterfaceChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueUserInterfaceChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged_MetaData)) }; // 4147862571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when new Dialogue Node has been selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when new Dialogue Node has been selected." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected = { "OnDialogueNodeSelected", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeSelected), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected_MetaData)) }; // 607299196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has started.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Node has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted = { "OnDialogueNodeStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted_MetaData)) }; // 607299196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has finished.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Node has finished." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished = { "OnDialogueNodeFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeFinished), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished_MetaData)) }; // 607299196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Row has started.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Row has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted = { "OnDialogueRowStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueRowStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted_MetaData)) }; // 4076609015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Row has finished.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Row has finished." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished = { "OnDialogueRowFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueRowFinished), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished_MetaData)) }; // 4076609015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called if Dialogue fails to execute.\n\x09 * Provides Error Message with explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called if Dialogue fails to execute.\nProvides Error Message with explanation." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed = { "OnDialogueFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueFailed), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed_MetaData)) }; // 655532388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue State changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue State changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged = { "OnDialogueManagerStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueManagerStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged_MetaData)) }; // 1147491971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceStartRequest_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Voice is requested to Start.\n\x09 * Provides info what Dialogue Voice is requested to Start.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Voice is requested to Start.\nProvides info what Dialogue Voice is requested to Start." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceStartRequest = { "OnDialogueVoiceStartRequest", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueVoiceStartRequest), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceStartRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceStartRequest_MetaData)) }; // 1586169846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceSkipRequest_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called when Dialogue Voice is requested to Skip.\n\x09 * Provides info what Dialogue Voice is requested to Skip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Event called when Dialogue Voice is requested to Skip.\nProvides info what Dialogue Voice is requested to Skip." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceSkipRequest = { "OnDialogueVoiceSkipRequest", nullptr, (EPropertyFlags)0x0020180010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueVoiceSkipRequest), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueVoiceEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceSkipRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceSkipRequest_MetaData)) }; // 1586169846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput_MetaData[] = {
		{ "Category", "Mountea" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput_SetBit(void* Obj)
	{
		((UMounteaDialogueManager*)Obj)->bWaitingForInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput = { "bWaitingForInput", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueManager), &Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Manager based Dialogue Widget Class.\n\x09 * \xe2\x9d\x94 Could be left empty if Project Settings are setup properly\n\x09 * \xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
		{ "ToolTip", "Manager based Dialogue Widget Class.\n\xe2\x9d\x94 Could be left empty if Project Settings are setup properly\n\xe2\x9d\x97 Must implement MounteaDialogueWBPInterface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0024080001000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Mountea Dialogue Manager Default State.\n\x09 * \xe2\x9d\x94 Is used in BeginPlay to set ManagerState.\n\x09 * \xe2\x9d\x94 Is used as fallback value once Dialogue Ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Mountea Dialogue Manager Default State.\n\xe2\x9d\x94 Is used in BeginPlay to set ManagerState.\n\xe2\x9d\x94 Is used as fallback value once Dialogue Ends." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState = { "DefaultManagerState", nullptr, (EPropertyFlags)0x0020080001000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, DefaultManagerState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_MetaData)) }; // 2269609251
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09* State of the Dialogue Manager.\n\x09* \xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\x09* \xe2\x9d\x94 Can be updated using SetDialogueManagerState function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "State of the Dialogue Manager.\n\xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\xe2\x9d\x94 Can be updated using SetDialogueManagerState function." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState = { "ManagerState", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, ManagerState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_MetaData)) }; // 2269609251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetPtr_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * Dialogue Widget which has been created.\n\x09 * \xe2\x9d\x94 Transient, for actual runtime only.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Dialogue Widget which has been created.\n\xe2\x9d\x94 Transient, for actual runtime only." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetPtr = { "DialogueWidgetPtr", nullptr, (EPropertyFlags)0x00200c00000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, DialogueWidgetPtr), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * Dialogue Context which is used to contain temporary data.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Dialogue Context which is used to contain temporary data." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext = { "DialogueContext", nullptr, (EPropertyFlags)0x00200c0000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, DialogueContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * TimerHandle managing Dialogue Row.\n\x09 * Once expires, Dialogue Row is finished.\n\x09 *\n\x09 * \xe2\x9d\x94 Expiration is driven by Dialogue data Duration variable\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "TimerHandle managing Dialogue Row.\nOnce expires, Dialogue Row is finished.\n\n\xe2\x9d\x94 Expiration is driven by Dialogue data Duration variable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer = { "TimerHandle_RowTimer", nullptr, (EPropertyFlags)0x00200c0000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueManager, TimerHandle_RowTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09* Is saved once Dialogue starts.\n\x09* Once Dialogue ends, cached value is set back again.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "ToolTip", "Is saved once Dialogue starts.\nOnce Dialogue ends, cached value is set back again." },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible_SetBit(void* Obj)
	{
		((UMounteaDialogueManager*)Obj)->bWasCursorVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible = { "bWasCursorVisible", nullptr, (EPropertyFlags)0x00200c0000022001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueManager), &Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceStartRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueVoiceSkipRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWaitingForInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_bWasCursorVisible,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueManager, IMounteaDialogueManagerInterface), false },  // 3007441672
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueManager_Statics::ClassParams = {
		&UMounteaDialogueManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueManager()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton, Z_Construct_UClass_UMounteaDialogueManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueManager>()
	{
		return UMounteaDialogueManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueManager);
	UMounteaDialogueManager::~UMounteaDialogueManager() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueManager, UMounteaDialogueManager::StaticClass, TEXT("UMounteaDialogueManager"), &Z_Registration_Info_UClass_UMounteaDialogueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueManager), 2848211842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_779878619(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
