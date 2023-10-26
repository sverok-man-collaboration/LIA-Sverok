// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execSetNewWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewWorld(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execValidateNodeRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateNodeRuntime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetParentNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetParentNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetChildrenNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetChildrenNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetMaxChildNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxChildNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execDoesInheritDecorators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesInheritDecorators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execCanStartNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeDecorators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetNodeDecorators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execDoesAutoStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesAutoStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execInitializeNode)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeNode_Implementation(Z_Param_InWorld);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetDefaultTooltipBody)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDefaultTooltipBody();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeDocumentationLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeDocumentationLink_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeCategory_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeTitle_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeTooltipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeTooltipText_Implementation();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	struct MounteaDialogueGraphNode_eventGetDescription_Parms
	{
		FText ReturnValue;
	};
	struct MounteaDialogueGraphNode_eventGetNodeCategory_Parms
	{
		FText ReturnValue;
	};
	struct MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms
	{
		FString ReturnValue;
	};
	struct MounteaDialogueGraphNode_eventGetNodeTitle_Parms
	{
		FText ReturnValue;
	};
	struct MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms
	{
		FText ReturnValue;
	};
	struct MounteaDialogueGraphNode_eventInitializeNode_Parms
	{
		UWorld* InWorld;
	};
	struct MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms()
			: ReturnValue(false)
		{
		}
	};
#if WITH_EDITOR
	static FName NAME_UMounteaDialogueGraphNode_GetDescription = FName(TEXT("GetDescription"));
	FText UMounteaDialogueGraphNode::GetDescription() const
	{
		MounteaDialogueGraphNode_eventGetDescription_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueGraphNode_GetNodeCategory = FName(TEXT("GetNodeCategory"));
	FText UMounteaDialogueGraphNode::GetNodeCategory() const
	{
		MounteaDialogueGraphNode_eventGetNodeCategory_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeCategory),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueGraphNode_GetNodeDocumentationLink = FName(TEXT("GetNodeDocumentationLink"));
	FString UMounteaDialogueGraphNode::GetNodeDocumentationLink() const
	{
		MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeDocumentationLink),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueGraphNode_GetNodeTitle = FName(TEXT("GetNodeTitle"));
	FText UMounteaDialogueGraphNode::GetNodeTitle() const
	{
		MounteaDialogueGraphNode_eventGetNodeTitle_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeTitle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueGraphNode_GetNodeTooltipText = FName(TEXT("GetNodeTooltipText"));
	FText UMounteaDialogueGraphNode::GetNodeTooltipText() const
	{
		MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeTooltipText),&Parms);
		return Parms.ReturnValue;
	}
#endif // WITH_EDITOR
	static FName NAME_UMounteaDialogueGraphNode_InitializeNode = FName(TEXT("InitializeNode"));
	void UMounteaDialogueGraphNode::InitializeNode(UWorld* InWorld)
	{
		MounteaDialogueGraphNode_eventInitializeNode_Parms Parms;
		Parms.InWorld=InWorld;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_InitializeNode),&Parms);
	}
	static FName NAME_UMounteaDialogueGraphNode_ValidateNodeRuntime = FName(TEXT("ValidateNodeRuntime"));
	bool UMounteaDialogueGraphNode::ValidateNodeRuntime() const
	{
		MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueGraphNode_ValidateNodeRuntime),&Parms);
		return !!Parms.ReturnValue;
	}
	void UMounteaDialogueGraphNode::StaticRegisterNativesUMounteaDialogueGraphNode()
	{
		UClass* Class = UMounteaDialogueGraphNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartNode", &UMounteaDialogueGraphNode::execCanStartNode },
			{ "DoesAutoStart", &UMounteaDialogueGraphNode::execDoesAutoStart },
			{ "DoesInheritDecorators", &UMounteaDialogueGraphNode::execDoesInheritDecorators },
			{ "GetChildrenNodes", &UMounteaDialogueGraphNode::execGetChildrenNodes },
#if WITH_EDITOR
			{ "GetDefaultTooltipBody", &UMounteaDialogueGraphNode::execGetDefaultTooltipBody },
			{ "GetDescription", &UMounteaDialogueGraphNode::execGetDescription },
#endif // WITH_EDITOR
			{ "GetGraph", &UMounteaDialogueGraphNode::execGetGraph },
			{ "GetMaxChildNodes", &UMounteaDialogueGraphNode::execGetMaxChildNodes },
#if WITH_EDITOR
			{ "GetNodeCategory", &UMounteaDialogueGraphNode::execGetNodeCategory },
#endif // WITH_EDITOR
			{ "GetNodeDecorators", &UMounteaDialogueGraphNode::execGetNodeDecorators },
#if WITH_EDITOR
			{ "GetNodeDocumentationLink", &UMounteaDialogueGraphNode::execGetNodeDocumentationLink },
#endif // WITH_EDITOR
			{ "GetNodeGUID", &UMounteaDialogueGraphNode::execGetNodeGUID },
			{ "GetNodeIndex", &UMounteaDialogueGraphNode::execGetNodeIndex },
#if WITH_EDITOR
			{ "GetNodeTitle", &UMounteaDialogueGraphNode::execGetNodeTitle },
			{ "GetNodeTooltipText", &UMounteaDialogueGraphNode::execGetNodeTooltipText },
#endif // WITH_EDITOR
			{ "GetParentNodes", &UMounteaDialogueGraphNode::execGetParentNodes },
			{ "InitializeNode", &UMounteaDialogueGraphNode::execInitializeNode },
			{ "SetNewWorld", &UMounteaDialogueGraphNode::execSetNewWorld },
			{ "ValidateNodeRuntime", &UMounteaDialogueGraphNode::execValidateNodeRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics
	{
		struct MounteaDialogueGraphNode_eventCanStartNode_Parms
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
	void Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueGraphNode_eventCanStartNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventCanStartNode_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns true if the node can be started.\n\x09 *\xe2\x9d\x97 The implementation of this function is up to the subclass.\n\x09 *\xe2\x9d\x94 Can be used to validate if a node can be started before attempting to start it.\n\x09 *\xe2\x9d\x94 This can be further enhanced by Decorators.\n\x09 * @return True if the node can be started, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns true if the node can be started.\n\xe2\x9d\x97 The implementation of this function is up to the subclass.\n\xe2\x9d\x94 Can be used to validate if a node can be started before attempting to start it.\n\xe2\x9d\x94 This can be further enhanced by Decorators.\n@return True if the node can be started, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "CanStartNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::MounteaDialogueGraphNode_eventCanStartNode_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics
	{
		struct MounteaDialogueGraphNode_eventDoesAutoStart_Parms
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
	void Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueGraphNode_eventDoesAutoStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventDoesAutoStart_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Checks if the node should automatically start when the dialogue is played.\n\x09 * @return true if the node should automatically start, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Checks if the node should automatically start when the dialogue is played.\n@return true if the node should automatically start, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "DoesAutoStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::MounteaDialogueGraphNode_eventDoesAutoStart_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics
	{
		struct MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms
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
	void Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether this node inherits decorators from the dialogue graph.\n\x09 * If this is set to true, this node will receive all decorators assigned to the graph.\n\x09 * If it's set to false, the node will only have its own decorators.\n\x09 *\n\x09 * @return Whether this node inherits decorators from the graph.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns whether this node inherits decorators from the dialogue graph.\nIf this is set to true, this node will receive all decorators assigned to the graph.\nIf it's set to false, the node will only have its own decorators.\n\n@return Whether this node inherits decorators from the graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "DoesInheritDecorators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics
	{
		struct MounteaDialogueGraphNode_eventGetChildrenNodes_Parms
		{
			TArray<UMounteaDialogueGraphNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetChildrenNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets children Nodes this one has,\n\x09 *\xe2\x9d\x97 Might be empty\n\x09 *\n\x09 * @return Amount of children Nodes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets children Nodes this one has,\n\xe2\x9d\x97 Might be empty\n\n@return Amount of children Nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetChildrenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::MounteaDialogueGraphNode_eventGetChildrenNodes_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics
	{
		struct MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "// Generates default Tooltip body text used for all Nodes\n" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Generates default Tooltip body text used for all Nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetDefaultTooltipBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Description text for this graph node.\n\x09 *\n\x09 * @return The Description text for this node.\n\x09 */" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns the Description text for this graph node.\n\n@return The Description text for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetDescription", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventGetDescription_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics
	{
		struct MounteaDialogueGraphNode_eventGetGraph_Parms
		{
			UMounteaDialogueGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets the owning Graph of the node.\n\x09 *\xe2\x9d\x97 Might be null\n\x09 *\n\x09 * @return The owning Graph of the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets the owning Graph of the node.\n\xe2\x9d\x97 Might be null\n\n@return The owning Graph of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::MounteaDialogueGraphNode_eventGetGraph_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics
	{
		struct MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns how many Children Nodes this Node allows to have.\n\x09 *\xe2\x9d\x94 -1 means no limits.\n\x09 *\n\x09 * @return MaxChildrenNodes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns how many Children Nodes this Node allows to have.\n\xe2\x9d\x94 -1 means no limits.\n\n@return MaxChildrenNodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetMaxChildNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Node Category text for this graph node.\n\x09 *\n\x09 * @return The Node Category text for this node.\n\x09 */" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns the Node Category text for this graph node.\n\n@return The Node Category text for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeCategory", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventGetNodeCategory_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics
	{
		struct MounteaDialogueGraphNode_eventGetNodeDecorators_Parms
		{
			TArray<FMounteaDialogueDecorator> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets the decorators for this Dialogue Graph Node.\n\x09 *\xe2\x9d\x94 Returns only Valid decorators!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets the decorators for this Dialogue Graph Node.\n\xe2\x9d\x94 Returns only Valid decorators!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeDecorators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::MounteaDialogueGraphNode_eventGetNodeDecorators_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Documentation Link for this graph node.\n\x09 *\n\x09 * @return The Documentation Link for this node.\n\x09 */" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns the Documentation Link for this graph node.\n\n@return The Documentation Link for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeDocumentationLink", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics
	{
		struct MounteaDialogueGraphNode_eventGetNodeGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets the GUID of the node.\n\x09 *\n\x09 * @return The GUID of the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets the GUID of the node.\n\n@return The GUID of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::MounteaDialogueGraphNode_eventGetNodeGUID_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics
	{
		struct MounteaDialogueGraphNode_eventGetNodeIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets the index of the node within the dialogue graph.\n\x09 *\n\x09 * @return The index of the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets the index of the node within the dialogue graph.\n\n@return The index of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::MounteaDialogueGraphNode_eventGetNodeIndex_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Title text for this graph node.\n\x09 *\n\x09 * @return The Title text for this node.\n\x09 */" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns the Title text for this graph node.\n\n@return The Title text for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeTitle", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventGetNodeTitle_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the tooltip text for this graph node.\n\x09 *\n\x09 * @return The tooltip text for this node.\n\x09 */" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Returns the tooltip text for this graph node.\n\n@return The tooltip text for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeTooltipText", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics
	{
		struct MounteaDialogueGraphNode_eventGetParentNodes_Parms
		{
			TArray<UMounteaDialogueGraphNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetParentNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Gets how many parent Nodes point to this one\n\x09 *\xe2\x9d\x97 Might be empty\n\x09 *\n\x09 * @return Amount of how parent Nodes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Gets how many parent Nodes point to this one\n\xe2\x9d\x97 Might be empty\n\n@return Amount of how parent Nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetParentNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::MounteaDialogueGraphNode_eventGetParentNodes_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventInitializeNode_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::NewProp_InWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Initializes the node with the given world.\n\x09 *\n\x09 * @param InWorld The world to use for initialization.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Initializes the node with the given world.\n\n@param InWorld The world to use for initialization." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "InitializeNode", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventInitializeNode_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics
	{
		struct MounteaDialogueGraphNode_eventSetNewWorld_Parms
		{
			UWorld* NewWorld;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_eventSetNewWorld_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Provides a way to update Node's owning World.\n\x09 * Useful for Loading sub-levels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Provides a way to update Node's owning World.\nUseful for Loading sub-levels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "SetNewWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::MounteaDialogueGraphNode_eventSetNewWorld_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Serves purpose of validating Node before Dialogue gets Started.\n\x09 * Any broken Node results in non-starting Dialogue to avoid crashes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Serves purpose of validating Node before Dialogue gets Started.\nAny broken Node results in non-starting Dialogue to avoid crashes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "ValidateNodeRuntime", nullptr, nullptr, sizeof(MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister()
	{
		return UMounteaDialogueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildrenNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Edges_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Edges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedInputClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInputClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStarts_MetaData[];
#endif
		static void NewProp_bAutoStarts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChildrenNodes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChildrenNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritGraphDecorators_MetaData[];
#endif
		static void NewProp_bInheritGraphDecorators_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritGraphDecorators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeDecorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeDecorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeDecorators;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInputNodes_MetaData[];
#endif
		static void NewProp_bAllowInputNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInputNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOutputNodes_MetaData[];
#endif
		static void NewProp_bAllowOutputNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOutputNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCopy_MetaData[];
#endif
		static void NewProp_bAllowCopy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCut_MetaData[];
#endif
		static void NewProp_bAllowCut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPaste_MetaData[];
#endif
		static void NewProp_bAllowPaste_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPaste;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDelete_MetaData[];
#endif
		static void NewProp_bAllowDelete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDelete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowManualCreate_MetaData[];
#endif
		static void NewProp_bAllowManualCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowManualCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenuName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ContextMenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleGraphType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleGraphType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTooltipText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTooltipText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTypeName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode, "CanStartNode" }, // 3922727641
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart, "DoesAutoStart" }, // 1428357449
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators, "DoesInheritDecorators" }, // 978762336
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes, "GetChildrenNodes" }, // 197551956
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody, "GetDefaultTooltipBody" }, // 1832068801
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription, "GetDescription" }, // 1471544148
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph, "GetGraph" }, // 203589023
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes, "GetMaxChildNodes" }, // 96481149
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory, "GetNodeCategory" }, // 535739503
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators, "GetNodeDecorators" }, // 2680528144
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink, "GetNodeDocumentationLink" }, // 1247077142
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID, "GetNodeGUID" }, // 1826758497
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex, "GetNodeIndex" }, // 3708401900
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle, "GetNodeTitle" }, // 2517972826
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText, "GetNodeTooltipText" }, // 3358915495
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes, "GetParentNodes" }, // 4151661537
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode, "InitializeNode" }, // 2838635405
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld, "SetNewWorld" }, // 4008506993
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime, "ValidateNodeRuntime" }, // 30625297
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Mountea Dialogue Graph Node abstract Base class.\n * \n * Provides generic functionality to be enhanced or overriden by Child Classes.\n * Does come with ability to define Colours, Name, Description and Title.\n * Contains information about Parent and Children Nodes.\n */" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Mountea Dialogue Graph Node abstract Base class.\n\nProvides generic functionality to be enhanced or overriden by Child Classes.\nDoes come with ability to define Colours, Name, Description and Title.\nContains information about Parent and Children Nodes." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * Array of parent nodes for the current active node in the dialogue traversal.\n\x09 *\xe2\x9d\x97 Parent nodes are nodes that have a directed edge pointing to the current active node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Array of parent nodes for the current active node in the dialogue traversal.\n\xe2\x9d\x97 Parent nodes are nodes that have a directed edge pointing to the current active node." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_Inner = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * The array of child nodes of the current dialogue node.\n\x09 *\xe2\x9d\x97 The order of the children nodes matter and determines the order in which the options are presented to the player.\n\x09 *\xe2\x9d\x94 Can be used to traverse the graph and to create UI to display the dialogue options.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "The array of child nodes of the current dialogue node.\n\xe2\x9d\x97 The order of the children nodes matter and determines the order in which the options are presented to the player.\n\xe2\x9d\x94 Can be used to traverse the graph and to create UI to display the dialogue options." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, ChildrenNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * Map of edges connecting this Node in the Mountea Dialogue Graph.\n\x09 *\xe2\x9d\x97 The key of the map is the source node, and the value is the edge connecting it to its target node.\n\x09 *\xe2\x9d\x94 Can be used to traverse the graph, get information about node connections...\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Map of edges connecting this Node in the Mountea Dialogue Graph.\n\xe2\x9d\x97 The key of the map is the source node, and the value is the edge connecting it to its target node.\n\xe2\x9d\x94 Can be used to traverse the graph, get information about node connections..." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, Edges), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * Pointer to the parent dialogue graph of this node.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Pointer to the parent dialogue graph of this node." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, Graph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * Temporary NodeIndex.\n\x09 * This variable will be deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Temporary NodeIndex.\nThis variable will be deleted." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeIndex), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * The unique identifier for this Dialogue Graph Node.\n\x09 *\xe2\x9d\x97 This is used to differentiate between nodes, and must be unique within the graph.\n\x09 *\xe2\x9d\x94 Can be used for debugging and tracing purposes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "The unique identifier for this Dialogue Graph Node.\n\xe2\x9d\x97 This is used to differentiate between nodes, and must be unique within the graph.\n\xe2\x9d\x94 Can be used for debugging and tracing purposes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * The world that owns this Dialogue Graph Node.\n\x09 *\xe2\x9d\x97 This is the world in which this Dialogue Graph Node is currently running.\n\x09 *\xe2\x9d\x94 Can be used for accessing world-related functionality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "The world that owns this Dialogue Graph Node.\n\xe2\x9d\x97 This is the world in which this Dialogue Graph Node is currently running.\n\xe2\x9d\x94 Can be used for accessing world-related functionality." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_Inner = { "AllowedInputClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_MetaData[] = {
		{ "Category", "Base" },
		{ "Comment", "/**\n\x09 * The array of allowed input classes for this Dialogue Node.\n\x09 *\xe2\x9d\x97 Only nodes with classes from this array can be connected as inputs to this node.\n\x09 *\xe2\x9d\x94 Can be used to restrict the types of inputs this node can accept.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "The array of allowed input classes for this Dialogue Node.\n\xe2\x9d\x97 Only nodes with classes from this array can be connected as inputs to this node.\n\xe2\x9d\x94 Can be used to restrict the types of inputs this node can accept." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses = { "AllowedInputClasses", nullptr, (EPropertyFlags)0x0014000001010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, AllowedInputClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_MetaData[] = {
		{ "Category", "Base" },
		{ "Comment", "/** Defines whether this Node will start automatically or if requires input.*/" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node will start automatically or if requires input." },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAutoStarts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts = { "bAutoStarts", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes_MetaData[] = {
		{ "Category", "Base" },
		{ "Comment", "/**\n\x09 * The maximum number of children nodes that this node can have.\n\x09 *\xe2\x9d\x97 If this value is -1, then there is no limit on the number of children nodes.\n\x09 *\xe2\x9d\x94 Can be used to enforce a maximum number of connections for certain types of nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "The maximum number of children nodes that this node can have.\n\xe2\x9d\x97 If this value is -1, then there is no limit on the number of children nodes.\n\xe2\x9d\x94 Can be used to enforce a maximum number of connections for certain types of nodes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes = { "MaxChildrenNodes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, MaxChildrenNodes), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Indicates whether this node inherits the decorators from its parent Graph.\n\x09 *\xe2\x9d\x97 If true, the decorators of the parent Graph will be inherited and applied to this node during processing.\n\x09 *\xe2\x9d\x94 This flag can be used to control the inheritance of decorators for nodes in the dialogue graph.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Indicates whether this node inherits the decorators from its parent Graph.\n\xe2\x9d\x97 If true, the decorators of the parent Graph will be inherited and applied to this node during processing.\n\xe2\x9d\x94 This flag can be used to control the inheritance of decorators for nodes in the dialogue graph." },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bInheritGraphDecorators = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators = { "bInheritGraphDecorators", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_Inner = { "NodeDecorators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(nullptr, 0) }; // 2215661766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * A list of Decorators that can help out with enhancing the Dialogue flow.\n\x09 * Those Decorators are instanced and exist only as \"triggers\".\n\x09 * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "A list of Decorators that can help out with enhancing the Dialogue flow.\nThose Decorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators = { "NodeDecorators", nullptr, (EPropertyFlags)0x0010008002010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_MetaData)) }; // 2215661766
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node type allows inputs\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node type allows inputs" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowInputNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes = { "bAllowInputNodes", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node type allows outputs\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node type allows outputs" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowOutputNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes = { "bAllowOutputNodes", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node can be copied\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node can be copied" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowCopy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy = { "bAllowCopy", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node can be cut\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node can be cut" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowCut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut = { "bAllowCut", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node can be pasted\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node can be pasted" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowPaste = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste = { "bAllowPaste", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node can be deleted\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node can be deleted" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowDelete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete = { "bAllowDelete", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines whether this Node can be manually created\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines whether this Node can be manually created" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphNode*)Obj)->bAllowManualCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate = { "bAllowManualCreate", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Display title of the Node\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Display title of the Node" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTitle), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Display name of the Node menu category\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Display name of the Node menu category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName = { "ContextMenuName", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, ContextMenuName), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// List of compatible graph types\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "List of compatible graph types" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType = { "CompatibleGraphType", nullptr, (EPropertyFlags)0x0014000800020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, CompatibleGraphType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Defines background colour of this Node\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Defines background colour of this Node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// Contains Node Tooltip text\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "Contains Node Tooltip text" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText = { "NodeTooltipText", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTooltipText), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "// User friendly node type name\n" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "ToolTip", "User friendly node type name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName = { "NodeTypeName", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTypeName), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::ClassParams = {
		&UMounteaDialogueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode>()
	{
		return UMounteaDialogueGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode);
	UMounteaDialogueGraphNode::~UMounteaDialogueGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode, UMounteaDialogueGraphNode::StaticClass, TEXT("UMounteaDialogueGraphNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode), 2165325772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_4060818166(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
