// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Ed/EdNode_MounteaDialogueGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdNode_MounteaDialogueGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References
	void UEdNode_MounteaDialogueGraphNode::StaticRegisterNativesUEdNode_MounteaDialogueGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdNode_MounteaDialogueGraphNode);
	UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister()
	{
		return UEdNode_MounteaDialogueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraphNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Ed/EdNode_MounteaDialogueGraphNode.h" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode_MetaData[] = {
		{ "Category", "Mountea Dialogue Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode = { "DialogueGraphNode", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdNode_MounteaDialogueGraphNode, DialogueGraphNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdNode_MounteaDialogueGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::ClassParams = {
		&UEdNode_MounteaDialogueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode()
	{
		if (!Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UEdNode_MounteaDialogueGraphNode>()
	{
		return UEdNode_MounteaDialogueGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdNode_MounteaDialogueGraphNode);
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode, UEdNode_MounteaDialogueGraphNode::StaticClass, TEXT("UEdNode_MounteaDialogueGraphNode"), &Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdNode_MounteaDialogueGraphNode), 2373616518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_3132961185(TEXT("/Script/MounteaDialogueSystemEditor"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
