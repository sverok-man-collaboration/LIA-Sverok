// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/CommentNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentNodeDB() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UCommentNodeDB();
	DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UCommentNodeDB_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References
	void UCommentNodeDB::StaticRegisterNativesUCommentNodeDB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommentNodeDB);
	UClass* Z_Construct_UClass_UCommentNodeDB_NoRegister()
	{
		return UCommentNodeDB::StaticClass();
	}
	struct Z_Construct_UClass_UCommentNodeDB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommentText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommentDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommentNodeDB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommentNodeDB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/CommentNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/CommentNodeDB.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentText_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "//~ End UEdGraphNode Interface\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/CommentNodeDB.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentText = { "CommentText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommentNodeDB, CommentText), METADATA_PARAMS(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Comment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the text in the comment box */" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/CommentNodeDB.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommentNodeDB, FontSize), METADATA_PARAMS(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentColor_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "/** Color to style comment with */" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/CommentNodeDB.h" },
		{ "ToolTip", "Color to style comment with" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommentNodeDB, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentDepth_MetaData[] = {
		{ "Comment", "/** comment Depth */" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/CommentNodeDB.h" },
		{ "ToolTip", "comment Depth" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentDepth = { "CommentDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommentNodeDB, CommentDepth), METADATA_PARAMS(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommentNodeDB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommentNodeDB_Statics::NewProp_CommentDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommentNodeDB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommentNodeDB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommentNodeDB_Statics::ClassParams = {
		&UCommentNodeDB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommentNodeDB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommentNodeDB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommentNodeDB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommentNodeDB()
	{
		if (!Z_Registration_Info_UClass_UCommentNodeDB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommentNodeDB.OuterSingleton, Z_Construct_UClass_UCommentNodeDB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommentNodeDB.OuterSingleton;
	}
	template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UCommentNodeDB>()
	{
		return UCommentNodeDB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommentNodeDB);
	UCommentNodeDB::~UCommentNodeDB() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_CommentNodeDB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_CommentNodeDB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommentNodeDB, UCommentNodeDB::StaticClass, TEXT("UCommentNodeDB"), &Z_Registration_Info_UClass_UCommentNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommentNodeDB), 2460366503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_CommentNodeDB_h_2620193980(TEXT("/Script/DialogueBuilderEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_CommentNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_CommentNodeDB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
