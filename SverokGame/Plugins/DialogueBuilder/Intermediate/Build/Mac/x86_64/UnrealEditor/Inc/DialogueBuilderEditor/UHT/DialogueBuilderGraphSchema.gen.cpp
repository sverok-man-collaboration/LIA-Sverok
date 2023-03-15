// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/DialogueBuilderGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderGraphSchema() {}
// Cross Module References
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema();
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References
	void UDialogueBuilderGraphSchema::StaticRegisterNativesUDialogueBuilderGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderGraphSchema);
	UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema_NoRegister()
	{
		return UDialogueBuilderGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/DialogueBuilderGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::ClassParams = {
		&UDialogueBuilderGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton, Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton;
	}
	template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UDialogueBuilderGraphSchema>()
	{
		return UDialogueBuilderGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderGraphSchema);
	UDialogueBuilderGraphSchema::~UDialogueBuilderGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderGraphSchema, UDialogueBuilderGraphSchema::StaticClass, TEXT("UDialogueBuilderGraphSchema"), &Z_Registration_Info_UClass_UDialogueBuilderGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderGraphSchema), 131402950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_459692909(TEXT("/Script/DialogueBuilderEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
