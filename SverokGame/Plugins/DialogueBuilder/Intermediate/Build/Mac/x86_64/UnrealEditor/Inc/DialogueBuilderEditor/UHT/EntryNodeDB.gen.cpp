// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/EntryNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryNodeDB() {}
// Cross Module References
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UEntryNodeDB();
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UEntryNodeDB_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References
	void UEntryNodeDB::StaticRegisterNativesUEntryNodeDB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntryNodeDB);
	UClass* Z_Construct_UClass_UEntryNodeDB_NoRegister()
	{
		return UEntryNodeDB::StaticClass();
	}
	struct Z_Construct_UClass_UEntryNodeDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryNodeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryNodeText;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodesId_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNodesId_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NextNodesId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntryNodeDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntryNodeDB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/EntryNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId_MetaData[] = {
		{ "Comment", "//Start Dialogue Data Part;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
		{ "ToolTip", "Start Dialogue Data Part;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId = { "EntryNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEntryNodeDB, EntryNodeId), METADATA_PARAMS(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText = { "EntryNodeText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEntryNodeDB, EntryNodeText), METADATA_PARAMS(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_Inner = { "NextNodesId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId = { "NextNodesId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEntryNodeDB, NextNodesId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntryNodeDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntryNodeDB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntryNodeDB_Statics::ClassParams = {
		&UEntryNodeDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEntryNodeDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntryNodeDB()
	{
		if (!Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton, Z_Construct_UClass_UEntryNodeDB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton;
	}
	template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UEntryNodeDB>()
	{
		return UEntryNodeDB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntryNodeDB);
	UEntryNodeDB::~UEntryNodeDB() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntryNodeDB, UEntryNodeDB::StaticClass, TEXT("UEntryNodeDB"), &Z_Registration_Info_UClass_UEntryNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntryNodeDB), 3559077069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_373770589(TEXT("/Script/DialogueBuilderEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
