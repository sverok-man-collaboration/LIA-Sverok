// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_OnlyFirstTime() {}
// Cross Module References
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueDecorator_OnlyFirstTime::execIsFirstTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstTime();
		P_NATIVE_END;
	}
	void UMounteaDialogueDecorator_OnlyFirstTime::StaticRegisterNativesUMounteaDialogueDecorator_OnlyFirstTime()
	{
		UClass* Class = UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFirstTime", &UMounteaDialogueDecorator_OnlyFirstTime::execIsFirstTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics
	{
		struct MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms), &Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "// Returns whether Owning Node has never been called before.\n" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
		{ "ToolTip", "Returns whether Owning Node has never been called before." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime, nullptr, "IsFirstTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms), Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_OnlyFirstTime);
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_NoRegister()
	{
		return UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime, "IsFirstTime" }, // 2132884456
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support for triggering logic if Owning node has been entered for the first time.\n * Base class that should expanded with Child Classes.\n *\n * Child Classes must implement logic!\n * Should do something only if its Owning Node has never been called before.\n *\n * Provides validations and data for Child classes.\n * By itself has no logic within.\n *\n * For proper usage, save Dialogue Participants when saving game!\n */" },
		{ "DisplayName", "Only First Time Base" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support for triggering logic if Owning node has been entered for the first time.\nBase class that should expanded with Child Classes.\n\nChild Classes must implement logic!\nShould do something only if its Owning Node has never been called before.\n\nProvides validations and data for Child classes.\nBy itself has no logic within.\n\nFor proper usage, save Dialogue Participants when saving game!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_OnlyFirstTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::ClassParams = {
		&UMounteaDialogueDecorator_OnlyFirstTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_OnlyFirstTime>()
	{
		return UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_OnlyFirstTime);
	UMounteaDialogueDecorator_OnlyFirstTime::~UMounteaDialogueDecorator_OnlyFirstTime() {}
	struct Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime, UMounteaDialogueDecorator_OnlyFirstTime::StaticClass, TEXT("UMounteaDialogueDecorator_OnlyFirstTime"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_OnlyFirstTime), 3405928109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_1088171426(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
