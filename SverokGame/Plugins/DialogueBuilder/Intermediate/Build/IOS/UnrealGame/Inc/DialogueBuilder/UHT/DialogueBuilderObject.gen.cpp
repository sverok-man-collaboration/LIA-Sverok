// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilder/Public/DialogueBuilderObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderObject() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderObject();
	DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderObject_NoRegister();
	DIALOGUEBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueDetailsStruct();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DialogueBuilder();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueDetailsStruct;
class UScriptStruct* FDialogueDetailsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueDetailsStruct, Z_Construct_UPackage__Script_DialogueBuilder(), TEXT("DialogueDetailsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton;
}
template<> DIALOGUEBUILDER_API UScriptStruct* StaticStruct<FDialogueDetailsStruct>()
{
	return FDialogueDetailsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueNodeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerNode_MetaData[];
#endif
		static void NewProp_IsPlayerNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerAnswerOption_MetaData[];
#endif
		static void NewProp_IsPlayerAnswerOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerAnswerOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSwitchNode_MetaData[];
#endif
		static void NewProp_IsSwitchNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwitchNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayToMoveNextNodes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToMoveNextNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginPlayDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginPlayDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAlreadyPlayed_MetaData[];
#endif
		static void NewProp_IsAlreadyPlayed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAlreadyPlayed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsItEndNode_MetaData[];
#endif
		static void NewProp_IsItEndNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsItEndNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffect_MetaData[];
#endif
		static void NewProp_WriteEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WriteEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffectSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WriteEffectSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTimedDecisions_MetaData[];
#endif
		static void NewProp_IsTimedDecisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTimedDecisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimedDecisionsTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimedDecisionsTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodePosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodesId_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNodesId_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NextNodesId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TransitionNameToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionNameToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionNameToCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialoguePlayFuncName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnDialoguePlayFuncName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure To keep data from Dialogue Node;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Structure To keep data from Dialogue Node;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueDetailsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "Comment", "// Visible Data Parts in Dialogue Editor Details Tab;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Visible Data Parts in Dialogue Editor Details Tab;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, NodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText = { "DialogueNodeText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueNodeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsPlayerNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode = { "IsPlayerNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsPlayerAnswerOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption = { "IsPlayerAnswerOption", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, SpeakerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture = { "SpeakerTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, SpeakerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsSwitchNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode = { "IsSwitchNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes = { "DelayToMoveNextNodes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, DelayToMoveNextNodes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio = { "DialogueAudio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay = { "BeginPlayDelay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, BeginPlayDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsAlreadyPlayed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed = { "IsAlreadyPlayed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate = { "AnimToUpdate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, AnimToUpdate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsItEndNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode = { "IsItEndNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->WriteEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect = { "WriteEffect", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed = { "WriteEffectSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, WriteEffectSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_SetBit(void* Obj)
	{
		((FDialogueDetailsStruct*)Obj)->IsTimedDecisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions = { "IsTimedDecisions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime = { "TimedDecisionsTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, TimedDecisionsTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition_MetaData[] = {
		{ "Comment", "// Non-Visible Working Data Parts in Dialogue Editor;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Non-Visible Working Data Parts in Dialogue Editor;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition = { "NodePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, NodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_Inner = { "NextNodesId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId = { "NextNodesId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, NextNodesId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_Inner = { "TransitionNameToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck = { "TransitionNameToCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, TransitionNameToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName = { "OnDialoguePlayFuncName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueDetailsStruct, OnDialoguePlayFuncName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
		nullptr,
		&NewStructOps,
		"DialogueDetailsStruct",
		sizeof(FDialogueDetailsStruct),
		alignof(FDialogueDetailsStruct),
		Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueDetailsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton, Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execDebugGetAllIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugGetAllIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execSetDataElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DataElementNumber);
		P_GET_STRUCT(FDialogueDetailsStruct,Z_Param_NewElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataElement(Z_Param_DataElementNumber,Z_Param_NewElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execRemoveDataElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ArrayElementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveDataElement(Z_Param_ArrayElementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execAddDialogueDataElement)
	{
		P_GET_STRUCT(FDialogueDetailsStruct,Z_Param_DialoguesElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDialogueDataElement(Z_Param_DialoguesElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execIsPossibleToMoveFurther)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DataElementIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_FunctionNameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossibleToMoveFurther(Z_Param_DataElementIndex,Z_Param_FunctionNameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execGetListIndexFromNodeID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetListIndexFromNodeID(Z_Param_NodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execMarkNodeasAlreadyPlayed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MarkNodeasAlreadyPlayed(Z_Param_NodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execMoveToNextNodesFromNodeID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentNodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDialogueDetailsStruct>*)Z_Param__Result=P_THIS->MoveToNextNodesFromNodeID(Z_Param_CurrentNodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execStartDialogueFromNodeID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDialogueDetailsStruct>*)Z_Param__Result=P_THIS->StartDialogueFromNodeID(Z_Param_NodeID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueBuilderObject::execStartDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogueDetailsStruct*)Z_Param__Result=P_THIS->StartDialogue();
		P_NATIVE_END;
	}
	struct DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms
	{
		FDialogueDetailsStruct DialogueNodeDetails;
	};
	static FName NAME_UDialogueBuilderObject_UpdateAnimationForDialogue = FName(TEXT("UpdateAnimationForDialogue"));
	void UDialogueBuilderObject::UpdateAnimationForDialogue(FDialogueDetailsStruct DialogueNodeDetails)
	{
		DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms Parms;
		Parms.DialogueNodeDetails=DialogueNodeDetails;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueBuilderObject_UpdateAnimationForDialogue),&Parms);
	}
	void UDialogueBuilderObject::StaticRegisterNativesUDialogueBuilderObject()
	{
		UClass* Class = UDialogueBuilderObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDialogueDataElement", &UDialogueBuilderObject::execAddDialogueDataElement },
			{ "DebugGetAllIndexes", &UDialogueBuilderObject::execDebugGetAllIndexes },
			{ "GetListIndexFromNodeID", &UDialogueBuilderObject::execGetListIndexFromNodeID },
			{ "IsPossibleToMoveFurther", &UDialogueBuilderObject::execIsPossibleToMoveFurther },
			{ "MarkNodeasAlreadyPlayed", &UDialogueBuilderObject::execMarkNodeasAlreadyPlayed },
			{ "MoveToNextNodesFromNodeID", &UDialogueBuilderObject::execMoveToNextNodesFromNodeID },
			{ "RemoveDataElement", &UDialogueBuilderObject::execRemoveDataElement },
			{ "SetDataElement", &UDialogueBuilderObject::execSetDataElement },
			{ "StartDialogue", &UDialogueBuilderObject::execStartDialogue },
			{ "StartDialogueFromNodeID", &UDialogueBuilderObject::execStartDialogueFromNodeID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics
	{
		struct DialogueBuilderObject_eventAddDialogueDataElement_Parms
		{
			FDialogueDetailsStruct DialoguesElement;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialoguesElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::NewProp_DialoguesElement = { "DialoguesElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventAddDialogueDataElement_Parms, DialoguesElement), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::NewProp_DialoguesElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Add New Element to Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Add New Element to Dialogue Data Array;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "AddDialogueDataElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::DialogueBuilderObject_eventAddDialogueDataElement_Parms), Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Debug Function for check data inside DialoguesData;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Debug Function for check data inside DialoguesData;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "DebugGetAllIndexes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics
	{
		struct DialogueBuilderObject_eventGetListIndexFromNodeID_Parms
		{
			int32 NodeID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventGetListIndexFromNodeID_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventGetListIndexFromNodeID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Search Dialogue Node inside DataArray and return Index;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Search Dialogue Node inside DataArray and return Index;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "GetListIndexFromNodeID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::DialogueBuilderObject_eventGetListIndexFromNodeID_Parms), Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics
	{
		struct DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms
		{
			int32 DataElementIndex;
			int32 FunctionNameIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataElementIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionNameIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_DataElementIndex = { "DataElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms, DataElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_FunctionNameIndex = { "FunctionNameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms, FunctionNameIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_DataElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_FunctionNameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Check Transition Function if possible to move from node to node;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Check Transition Function if possible to move from node to node;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "IsPossibleToMoveFurther", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms), Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics
	{
		struct DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms
		{
			int32 NodeID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Check if Node is already played;\n" },
		{ "DisplayName", "Mark Node as Already Played" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Check if Node is already played;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "MarkNodeasAlreadyPlayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms), Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics
	{
		struct DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms
		{
			int32 CurrentNodeID;
			TArray<FDialogueDetailsStruct> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNodeID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_CurrentNodeID = { "CurrentNodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms, CurrentNodeID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_CurrentNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Move To Next Nodes Connected to DialogueNode;\n" },
		{ "DisplayName", "Move To Next Nodes From Node ID" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Move To Next Nodes Connected to DialogueNode;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "MoveToNextNodesFromNodeID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms), Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics
	{
		struct DialogueBuilderObject_eventRemoveDataElement_Parms
		{
			int32 ArrayElementIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayElementIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ArrayElementIndex = { "ArrayElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventRemoveDataElement_Parms, ArrayElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueBuilderObject_eventRemoveDataElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueBuilderObject_eventRemoveDataElement_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ArrayElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Remove Element from Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Remove Element from Dialogue Data Array;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "RemoveDataElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::DialogueBuilderObject_eventRemoveDataElement_Parms), Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics
	{
		struct DialogueBuilderObject_eventSetDataElement_Parms
		{
			int32 DataElementNumber;
			FDialogueDetailsStruct NewElement;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataElementNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewElement;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_DataElementNumber = { "DataElementNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventSetDataElement_Parms, DataElementNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_NewElement = { "NewElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventSetDataElement_Parms, NewElement), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	void Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueBuilderObject_eventSetDataElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DialogueBuilderObject_eventSetDataElement_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_DataElementNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_NewElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set Element at Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Set Element at Dialogue Data Array;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "SetDataElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::DialogueBuilderObject_eventSetDataElement_Parms), Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics
	{
		struct DialogueBuilderObject_eventStartDialogue_Parms
		{
			FDialogueDetailsStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Start Dialogue From Node Connected to \"Start Dialogue\" Node;\n" },
		{ "DisplayName", "Start Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Start Dialogue From Node Connected to \"Start Dialogue\" Node;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "StartDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::DialogueBuilderObject_eventStartDialogue_Parms), Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics
	{
		struct DialogueBuilderObject_eventStartDialogueFromNodeID_Parms
		{
			int32 NodeID;
			TArray<FDialogueDetailsStruct> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogueFromNodeID_Parms, NodeID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogueFromNodeID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Start Dialogue From Nodes Connected to DialogueNode;\n" },
		{ "DisplayName", "Start Dialogue From Node ID" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Start Dialogue From Nodes Connected to DialogueNode;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "StartDialogueFromNodeID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::DialogueBuilderObject_eventStartDialogueFromNodeID_Parms), Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueNodeDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::NewProp_DialogueNodeDetails = { "DialogueNodeDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms, DialogueNodeDetails), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::NewProp_DialogueNodeDetails,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "UpdateAnimationForDialogue", nullptr, nullptr, sizeof(DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms), Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderObject);
	UClass* Z_Construct_UClass_UDialogueBuilderObject_NoRegister()
	{
		return UDialogueBuilderObject::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueBuilderObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialoguesData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguesData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJustDuplicated_MetaData[];
#endif
		static void NewProp_IsJustDuplicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJustDuplicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Test;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueBuilderObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueBuilderObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement, "AddDialogueDataElement" }, // 4105145377
		{ &Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes, "DebugGetAllIndexes" }, // 3082649650
		{ &Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID, "GetListIndexFromNodeID" }, // 2666546663
		{ &Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther, "IsPossibleToMoveFurther" }, // 2537877420
		{ &Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed, "MarkNodeasAlreadyPlayed" }, // 250773225
		{ &Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID, "MoveToNextNodesFromNodeID" }, // 1189802893
		{ &Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement, "RemoveDataElement" }, // 3461078523
		{ &Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement, "SetDataElement" }, // 3060042608
		{ &Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue, "StartDialogue" }, // 3006326838
		{ &Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID, "StartDialogueFromNodeID" }, // 446023995
		{ &Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue, "UpdateAnimationForDialogue" }, // 3203534362
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBuilderObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueBuilderObject.h" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_Inner = { "DialoguesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(nullptr, 0) }; // 2209825246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_MetaData[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Array to keep all data from Dialogue Graph Tab;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Array to keep all data from Dialogue Graph Tab;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData = { "DialoguesData", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueBuilderObject, DialoguesData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_MetaData)) }; // 2209825246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_SetBit(void* Obj)
	{
		((UDialogueBuilderObject*)Obj)->IsJustDuplicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated = { "IsJustDuplicated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueBuilderObject), &Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueBuilderObject, Test), METADATA_PARAMS(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueBuilderObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderObject_Statics::ClassParams = {
		&UDialogueBuilderObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueBuilderObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueBuilderObject()
	{
		if (!Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton, Z_Construct_UClass_UDialogueBuilderObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton;
	}
	template<> DIALOGUEBUILDER_API UClass* StaticClass<UDialogueBuilderObject>()
	{
		return UDialogueBuilderObject::StaticClass();
	}

	void UDialogueBuilderObject::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Test(TEXT("Test"));

		const bool bIsValid = true
			&& Name_Test == ClassReps[(int32)ENetFields_Private::Test].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDialogueBuilderObject"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderObject);
	UDialogueBuilderObject::~UDialogueBuilderObject() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ScriptStructInfo[] = {
		{ FDialogueDetailsStruct::StaticStruct, Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewStructOps, TEXT("DialogueDetailsStruct"), &Z_Registration_Info_UScriptStruct_DialogueDetailsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueDetailsStruct), 2209825246U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderObject, UDialogueBuilderObject::StaticClass, TEXT("UDialogueBuilderObject"), &Z_Registration_Info_UClass_UDialogueBuilderObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderObject), 2027112916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_544920896(TEXT("/Script/DialogueBuilder"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
