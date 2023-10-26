// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_StartNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_StartNode() {}
// Cross Module References
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	void UMounteaDialogueGraphNode_StartNode::StaticRegisterNativesUMounteaDialogueGraphNode_StartNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_StartNode);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_NoRegister()
	{
		return UMounteaDialogueGraphNode_StartNode::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "DisplayName", "Start Node" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_StartNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_StartNode.h" },
		{ "ToolTip", "Mountea Dialogue Tree: Start Node" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_StartNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::ClassParams = {
		&UMounteaDialogueGraphNode_StartNode::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_StartNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_StartNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_StartNode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_StartNode>()
	{
		return UMounteaDialogueGraphNode_StartNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_StartNode);
	UMounteaDialogueGraphNode_StartNode::~UMounteaDialogueGraphNode_StartNode() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_StartNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_StartNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_StartNode, UMounteaDialogueGraphNode_StartNode::StaticClass, TEXT("UMounteaDialogueGraphNode_StartNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_StartNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_StartNode), 2075994723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_StartNode_h_3582981451(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_StartNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_StartNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
