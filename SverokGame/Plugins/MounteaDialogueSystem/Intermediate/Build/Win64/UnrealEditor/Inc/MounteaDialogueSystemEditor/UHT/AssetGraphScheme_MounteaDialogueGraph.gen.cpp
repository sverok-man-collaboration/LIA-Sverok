// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGraphScheme_MounteaDialogueGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge();
	MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAssetSchemaAction_MounteaDialogueGraph_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_MounteaDialogueGraph_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode;
class UScriptStruct* FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("AssetSchemaAction_MounteaDialogueGraph_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_MounteaDialogueGraph_NewNode>()
{
	return FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_MounteaDialogueGraph_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_MounteaDialogueGraph_NewNode",
		sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewNode),
		alignof(FAssetSchemaAction_MounteaDialogueGraph_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_MounteaDialogueGraph_NewEdge cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge;
class UScriptStruct* FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("AssetSchemaAction_MounteaDialogueGraph_NewEdge"));
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>()
{
	return FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_MounteaDialogueGraph_NewEdge",
		sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge),
		alignof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton;
	}
	void UAssetGraphScheme_MounteaDialogueGraph::StaticRegisterNativesUAssetGraphScheme_MounteaDialogueGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetGraphScheme_MounteaDialogueGraph);
	UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_NoRegister()
	{
		return UAssetGraphScheme_MounteaDialogueGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGraphScheme_MounteaDialogueGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::ClassParams = {
		&UAssetGraphScheme_MounteaDialogueGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph()
	{
		if (!Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton, Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UAssetGraphScheme_MounteaDialogueGraph>()
	{
		return UAssetGraphScheme_MounteaDialogueGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGraphScheme_MounteaDialogueGraph);
	UAssetGraphScheme_MounteaDialogueGraph::~UAssetGraphScheme_MounteaDialogueGraph() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ScriptStructInfo[] = {
		{ FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::NewStructOps, TEXT("AssetSchemaAction_MounteaDialogueGraph_NewNode"), &Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewNode), 1092493273U) },
		{ FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::NewStructOps, TEXT("AssetSchemaAction_MounteaDialogueGraph_NewEdge"), &Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge), 3510276515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph, UAssetGraphScheme_MounteaDialogueGraph::StaticClass, TEXT("UAssetGraphScheme_MounteaDialogueGraph"), &Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetGraphScheme_MounteaDialogueGraph), 3160810900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_3529645248(TEXT("/Script/MounteaDialogueSystemEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
