// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueContext.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueContextUpdatedFromBlueprint__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueParticipantBP)
	{
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveDialogueParticipantBP(Z_Param_NewParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateDialoguePlayerParticipantBP)
	{
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDialoguePlayerParticipantBP(Z_Param_NewParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueRowDataIndexBP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveDialogueRowDataIndexBP(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueRowBP)
	{
		P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_NewActiveRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveDialogueRowBP(Z_Param_Out_NewActiveRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueNodeBP)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewActiveNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActiveDialogueNodeBP(Z_Param_NewActiveNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateDialogueParticipantBP)
	{
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDialogueParticipantBP(Z_Param_NewParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execSetDialogueContextBP)
	{
		P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewActiveNode);
		P_GET_TARRAY(UMounteaDialogueGraphNode*,Z_Param_NewAllowedChildNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueContextBP(Z_Param_NewParticipant,Z_Param_NewActiveNode,Z_Param_NewAllowedChildNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueContext::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void UMounteaDialogueContext::StaticRegisterNativesUMounteaDialogueContext()
	{
		UClass* Class = UMounteaDialogueContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UMounteaDialogueContext::execIsValid },
			{ "SetDialogueContextBP", &UMounteaDialogueContext::execSetDialogueContextBP },
			{ "UpdateActiveDialogueNodeBP", &UMounteaDialogueContext::execUpdateActiveDialogueNodeBP },
			{ "UpdateActiveDialogueParticipantBP", &UMounteaDialogueContext::execUpdateActiveDialogueParticipantBP },
			{ "UpdateActiveDialogueRowBP", &UMounteaDialogueContext::execUpdateActiveDialogueRowBP },
			{ "UpdateActiveDialogueRowDataIndexBP", &UMounteaDialogueContext::execUpdateActiveDialogueRowDataIndexBP },
			{ "UpdateDialogueParticipantBP", &UMounteaDialogueContext::execUpdateDialogueParticipantBP },
			{ "UpdateDialoguePlayerParticipantBP", &UMounteaDialogueContext::execUpdateDialoguePlayerParticipantBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics
	{
		struct MounteaDialogueContext_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueContext_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueContext_eventIsValid_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Debug" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::MounteaDialogueContext_eventIsValid_Parms), Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics
	{
		struct MounteaDialogueContext_eventSetDialogueContextBP_Parms
		{
			TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
			UMounteaDialogueGraphNode* NewActiveNode;
			TArray<UMounteaDialogueGraphNode*> NewAllowedChildNodes;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAllowedChildNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAllowedChildNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewActiveNode = { "NewActiveNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes_Inner = { "NewAllowedChildNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes = { "NewAllowedChildNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewAllowedChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewActiveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Sets the dialogue context.\n\x09 *\n\x09 * @param NewParticipant The new dialogue participant.\n\x09 * @param NewActiveNode The new active dialogue node.\n\x09 * @param NewAllowedChildNodes The new allowed child dialogue nodes.\n\x09 */" },
		{ "DisplayName", "SetDialogueContext" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Sets the dialogue context.\n\n@param NewParticipant The new dialogue participant.\n@param NewActiveNode The new active dialogue node.\n@param NewAllowedChildNodes The new allowed child dialogue nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "SetDialogueContextBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::MounteaDialogueContext_eventSetDialogueContextBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms
		{
			UMounteaDialogueGraphNode* NewActiveNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::NewProp_NewActiveNode = { "NewActiveNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms, NewActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::NewProp_NewActiveNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates Active Dialogue Node in Context.\n\x09 * \n\x09 * @param NewActiveNode - New Active Dialogue Node to update to.\n\x09 * \xe2\x9d\x97 Must not be Null\n\x09 */" },
		{ "DisplayName", "UpdateActiveDialogueNode" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates Active Dialogue Node in Context.\n\n@param NewActiveNode - New Active Dialogue Node to update to.\n\xe2\x9d\x97 Must not be Null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueNodeBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms
		{
			TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::NewProp_NewParticipant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates Dialogue Active Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Active Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
		{ "DisplayName", "UpdateActiveDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates Dialogue Active Participant.\n\n@param NewParticipant - new Dialogue Active Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueParticipantBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms
		{
			FDialogueRow NewActiveRow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActiveRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewActiveRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow = { "NewActiveRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms, NewActiveRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow_MetaData)) }; // 1576585352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates the active dialogue row.\n\x09 * \n\x09 * @param NewActiveRow - The new active dialogue row.\n\x09 */" },
		{ "DisplayName", "UpdateActiveDialogueRow" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates the active dialogue row.\n\n@param NewActiveRow - The new active dialogue row." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueRowBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms
		{
			int32 NewIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates the active dialogue row Data Index.\n\x09 * \n\x09 * @param NewIndex - The new active dialogue data row Index.\n\x09 */" },
		{ "DisplayName", "UpdateActiveDialogueRowDataIndex" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates the active dialogue row Data Index.\n\n@param NewIndex - The new active dialogue data row Index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueRowDataIndexBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms
		{
			TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::NewProp_NewParticipant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates Dialogue Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
		{ "DisplayName", "UpdateDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates Dialogue Participant.\n\n@param NewParticipant - new Dialogue Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateDialogueParticipantBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics
	{
		struct MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms
		{
			TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::NewProp_NewParticipant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "Comment", "/**\n\x09 * Updates Dialogue Player Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Player Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
		{ "DisplayName", "UpdateDialoguePlayerParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Updates Dialogue Player Participant.\n\n@param NewParticipant - new Dialogue Player Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateDialoguePlayerParticipantBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms), Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueContext);
	UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister()
	{
		return UMounteaDialogueContext::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ActiveDialogueParticipant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlayerDialogueParticipant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllowedChildNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedChildNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedChildNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogueRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueRowDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDialogueRowDataIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraversedPath_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraversedPath_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraversedPath_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TraversedPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueContext_IsValid, "IsValid" }, // 3064089612
		{ &Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP, "SetDialogueContextBP" }, // 2205209439
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP, "UpdateActiveDialogueNodeBP" }, // 940935758
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP, "UpdateActiveDialogueParticipantBP" }, // 3848363505
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP, "UpdateActiveDialogueRowBP" }, // 2927177949
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP, "UpdateActiveDialogueRowDataIndexBP" }, // 3650486231
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP, "UpdateDialogueParticipantBP" }, // 2476511584
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP, "UpdateDialoguePlayerParticipantBP" }, // 300871608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Dialogue Context.\n * \n * Contains information needed to successfully start Dialogue.\n * Also helps tracking Dialogue Specific data. Is recycled for whole Dialogue Graph.\n * \n * In Dialogue Manager Component is used as Transient object, which is nullified once Dialogue ends and is never saved.\n */" },
		{ "IncludePath", "Data/MounteaDialogueContext.h" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Dialogue Context.\n\nContains information needed to successfully start Dialogue.\nAlso helps tracking Dialogue Specific data. Is recycled for whole Dialogue Graph.\n\nIn Dialogue Manager Component is used as Transient object, which is nullified once Dialogue ends and is never saved." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Active Dialogue Participant Interface reference.\n\x09 * \n\x09 * This is the Participant who is Active right now.\n\x09 * \xe2\x9d\x94 Lead Node sets this value to Dialogue Participant.\n\x09 * \xe2\x9d\x94 Answer Node sets this value to Player Participant.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Active Dialogue Participant Interface reference.\n\nThis is the Participant who is Active right now.\n\xe2\x9d\x94 Lead Node sets this value to Dialogue Participant.\n\xe2\x9d\x94 Answer Node sets this value to Player Participant.\n\xe2\x9d\x97 Might be invalid" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant = { "ActiveDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Player Dialogue Participant Interface reference.\n\x09 * \n\x09 * This is the Participant who represent the Player.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Player Dialogue Participant Interface reference.\n\nThis is the Participant who represent the Player.\n\xe2\x9d\x97 Might be invalid" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant = { "PlayerDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, PlayerDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, DialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Pointer to the Node which is currently active.\n\x09 * \xe2\x9d\x97 Might be null\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Pointer to the Node which is currently active.\n\xe2\x9d\x97 Might be null" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode = { "ActiveNode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, ActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_Inner = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * List of Nodes that can be accessed from Active Node.\n\x09 * Already filtered to contain only those that can be triggered.\n\x09 * \n\x09 * \xe2\x9d\x94 Filter is done by 'CanStartNode', which can have its own logic and can be driven by Decorators as well.\n\x09 * \xe2\x9d\x97 Might be empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "List of Nodes that can be accessed from Active Node.\nAlready filtered to contain only those that can be triggered.\n\n\xe2\x9d\x94 Filter is done by 'CanStartNode', which can have its own logic and can be driven by Decorators as well.\n\xe2\x9d\x97 Might be empty" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, AllowedChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Active Dialogue Row from Active Node. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Active Dialogue Row from Active Node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow = { "ActiveDialogueRow", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow_MetaData)) }; // 1576585352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Index of currently used Dialogue Row Data row.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "ToolTip", "Index of currently used Dialogue Row Data row." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex = { "ActiveDialogueRowDataIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueRowDataIndex), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_ValueProp = { "TraversedPath", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_Key_KeyProp = { "TraversedPath_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Contains mapped list of Traversed Nodes by GUIDs.\n\x09 * Each time Dialogue is updated, like node is selected or starts itself, this Path is updated.\n\x09 * Updates Participant once Dialogue is done.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Contains mapped list of Traversed Nodes by GUIDs.\nEach time Dialogue is updated, like node is selected or starts itself, this Path is updated.\nUpdates Participant once Dialogue is done." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath = { "TraversedPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueContext, TraversedPath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueContext_Statics::ClassParams = {
		&UMounteaDialogueContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueContext()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton, Z_Construct_UClass_UMounteaDialogueContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueContext>()
	{
		return UMounteaDialogueContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueContext);
	UMounteaDialogueContext::~UMounteaDialogueContext() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueContext, UMounteaDialogueContext::StaticClass, TEXT("UMounteaDialogueContext"), &Z_Registration_Info_UClass_UMounteaDialogueContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueContext), 769591663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_3813621623(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
