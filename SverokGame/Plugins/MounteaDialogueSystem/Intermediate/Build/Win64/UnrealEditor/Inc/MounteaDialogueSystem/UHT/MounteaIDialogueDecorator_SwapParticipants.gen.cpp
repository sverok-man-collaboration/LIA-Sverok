// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaIDialogueDecorator_SwapParticipants() {}
// Cross Module References
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	void UMounteaDialogueDecorator_SwapParticipants::StaticRegisterNativesUMounteaDialogueDecorator_SwapParticipants()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_SwapParticipants);
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_NoRegister()
	{
		return UMounteaDialogueDecorator_SwapParticipants::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support swap Dialogue Participants, like switching whether the Player or NPC is the Active one.\n */" },
		{ "DisplayName", "Swap Participants" },
		{ "IncludePath", "Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support swap Dialogue Participants, like switching whether the Player or NPC is the Active one." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_SwapParticipants>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::ClassParams = {
		&UMounteaDialogueDecorator_SwapParticipants::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_SwapParticipants>()
	{
		return UMounteaDialogueDecorator_SwapParticipants::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_SwapParticipants);
	UMounteaDialogueDecorator_SwapParticipants::~UMounteaDialogueDecorator_SwapParticipants() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants, UMounteaDialogueDecorator_SwapParticipants::StaticClass, TEXT("UMounteaDialogueDecorator_SwapParticipants"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_SwapParticipants), 1709805082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_1046189690(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
