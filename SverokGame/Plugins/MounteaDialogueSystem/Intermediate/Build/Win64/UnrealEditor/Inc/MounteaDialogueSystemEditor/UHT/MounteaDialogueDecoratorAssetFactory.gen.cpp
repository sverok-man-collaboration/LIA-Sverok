// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Factories/MounteaDialogueDecoratorAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecoratorAssetFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References
	void UMounteaDialogueDecoratorAssetFactory::StaticRegisterNativesUMounteaDialogueDecoratorAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecoratorAssetFactory);
	UClass* Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_NoRegister()
	{
		return UMounteaDialogueDecoratorAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factories/MounteaDialogueDecoratorAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueDecoratorAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueDecoratorAssetFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecoratorAssetFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecoratorAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::ClassParams = {
		&UMounteaDialogueDecoratorAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueDecoratorAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecoratorAssetFactory.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueDecoratorAssetFactory.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueDecoratorAssetFactory>()
	{
		return UMounteaDialogueDecoratorAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecoratorAssetFactory);
	UMounteaDialogueDecoratorAssetFactory::~UMounteaDialogueDecoratorAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDecoratorAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDecoratorAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecoratorAssetFactory, UMounteaDialogueDecoratorAssetFactory::StaticClass, TEXT("UMounteaDialogueDecoratorAssetFactory"), &Z_Registration_Info_UClass_UMounteaDialogueDecoratorAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecoratorAssetFactory), 1215411993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDecoratorAssetFactory_h_229668419(TEXT("/Script/MounteaDialogueSystemEditor"),
		Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDecoratorAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDecoratorAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
