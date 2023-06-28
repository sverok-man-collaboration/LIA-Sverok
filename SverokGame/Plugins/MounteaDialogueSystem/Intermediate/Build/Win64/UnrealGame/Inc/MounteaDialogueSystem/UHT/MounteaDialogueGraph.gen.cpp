// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Graph/MounteaDialogueGraph.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetAllDecorators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetAllDecorators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetGraphDecorators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetGraphDecorators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetStartNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetStartNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetRootNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetRootNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetAllNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetAllNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraph::execGetGraphGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGraphGUID();
		P_NATIVE_END;
	}
	void UMounteaDialogueGraph::StaticRegisterNativesUMounteaDialogueGraph()
	{
		UClass* Class = UMounteaDialogueGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllDecorators", &UMounteaDialogueGraph::execGetAllDecorators },
			{ "GetAllNodes", &UMounteaDialogueGraph::execGetAllNodes },
			{ "GetGraphDecorators", &UMounteaDialogueGraph::execGetGraphDecorators },
			{ "GetGraphGUID", &UMounteaDialogueGraph::execGetGraphGUID },
			{ "GetRootNodes", &UMounteaDialogueGraph::execGetRootNodes },
			{ "GetStartNode", &UMounteaDialogueGraph::execGetStartNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics
	{
		struct MounteaDialogueGraph_eventGetAllDecorators_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetAllDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the array of decorators that are associated with this graph and its nodes.\n\x09 *\n\x09 * @return The array of decorators.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Returns the array of decorators that are associated with this graph and its nodes.\n\n@return The array of decorators." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetAllDecorators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::MounteaDialogueGraph_eventGetAllDecorators_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics
	{
		struct MounteaDialogueGraph_eventGetAllNodes_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetAllNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns an array containing all nodes in the dialogue graph.\n\x09 * @return An array of all nodes in the dialogue graph.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Returns an array containing all nodes in the dialogue graph.\n@return An array of all nodes in the dialogue graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetAllNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::MounteaDialogueGraph_eventGetAllNodes_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics
	{
		struct MounteaDialogueGraph_eventGetGraphDecorators_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetGraphDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2215661766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the array of decorators that are associated with this graph.\n\x09 *\n\x09 * @return The array of decorators.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Returns the array of decorators that are associated with this graph.\n\n@return The array of decorators." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetGraphDecorators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::MounteaDialogueGraph_eventGetGraphDecorators_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics
	{
		struct MounteaDialogueGraph_eventGetGraphGUID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetGraphGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the GUID of the graph.\n\x09 *\n\x09 * @return The GUID of the graph.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Returns the GUID of the graph.\n\n@return The GUID of the graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetGraphGUID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::MounteaDialogueGraph_eventGetGraphGUID_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics
	{
		struct MounteaDialogueGraph_eventGetRootNodes_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetRootNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetRootNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::MounteaDialogueGraph_eventGetRootNodes_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics
	{
		struct MounteaDialogueGraph_eventGetStartNode_Parms
		{
			UMounteaDialogueGraphNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraph_eventGetStartNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the root nodes of the dialogue graph.\n\x09 *\n\x09 * @return An array of all root nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Returns the root nodes of the dialogue graph.\n\n@return An array of all root nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetStartNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::MounteaDialogueGraph_eventGetStartNode_Parms), Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraph);
	UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister()
	{
		return UMounteaDialogueGraph::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphDecorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphDecorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphDecorators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EdgeType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEdgeEnabled_MetaData[];
#endif
		static void NewProp_bEdgeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEdgeEnabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[];
#endif
		static void NewProp_bCanRenameNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators, "GetAllDecorators" }, // 1130112401
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes, "GetAllNodes" }, // 2779008582
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators, "GetGraphDecorators" }, // 353270711
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID, "GetGraphGUID" }, // 2338423586
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes, "GetRootNodes" }, // 3387067331
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode, "GetStartNode" }, // 3708787245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Mountea Dialogue Graph.\n * \n * Can be manually created from Content Browser, using Mountea Dialogue category.\n * Comes with Node editor, which provides easy to follow visual way to create Dialogue Trees.\n */" },
		{ "DisplayName", "Mountea Dialogue Tree" },
		{ "HideCategories", "Hidden Private Base" },
		{ "IncludePath", "Graph/MounteaDialogueGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Mountea Dialogue Graph.\n\nCan be manually created from Content Browser, using Mountea Dialogue category.\nComes with Node editor, which provides easy to follow visual way to create Dialogue Trees." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_Inner = { "GraphDecorators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(nullptr, 0) }; // 2215661766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * The list of decorators for the dialogue graph.\n\x09 * Decorators are used to add extra functionality or behavior to the nodes in the graph.\n\x09 * This array should contain an instance of each decorator used in the graph.\n\x09 * The order of the decorators in this array determines the order in which they will be applied to the nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The list of decorators for the dialogue graph.\nDecorators are used to add extra functionality or behavior to the nodes in the graph.\nThis array should contain an instance of each decorator used in the graph.\nThe order of the decorators in this array determines the order in which they will be applied to the nodes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators = { "GraphDecorators", nullptr, (EPropertyFlags)0x0020088002010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, GraphDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_MetaData)) }; // 2215661766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * A set of gameplay tags associated with this dialogue graph.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "A set of gameplay tags associated with this dialogue graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags = { "GraphTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, GraphTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09* GUID for this Mountea Dialogue Graph.\n\x09*\xe2\x9d\x97 Unique identifier for this Dialogue Graph instance.\n\x09*\xe2\x9d\x94 Can be used for debugging and tracing purposes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "GUID for this Mountea Dialogue Graph.\n\xe2\x9d\x97 Unique identifier for this Dialogue Graph instance.\n\xe2\x9d\x94 Can be used for debugging and tracing purposes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID = { "GraphGUID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, GraphGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "// Pointer to the starting node of the dialogue graph.\n" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Pointer to the starting node of the dialogue graph." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, StartNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * The class of the dialogue node represented by this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "The class of the dialogue node represented by this instance." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, NodeType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * The class of the dialogue edge represented by this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "The class of the dialogue edge represented by this instance." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType = { "EdgeType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, EdgeType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * An array of root nodes in the dialogue graph. These are the nodes that do not have any incoming connections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "An array of root nodes in the dialogue graph. These are the nodes that do not have any incoming connections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Array containing all the nodes in the graph, including both root nodes and child nodes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Array containing all the nodes in the graph, including both root nodes and child nodes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "// Flag indicating whether an edge is enabled\n" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "ToolTip", "Flag indicating whether an edge is enabled" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_SetBit(void* Obj)
	{
		((UMounteaDialogueGraph*)Obj)->bEdgeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled = { "bEdgeEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraph), &Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraph, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Editor" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
	{
		((UMounteaDialogueGraph*)Obj)->bCanRenameNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraph), &Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::ClassParams = {
		&UMounteaDialogueGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraph()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraph>()
	{
		return UMounteaDialogueGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraph);
	UMounteaDialogueGraph::~UMounteaDialogueGraph() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraph, UMounteaDialogueGraph::StaticClass, TEXT("UMounteaDialogueGraph"), &Z_Registration_Info_UClass_UMounteaDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraph), 1001318846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_1499109500(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
