// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Edges/MounteaDialogueGraphEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphEdge() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	void UMounteaDialogueGraphEdge::StaticRegisterNativesUMounteaDialogueGraphEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphEdge);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister()
	{
		return UMounteaDialogueGraphEdge::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Mountea Dialogue Edges.\n *\n * Currently those Edges are just connecting objects with no advanced logic.\n */" },
		{ "IncludePath", "Edges/MounteaDialogueGraphEdge.h" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Mountea Dialogue Edges.\n\nCurrently those Edges are just connecting objects with no advanced logic." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEdge, Graph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEdge, StartNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEdge, EndNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::ClassParams = {
		&UMounteaDialogueGraphEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphEdge>()
	{
		return UMounteaDialogueGraphEdge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphEdge);
	UMounteaDialogueGraphEdge::~UMounteaDialogueGraphEdge() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphEdge, UMounteaDialogueGraphEdge::StaticClass, TEXT("UMounteaDialogueGraphEdge"), &Z_Registration_Info_UClass_UMounteaDialogueGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphEdge), 1821853599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_1346946017(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
