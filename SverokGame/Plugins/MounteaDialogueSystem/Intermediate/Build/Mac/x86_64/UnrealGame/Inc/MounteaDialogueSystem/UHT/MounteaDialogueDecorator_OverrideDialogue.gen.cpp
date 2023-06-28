// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_OverrideDialogue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueDecorator_OverrideDialogue::execGetRowNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetRowNames();
		P_NATIVE_END;
	}
	void UMounteaDialogueDecorator_OverrideDialogue::StaticRegisterNativesUMounteaDialogueDecorator_OverrideDialogue()
	{
		UClass* Class = UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRowNames", &UMounteaDialogueDecorator_OverrideDialogue::execGetRowNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics
	{
		struct MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue, nullptr, "GetRowNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms), Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_OverrideDialogue);
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_NoRegister()
	{
		return UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames, "GetRowNames" }, // 557708567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support for selecting Dialogue Row data.\n */" },
		{ "DisplayName", "Override Dialogue Row Data" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support for selecting Dialogue Row data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "Override" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "Override" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "EditCondition", "DataTable!=nullptr" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, RowName), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex_MetaData[] = {
		{ "Category", "Override" },
		{ "ClampMin", "0" },
		{ "EditCondition", "DataTable!=nullptr" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, RowIndex), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_OverrideDialogue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::ClassParams = {
		&UMounteaDialogueDecorator_OverrideDialogue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_OverrideDialogue>()
	{
		return UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_OverrideDialogue);
	UMounteaDialogueDecorator_OverrideDialogue::~UMounteaDialogueDecorator_OverrideDialogue() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue, UMounteaDialogueDecorator_OverrideDialogue::StaticClass, TEXT("UMounteaDialogueDecorator_OverrideDialogue"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_OverrideDialogue), 88650782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_2592104764(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
