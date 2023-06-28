// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueSystemBFC.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemBFC() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetSubtitlesSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_OptionalFilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubtitlesSettings*)Z_Param__Result=UMounteaDialogueSystemBFC::GetSubtitlesSettings(Z_Param_WorldContextObject,Z_Param_Out_OptionalFilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetRowDuration)
	{
		P_GET_STRUCT_REF(FDialogueRowData,Z_Param_Out_Row);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMounteaDialogueSystemBFC::GetRowDuration(Z_Param_Out_Row);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindDialogueRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogueRow*)Z_Param__Result=UMounteaDialogueSystemBFC::FindDialogueRow(Z_Param_Table,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueRow)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogueRow*)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueRow(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsDialogueRowDataValid)
	{
		P_GET_STRUCT_REF(FDialogueRowData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsDialogueRowDataValid(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsDialogueRowValid)
	{
		P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_Row);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsDialogueRowValid(Z_Param_Out_Row);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetAllowedChildNodes)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetAllowedChildNodes(Z_Param_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetFirstChildNode)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::GetFirstChildNode(Z_Param_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetChildrenNodeFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::GetChildrenNodeFromIndex(Z_Param_Index,Z_Param_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindNodeByGUID)
	{
		P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_FromGraph);
		P_GET_STRUCT(FGuid,Z_Param_ByGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::FindNodeByGUID(Z_Param_FromGraph,Z_Param_ByGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMounteaDialogueManagerInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execInitializeDialogue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_Initiator);
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_DialogueParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::InitializeDialogue(Z_Param_WorldContextObject,Z_Param_Initiator,Z_Param_DialogueParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execCloseDialogue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_DialogueParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::CloseDialogue(Z_Param_WorldContextObject,Z_Param_DialogueParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsContextValid)
	{
		P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsContextValid(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDefaultDialogueWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UUserWidget> *)Z_Param__Result=UMounteaDialogueSystemBFC::GetDefaultDialogueWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueSystemSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueSystemSettings**)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueSystemSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetPlayerDialogueParticipant)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetPlayerDialogueParticipant(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindAudioComponentByTag)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorContext);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UMounteaDialogueSystemBFC::FindAudioComponentByTag(Z_Param_ActorContext,Z_Param_Out_Arg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindAudioComponentByName)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorContext);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=UMounteaDialogueSystemBFC::FindAudioComponentByName(Z_Param_ActorContext,Z_Param_Out_Arg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execHasNodeBeenTraversed)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
		P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Participant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::HasNodeBeenTraversed(Z_Param_Node,Z_Param_Out_Participant);
		P_NATIVE_END;
	}
	void UMounteaDialogueSystemBFC::StaticRegisterNativesUMounteaDialogueSystemBFC()
	{
		UClass* Class = UMounteaDialogueSystemBFC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDialogue", &UMounteaDialogueSystemBFC::execCloseDialogue },
			{ "FindAudioComponentByName", &UMounteaDialogueSystemBFC::execFindAudioComponentByName },
			{ "FindAudioComponentByTag", &UMounteaDialogueSystemBFC::execFindAudioComponentByTag },
			{ "FindDialogueRow", &UMounteaDialogueSystemBFC::execFindDialogueRow },
			{ "FindNodeByGUID", &UMounteaDialogueSystemBFC::execFindNodeByGUID },
			{ "GetAllowedChildNodes", &UMounteaDialogueSystemBFC::execGetAllowedChildNodes },
			{ "GetChildrenNodeFromIndex", &UMounteaDialogueSystemBFC::execGetChildrenNodeFromIndex },
			{ "GetDefaultDialogueWidget", &UMounteaDialogueSystemBFC::execGetDefaultDialogueWidget },
			{ "GetDialogueManager", &UMounteaDialogueSystemBFC::execGetDialogueManager },
			{ "GetDialogueRow", &UMounteaDialogueSystemBFC::execGetDialogueRow },
			{ "GetDialogueSystemSettings", &UMounteaDialogueSystemBFC::execGetDialogueSystemSettings },
			{ "GetFirstChildNode", &UMounteaDialogueSystemBFC::execGetFirstChildNode },
			{ "GetPlayerDialogueParticipant", &UMounteaDialogueSystemBFC::execGetPlayerDialogueParticipant },
			{ "GetRowDuration", &UMounteaDialogueSystemBFC::execGetRowDuration },
			{ "GetSubtitlesSettings", &UMounteaDialogueSystemBFC::execGetSubtitlesSettings },
			{ "HasNodeBeenTraversed", &UMounteaDialogueSystemBFC::execHasNodeBeenTraversed },
			{ "InitializeDialogue", &UMounteaDialogueSystemBFC::execInitializeDialogue },
			{ "IsContextValid", &UMounteaDialogueSystemBFC::execIsContextValid },
			{ "IsDialogueRowDataValid", &UMounteaDialogueSystemBFC::execIsDialogueRowDataValid },
			{ "IsDialogueRowValid", &UMounteaDialogueSystemBFC::execIsDialogueRowValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics
	{
		struct MounteaDialogueSystemBFC_eventCloseDialogue_Parms
		{
			const UObject* WorldContextObject;
			TScriptInterface<IMounteaDialogueParticipantInterface> DialogueParticipant;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventCloseDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_DialogueParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventCloseDialogue_Parms, DialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_DialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_DialogueParticipant_MetaData)) };
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventCloseDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventCloseDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_DialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to close Dialogue.\n\x09 * \n\x09 * \xe2\x9d\x97 Returns false if Dialogue Manager is not accessible\xe2\x9d\x97\n\x09 * @param WorldContextObject\x09World Context Object\n\x09 * @param DialogueParticipant\x09""Dialogue with which Participant to close\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "Keywords", "close, exit, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to close Dialogue.\n\n\xe2\x9d\x97 Returns false if Dialogue Manager is not accessible\xe2\x9d\x97\n@param WorldContextObject    World Context Object\n@param DialogueParticipant   Dialogue with which Participant to close" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "CloseDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::MounteaDialogueSystemBFC_eventCloseDialogue_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics
	{
		struct MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms
		{
			const AActor* ActorContext;
			FName Arg;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext = { "ActorContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, ActorContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, Arg), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Keywords", "audio, tag, search" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindAudioComponentByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics
	{
		struct MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms
		{
			const AActor* ActorContext;
			FName Arg;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext = { "ActorContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, ActorContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, Arg), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Keywords", "audio, tag, search" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindAudioComponentByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics
	{
		struct MounteaDialogueSystemBFC_eventFindDialogueRow_Parms
		{
			const UDataTable* Table;
			FName RowName;
			FDialogueRow ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Table;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(nullptr, 0) }; // 1576585352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "CompactNodeTitle", "Find Dialogue Row" },
		{ "Keywords", "row, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindDialogueRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::MounteaDialogueSystemBFC_eventFindDialogueRow_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics
	{
		struct MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms
		{
			const UMounteaDialogueGraph* FromGraph;
			FGuid ByGUID;
			UMounteaDialogueGraphNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByGUID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph = { "FromGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, FromGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID = { "ByGUID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, ByGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Searches in Graph for Node by GUID.\n\x09 */" },
		{ "Keywords", "guid, node, find, search, get" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Searches in Graph for Node by GUID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindNodeByGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms
		{
			const UMounteaDialogueGraphNode* ParentNode;
			TArray<UMounteaDialogueGraphNode*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns all Allowed Child Nodes for given Parent Node\n\x09 *\xe2\x9d\x97Might return empty array\xe2\x9d\x97\n\x09 * \n\x09 * @param ParentNode\x09Node to get all Children From\n\x09 */" },
		{ "Keywords", "diaogue, child, nodes" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns all Allowed Child Nodes for given Parent Node\n\xe2\x9d\x97Might return empty array\xe2\x9d\x97\n\n@param ParentNode    Node to get all Children From" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetAllowedChildNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms
		{
			int32 Index;
			const UMounteaDialogueGraphNode* ParentNode;
			UMounteaDialogueGraphNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to get Child Node from Dialogue Node at given Index. If none is found, returns null.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param Index\x09\x09\x09Index of the Node to be returned.\n\x09 * @param ParentNode\x09Parent Node which should contain the Node to be returned.\n\x09 */" },
		{ "Keywords", "dialogue, child, node, index" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to get Child Node from Dialogue Node at given Index. If none is found, returns null.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param Index                 Index of the Node to be returned.\n@param ParentNode    Parent Node which should contain the Node to be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetChildrenNodeFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to get default Dialogue Widget from Project Settings.\n\x09 * \n\x09 * \xe2\x9d\x97 Will return null if settings are not accessible\xe2\x9d\x97\n\x09 * \xe2\x9d\x97 Will return null if no Default Widget is selected\xe2\x9d\x97\n\x09 */" },
		{ "Keywords", "widget, UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to get default Dialogue Widget from Project Settings.\n\n\xe2\x9d\x97 Will return null if settings are not accessible\xe2\x9d\x97\n\xe2\x9d\x97 Will return null if no Default Widget is selected\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDefaultDialogueWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetDialogueManager_Parms
		{
			const UObject* WorldContextObject;
			TScriptInterface<IMounteaDialogueManagerInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueManager_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns first 'Mountea Dialogue Manager' Component from Player Controller.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param WorldContextObject\x09World Context Object \n\x09 */" },
		{ "CompactNodeTitle", "Dialogue Manager" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "Keywords", "manager, dialogue, master, initialize" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns first 'Mountea Dialogue Manager' Component from Player Controller.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param WorldContextObject    World Context Object" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::MounteaDialogueSystemBFC_eventGetDialogueManager_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetDialogueRow_Parms
		{
			const UMounteaDialogueGraphNode* Node;
			FDialogueRow ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueRow_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(nullptr, 0) }; // 1576585352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue Row for Given Node.\n\x09 * \xe2\x9d\x97 Might return invalid Row\xe2\x9d\x97\n\x09 * \xe2\x9d\x97Only 'UMounteaDialogueGraphNode_DialogueNodeBase' classes have Dialogue data\xe2\x9d\x97\n\x09 * \n\x09 * @param Node\x09Node to get Data from.\n\x09 */" },
		{ "CompactNodeTitle", "Get Dialogue Row" },
		{ "Keywords", "row, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns Dialogue Row for Given Node.\n\xe2\x9d\x97 Might return invalid Row\xe2\x9d\x97\n\xe2\x9d\x97Only 'UMounteaDialogueGraphNode_DialogueNodeBase' classes have Dialogue data\xe2\x9d\x97\n\n@param Node  Node to get Data from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::MounteaDialogueSystemBFC_eventGetDialogueRow_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms
		{
			UMounteaDialogueSystemSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue System Settings.\n\x09 * \xe2\x9d\x97 Might return null\xe2\x9d\x97\n\x09 */" },
		{ "Keywords", "settings, setup, config" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns Dialogue System Settings.\n\xe2\x9d\x97 Might return null\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueSystemSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms
		{
			const UMounteaDialogueGraphNode* ParentNode;
			UMounteaDialogueGraphNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to get first Dialogue Node from Children Nodes. If none is found, returns null.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param ParentNode\x09Node to read from.\n\x09 */" },
		{ "Keywords", "dialogue, child, node, first" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to get first Dialogue Node from Children Nodes. If none is found, returns null.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param ParentNode    Node to read from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetFirstChildNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms
		{
			const UObject* WorldContextObject;
			TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns first 'Mountea Dialogue Particiapnt' Component from Player Pawn.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param WorldContextObject\x09World Context Object \n\x09 */" },
		{ "CompactNodeTitle", "Player Participant" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "Keywords", "participant, dialogue, player" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns first 'Mountea Dialogue Particiapnt' Component from Player Pawn.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param WorldContextObject    World Context Object" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetPlayerDialogueParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetRowDuration_Parms
		{
			FDialogueRowData Row;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetRowDuration_Parms, Row), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row_MetaData)) }; // 928667032
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetRowDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Duration for each Dialogue Row.\n\x09 * \n\x09 * @param Row\x09Row for the Duration to be calculated from.\n\x09 */" },
		{ "CompactNodeTitle", "Duration" },
		{ "Keywords", "dialogue, duration, long, time" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns Duration for each Dialogue Row.\n\n@param Row   Row for the Duration to be calculated from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetRowDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::MounteaDialogueSystemBFC_eventGetRowDuration_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics
	{
		struct MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms
		{
			const UObject* WorldContextObject;
			FUIRowID OptionalFilterClass;
			FSubtitlesSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalFilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalFilterClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass = { "OptionalFilterClass", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, OptionalFilterClass), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass_MetaData)) }; // 566581763
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(nullptr, 0) }; // 1601263800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "CompactNodeTitle", "Subtitles Settings" },
		{ "Keywords", "settings, subtitles, font" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetSubtitlesSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics
	{
		struct MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms
		{
			const UMounteaDialogueGraphNode* Node;
			TScriptInterface<IMounteaDialogueParticipantInterface> Participant;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Participant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms, Participant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant_MetaData)) };
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether selected Node for selected Participant has been already Traversed or not.\n\x09 */" },
		{ "Keywords", "node, traverse, open, active" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns whether selected Node for selected Participant has been already Traversed or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "HasNodeBeenTraversed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics
	{
		struct MounteaDialogueSystemBFC_eventInitializeDialogue_Parms
		{
			const UObject* WorldContextObject;
			UObject* Initiator;
			TScriptInterface<IMounteaDialogueParticipantInterface> DialogueParticipant;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Initiator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventInitializeDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_Initiator = { "Initiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventInitializeDialogue_Parms, Initiator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_DialogueParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventInitializeDialogue_Parms, DialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_DialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_DialogueParticipant_MetaData)) };
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventInitializeDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventInitializeDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_Initiator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_DialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to initialize Dialogue.\n\x09 * \xe2\x9d\x97 Do not call from Actor's Begin Play, bindings on Manager might not be initialized yet\xe2\x9d\x97\n\x09 * \n\x09 * @param WorldContextObject\x09World Context Object\n\x09 * @param Initiator\x09\x09\x09\x09\x09\x09Usually Player Controller\n\x09 * @param DialogueParticipant\x09Other person, could be NPC or other Player\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "Keywords", "start, initialize, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to initialize Dialogue.\n\xe2\x9d\x97 Do not call from Actor's Begin Play, bindings on Manager might not be initialized yet\xe2\x9d\x97\n\n@param WorldContextObject    World Context Object\n@param Initiator                                             Usually Player Controller\n@param DialogueParticipant   Other person, could be NPC or other Player" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "InitializeDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::MounteaDialogueSystemBFC_eventInitializeDialogue_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics
	{
		struct MounteaDialogueSystemBFC_eventIsContextValid_Parms
		{
			const UMounteaDialogueContext* Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsContextValid_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context_MetaData)) };
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventIsContextValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsContextValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Tries to validate given Dialogue Context.\n\x09 */" },
		{ "CompactNodeTitle", "Is Dialogue Context Valid" },
		{ "Keywords", "dialogue, null, validate, valid, check" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Tries to validate given Dialogue Context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsContextValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::MounteaDialogueSystemBFC_eventIsContextValid_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics
	{
		struct MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms
		{
			FDialogueRowData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms, Data), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data_MetaData)) }; // 928667032
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether Dialogue Row Data is valid or not.\n\x09 * \n\x09 * @param Data\x09""Data to be validated.\n\x09 */" },
		{ "CompactNodeTitle", "Is Dialogue Data Valid" },
		{ "Keywords", "dialogue, check, valid, null" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns whether Dialogue Row Data is valid or not.\n\n@param Data  Data to be validated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsDialogueRowDataValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics
	{
		struct MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms
		{
			FDialogueRow Row;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms, Row), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row_MetaData)) }; // 1576585352
	void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether Dialogue Row is valid or not.\n\x09 * \n\x09 * @param Row\x09Row to be validated.\n\x09 */" },
		{ "CompactNodeTitle", "Is Dialogue Row Valid" },
		{ "Keywords", "dialogue, check, valid, null" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Returns whether Dialogue Row is valid or not.\n\n@param Row   Row to be validated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsDialogueRowValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemBFC);
	UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC_NoRegister()
	{
		return UMounteaDialogueSystemBFC::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_CloseDialogue, "CloseDialogue" }, // 3028483860
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName, "FindAudioComponentByName" }, // 1830349743
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag, "FindAudioComponentByTag" }, // 129418720
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow, "FindDialogueRow" }, // 2013008928
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID, "FindNodeByGUID" }, // 953163639
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes, "GetAllowedChildNodes" }, // 2534930083
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex, "GetChildrenNodeFromIndex" }, // 2883206220
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget, "GetDefaultDialogueWidget" }, // 1422682646
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager, "GetDialogueManager" }, // 3847468030
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow, "GetDialogueRow" }, // 734894525
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings, "GetDialogueSystemSettings" }, // 2117853335
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode, "GetFirstChildNode" }, // 1583541915
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant, "GetPlayerDialogueParticipant" }, // 695565871
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration, "GetRowDuration" }, // 749743
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings, "GetSubtitlesSettings" }, // 2826407777
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed, "HasNodeBeenTraversed" }, // 3787731972
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_InitializeDialogue, "InitializeDialogue" }, // 3264343446
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid, "IsContextValid" }, // 1279245382
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid, "IsDialogueRowDataValid" }, // 2172873837
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid, "IsDialogueRowValid" }, // 155614559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime helper functions library for Mountea Dialogue System.\n */" },
		{ "DisplayName", "Mountea Dialogue Blueprint Function Library" },
		{ "IncludePath", "Helpers/MounteaDialogueSystemBFC.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
		{ "ToolTip", "Runtime helper functions library for Mountea Dialogue System." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemBFC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::ClassParams = {
		&UMounteaDialogueSystemBFC::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSystemBFC>()
	{
		return UMounteaDialogueSystemBFC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemBFC);
	UMounteaDialogueSystemBFC::~UMounteaDialogueSystemBFC() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemBFC, UMounteaDialogueSystemBFC::StaticClass, TEXT("UMounteaDialogueSystemBFC"), &Z_Registration_Info_UClass_UMounteaDialogueSystemBFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemBFC), 2660362646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_4083529479(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
