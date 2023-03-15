// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/TransitionNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransitionNodeDB() {}
// Cross Module References
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UTransitionNodeDB();
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UTransitionNodeDB_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References
	void UTransitionNodeDB::StaticRegisterNativesUTransitionNodeDB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransitionNodeDB);
	UClass* Z_Construct_UClass_UTransitionNodeDB_NoRegister()
	{
		return UTransitionNodeDB::StaticClass();
	}
	struct Z_Construct_UClass_UTransitionNodeDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bidirectional_MetaData[];
#endif
		static void NewProp_Bidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bidirectional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHasFunction_MetaData[];
#endif
		static void NewProp_IsHasFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHasFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousNodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransitionNodeDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/TransitionNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
	void Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_SetBit(void* Obj)
	{
		((UTransitionNodeDB*)Obj)->Bidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional = { "Bidirectional", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransitionNodeDB), &Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_MetaData[] = {
		{ "Comment", "// Start Connection Variables Part;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
		{ "ToolTip", "Start Connection Variables Part;" },
	};
#endif
	void Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_SetBit(void* Obj)
	{
		((UTransitionNodeDB*)Obj)->IsHasFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction = { "IsHasFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransitionNodeDB), &Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName = { "ConnectFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransitionNodeDB, ConnectFunctionName), METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph = { "FunctionGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransitionNodeDB, FunctionGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID = { "PreviousNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransitionNodeDB, PreviousNodeID), METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID = { "NextNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransitionNodeDB, NextNodeID), METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransitionNodeDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransitionNodeDB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransitionNodeDB_Statics::ClassParams = {
		&UTransitionNodeDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTransitionNodeDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransitionNodeDB()
	{
		if (!Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton, Z_Construct_UClass_UTransitionNodeDB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton;
	}
	template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UTransitionNodeDB>()
	{
		return UTransitionNodeDB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransitionNodeDB);
	UTransitionNodeDB::~UTransitionNodeDB() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransitionNodeDB, UTransitionNodeDB::StaticClass, TEXT("UTransitionNodeDB"), &Z_Registration_Info_UClass_UTransitionNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransitionNodeDB), 3666264505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_1034401107(TEXT("/Script/DialogueBuilderEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
