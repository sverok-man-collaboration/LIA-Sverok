// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_ReturnToNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueGraphNode_ReturnToNode::execGetRowNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetRowNames();
		P_NATIVE_END;
	}
	void UMounteaDialogueGraphNode_ReturnToNode::StaticRegisterNativesUMounteaDialogueGraphNode_ReturnToNode()
	{
		UClass* Class = UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRowNames", &UMounteaDialogueGraphNode_ReturnToNode::execGetRowNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics
	{
		struct MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode, nullptr, "GetRowNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_ReturnToNode);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_NoRegister()
	{
		return UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedNode;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedNodesFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedNodesFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedNodesFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames, "GetRowNames" }, // 271514178
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Mountea Dialogue Graph Node Return To Node\n * \n * Provides ability to return from Dialogue Node to different one.\n * Useful when dialogue branching disallows pin connections.\n */" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "ToolTip", "Mountea Dialogue Graph Node Return To Node\n\nProvides ability to return from Dialogue Node to different one.\nUseful when dialogue branching disallows pin connections." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Shows list of Node Indexes.\n\x09 * This is not very user friendly, however, to combat this Preview is generated with ability to click on it and get focused on selected Node.\n\x09 */" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "ToolTip", "Shows list of Node Indexes.\nThis is not very user friendly, however, to combat this Preview is generated with ability to click on it and get focused on selected Node." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex = { "SelectedNodeIndex", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, SelectedNodeIndex), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode_MetaData[] = {
		{ "Category", "Private" },
		{ "Comment", "/**\n\x09 * Dialogue Node to which this Node leads to.\n\x09 */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Dialogue Node to which this Node leads to." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode = { "SelectedNode", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, SelectedNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_Inner = { "AllowedNodesFilter", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**\n\x09 * Filters OUT all nodes by that class.\n\x09 */" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Filters OUT all nodes by that class." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter = { "AllowedNodesFilter", nullptr, (EPropertyFlags)0x0014000001000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, AllowedNodesFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_ReturnToNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::ClassParams = {
		&UMounteaDialogueGraphNode_ReturnToNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_ReturnToNode>()
	{
		return UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_ReturnToNode);
	UMounteaDialogueGraphNode_ReturnToNode::~UMounteaDialogueGraphNode_ReturnToNode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode, UMounteaDialogueGraphNode_ReturnToNode::StaticClass, TEXT("UMounteaDialogueGraphNode_ReturnToNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_ReturnToNode), 3465835922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_1210171512(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
