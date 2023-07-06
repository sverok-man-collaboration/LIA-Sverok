// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/DialogueAdditionalData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAdditionalData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	void UDialogueAdditionalData::StaticRegisterNativesUDialogueAdditionalData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAdditionalData);
	UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister()
	{
		return UDialogueAdditionalData::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAdditionalData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAdditionalData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAdditionalData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Predefined list of Additional Data for Mountea Dialogue Rows.\n * Provides easy to use way to enhance Dialogues with extra details, like Animation to play etc.\n */" },
		{ "IncludePath", "Data/DialogueAdditionalData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/DialogueAdditionalData.h" },
		{ "ToolTip", "Predefined list of Additional Data for Mountea Dialogue Rows.\nProvides easy to use way to enhance Dialogues with extra details, like Animation to play etc." },
		{ "UsesHierarchy", "TRUE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAdditionalData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAdditionalData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAdditionalData_Statics::ClassParams = {
		&UDialogueAdditionalData::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAdditionalData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAdditionalData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAdditionalData()
	{
		if (!Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton, Z_Construct_UClass_UDialogueAdditionalData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UDialogueAdditionalData>()
	{
		return UDialogueAdditionalData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAdditionalData);
	UDialogueAdditionalData::~UDialogueAdditionalData() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAdditionalData, UDialogueAdditionalData::StaticClass, TEXT("UDialogueAdditionalData"), &Z_Registration_Info_UClass_UDialogueAdditionalData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAdditionalData), 154485876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_1125790421(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
