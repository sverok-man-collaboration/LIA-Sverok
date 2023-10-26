// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Settings/MounteaDialogueGraphEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings();
	MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_NoRegister();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType();
	MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoLayoutStrategyType;
	static UEnum* EAutoLayoutStrategyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EAutoLayoutStrategyType"));
		}
		return Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EAutoLayoutStrategyType>()
	{
		return EAutoLayoutStrategyType_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enumerators[] = {
		{ "EAutoLayoutStrategyType::EALS_Tree", (int64)EAutoLayoutStrategyType::EALS_Tree },
		{ "EAutoLayoutStrategyType::EALS_ForceDirected", (int64)EAutoLayoutStrategyType::EALS_ForceDirected },
		{ "EAutoLayoutStrategyType::Default", (int64)EAutoLayoutStrategyType::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EAutoLayoutStrategyType::Default" },
		{ "EALS_ForceDirected.DisplayName", "Force Directed" },
		{ "EALS_ForceDirected.Name", "EAutoLayoutStrategyType::EALS_ForceDirected" },
		{ "EALS_Tree.DisplayName", "Tree" },
		{ "EALS_Tree.Name", "EAutoLayoutStrategyType::EALS_Tree" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"EAutoLayoutStrategyType",
		"EAutoLayoutStrategyType",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType()
	{
		if (!Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWiringStyle;
	static UEnum* EWiringStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EWiringStyle"));
		}
		return Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EWiringStyle>()
	{
		return EWiringStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enumerators[] = {
		{ "EWiringStyle::EWS_Vanilla", (int64)EWiringStyle::EWS_Vanilla },
		{ "EWiringStyle::EWS_Simple", (int64)EWiringStyle::EWS_Simple },
		{ "EWiringStyle::EWS_Complex", (int64)EWiringStyle::EWS_Complex },
		{ "EWiringStyle::Default", (int64)EWiringStyle::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EWiringStyle::Default" },
		{ "EWS_Complex.DisplayName", "45\xc2\xb0 Angle" },
		{ "EWS_Complex.Name", "EWiringStyle::EWS_Complex" },
		{ "EWS_Simple.DisplayName", "90\xc2\xb0 Angle" },
		{ "EWS_Simple.Name", "EWiringStyle::EWS_Simple" },
		{ "EWS_Vanilla.DisplayName", "Vanilla" },
		{ "EWS_Vanilla.Name", "EWiringStyle::EWS_Vanilla" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"EWiringStyle",
		"EWiringStyle",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle()
	{
		if (!Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBubbleDrawRule;
	static UEnum* EBubbleDrawRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EBubbleDrawRule"));
		}
		return Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EBubbleDrawRule>()
	{
		return EBubbleDrawRule_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enumerators[] = {
		{ "EBubbleDrawRule::EBDR_Always", (int64)EBubbleDrawRule::EBDR_Always },
		{ "EBubbleDrawRule::EBDR_OnSelected", (int64)EBubbleDrawRule::EBDR_OnSelected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBDR_Always.DisplayName", "Always" },
		{ "EBDR_Always.Name", "EBubbleDrawRule::EBDR_Always" },
		{ "EBDR_OnSelected.DisplayName", "When Selected" },
		{ "EBDR_OnSelected.Name", "EBubbleDrawRule::EBDR_OnSelected" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"EBubbleDrawRule",
		"EBubbleDrawRule",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule()
	{
		if (!Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeTheme;
	static UEnum* ENodeTheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("ENodeTheme"));
		}
		return Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeTheme>()
	{
		return ENodeTheme_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enumerators[] = {
		{ "ENodeTheme::ENT_DarkTheme", (int64)ENodeTheme::ENT_DarkTheme },
		{ "ENodeTheme::ENT_LightTheme", (int64)ENodeTheme::ENT_LightTheme },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENT_DarkTheme.DisplayName", "Dark Theme" },
		{ "ENT_DarkTheme.Name", "ENodeTheme::ENT_DarkTheme" },
		{ "ENT_LightTheme.DisplayName", "Light Theme" },
		{ "ENT_LightTheme.Name", "ENodeTheme::ENT_LightTheme" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"ENodeTheme",
		"ENodeTheme",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme()
	{
		if (!Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecoratorsInfoStyle;
	static UEnum* EDecoratorsInfoStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EDecoratorsInfoStyle"));
		}
		return Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EDecoratorsInfoStyle>()
	{
		return EDecoratorsInfoStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enumerators[] = {
		{ "EDecoratorsInfoStyle::EDSI_Stack", (int64)EDecoratorsInfoStyle::EDSI_Stack },
		{ "EDecoratorsInfoStyle::EDIS_Unified", (int64)EDecoratorsInfoStyle::EDIS_Unified },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDIS_Unified.DisplayName", "Unified" },
		{ "EDIS_Unified.Name", "EDecoratorsInfoStyle::EDIS_Unified" },
		{ "EDSI_Stack.DisplayName", "Stack" },
		{ "EDSI_Stack.Name", "EDecoratorsInfoStyle::EDSI_Stack" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"EDecoratorsInfoStyle",
		"EDecoratorsInfoStyle",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeType;
	static UEnum* ENodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("ENodeType"));
		}
		return Z_Registration_Info_UEnum_ENodeType.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeType>()
	{
		return ENodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enumerators[] = {
		{ "ENodeType::ENT_SoftCorners", (int64)ENodeType::ENT_SoftCorners },
		{ "ENodeType::ENT_HardCorners", (int64)ENodeType::ENT_HardCorners },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENT_HardCorners.DisplayName", "Hard Corners" },
		{ "ENT_HardCorners.Name", "ENodeType::ENT_HardCorners" },
		{ "ENT_SoftCorners.DisplayName", "Soft Corners" },
		{ "ENT_SoftCorners.Name", "ENodeType::ENT_SoftCorners" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"ENodeType",
		"ENodeType",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType()
	{
		if (!Z_Registration_Info_UEnum_ENodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArrowType;
	static UEnum* EArrowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArrowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArrowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType, Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EArrowType"));
		}
		return Z_Registration_Info_UEnum_EArrowType.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EArrowType>()
	{
		return EArrowType_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enumerators[] = {
		{ "EArrowType::ERT_SimpleArrow", (int64)EArrowType::ERT_SimpleArrow },
		{ "EArrowType::ERT_HollowArrow", (int64)EArrowType::ERT_HollowArrow },
		{ "EArrowType::ERT_FancyArrow", (int64)EArrowType::ERT_FancyArrow },
		{ "EArrowType::ERT_Bubble", (int64)EArrowType::ERT_Bubble },
		{ "EArrowType::ERT_None", (int64)EArrowType::ERT_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERT_Bubble.DisplayName", "Bubble" },
		{ "ERT_Bubble.Name", "EArrowType::ERT_Bubble" },
		{ "ERT_FancyArrow.DisplayName", "Fancy Arrow" },
		{ "ERT_FancyArrow.Name", "EArrowType::ERT_FancyArrow" },
		{ "ERT_HollowArrow.DisplayName", "Hollow Arrow" },
		{ "ERT_HollowArrow.Name", "EArrowType::ERT_HollowArrow" },
		{ "ERT_None.DisplayName", "Nothing" },
		{ "ERT_None.Name", "EArrowType::ERT_None" },
		{ "ERT_SimpleArrow.DisplayName", "Simple Arrow" },
		{ "ERT_SimpleArrow.Name", "EArrowType::ERT_SimpleArrow" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
		nullptr,
		"EArrowType",
		"EArrowType",
		Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType()
	{
		if (!Z_Registration_Info_UEnum_EArrowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArrowType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArrowType.InnerSingleton;
	}
	void UMounteaDialogueGraphEditorSettings::StaticRegisterNativesUMounteaDialogueGraphEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphEditorSettings);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_NoRegister()
	{
		return UMounteaDialogueGraphEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NodeTheme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTheme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeTheme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedInfo_NumDecorators_MetaData[];
#endif
		static void NewProp_bShowDetailedInfo_NumDecorators_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedInfo_NumDecorators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedInfo_InheritsDecorators_MetaData[];
#endif
		static void NewProp_bShowDetailedInfo_InheritsDecorators_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedInfo_InheritsDecorators;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DecoratorsInfoStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorsInfoStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DecoratorsInfoStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAutomaticNames_MetaData[];
#endif
		static void NewProp_bDisplayAutomaticNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAutomaticNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRenameNodes_MetaData[];
#endif
		static void NewProp_bAllowRenameNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRenameNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideNodeBackgroundColours_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverrideNodeBackgroundColours_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNodeBackgroundColours_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OverrideNodeBackgroundColours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNativeDecoratorsEdit_MetaData[];
#endif
		static void NewProp_bAllowNativeDecoratorsEdit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNativeDecoratorsEdit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WireWidth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ArrowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ArrowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimalDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLayoutStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLayoutStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLayoutStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIteration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFirstPassOnly_MetaData[];
#endif
		static void NewProp_bFirstPassOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstPassOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomInit_MetaData[];
#endif
		static void NewProp_bRandomInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mountea Dialogue System global settings.\n */" },
		{ "IncludePath", "Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ToolTip", "Mountea Dialogue System global settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, NodeType), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeType, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_MetaData)) }; // 3513779571
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme = { "NodeTheme", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, NodeTheme), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_MetaData)) }; // 4293540654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_MetaData[] = {
		{ "Category", "NodesSettings|DecoratorsInfo" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bShowDetailedInfo_NumDecorators = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators = { "bShowDetailedInfo_NumDecorators", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_MetaData[] = {
		{ "Category", "NodesSettings|DecoratorsInfo" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bShowDetailedInfo_InheritsDecorators = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators = { "bShowDetailedInfo_InheritsDecorators", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle = { "DecoratorsInfoStyle", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, DecoratorsInfoStyle), Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_MetaData)) }; // 1446476395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bDisplayAutomaticNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames = { "bDisplayAutomaticNames", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bAllowRenameNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes = { "bAllowRenameNodes", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_ValueProp = { "OverrideNodeBackgroundColours", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_Key_KeyProp = { "OverrideNodeBackgroundColours_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "Comment", "/**\n\x09 * Select a Node Class and specify Override Colour for this Node type.\n\x09 * Only non-abstract classes are allowed!\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ShowTreeView", "" },
		{ "ToolTip", "Select a Node Class and specify Override Colour for this Node type.\nOnly non-abstract classes are allowed!" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours = { "OverrideNodeBackgroundColours", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, OverrideNodeBackgroundColours), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "Comment", "// Enables 'Edit' button for Native Code Decorators\n" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ToolTip", "Enables 'Edit' button for Native Code Decorators" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bAllowNativeDecoratorsEdit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit = { "bAllowNativeDecoratorsEdit", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "ClampMax", "1.500000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "UIMax", "1.500000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth = { "WireWidth", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, WireWidth), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "Comment", "//, meta=(ConfigRestartRequired=true))\n" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ToolTip", ", meta=(ConfigRestartRequired=true))" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType = { "ArrowType", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, ArrowType), Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_MetaData)) }; // 3959697105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance = { "OptimalDistance", nullptr, (EPropertyFlags)0x0040000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, OptimalDistance), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy = { "AutoLayoutStrategy", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, AutoLayoutStrategy), Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_MetaData)) }; // 3239792369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration = { "MaxIteration", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, MaxIteration), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bFirstPassOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly = { "bFirstPassOnly", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit(void* Obj)
	{
		((UMounteaDialogueGraphEditorSettings*)Obj)->bRandomInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit = { "bRandomInit", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature = { "InitTemperature", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, InitTemperature), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate = { "CoolDownRate", nullptr, (EPropertyFlags)0x0040040000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, CoolDownRate), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::ClassParams = {
		&UMounteaDialogueGraphEditorSettings::StaticClass,
		"MounteaSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueGraphEditorSettings>()
	{
		return UMounteaDialogueGraphEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphEditorSettings);
	UMounteaDialogueGraphEditorSettings::~UMounteaDialogueGraphEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::EnumInfo[] = {
		{ EAutoLayoutStrategyType_StaticEnum, TEXT("EAutoLayoutStrategyType"), &Z_Registration_Info_UEnum_EAutoLayoutStrategyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3239792369U) },
		{ EWiringStyle_StaticEnum, TEXT("EWiringStyle"), &Z_Registration_Info_UEnum_EWiringStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1469225604U) },
		{ EBubbleDrawRule_StaticEnum, TEXT("EBubbleDrawRule"), &Z_Registration_Info_UEnum_EBubbleDrawRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2899246950U) },
		{ ENodeTheme_StaticEnum, TEXT("ENodeTheme"), &Z_Registration_Info_UEnum_ENodeTheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4293540654U) },
		{ EDecoratorsInfoStyle_StaticEnum, TEXT("EDecoratorsInfoStyle"), &Z_Registration_Info_UEnum_EDecoratorsInfoStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1446476395U) },
		{ ENodeType_StaticEnum, TEXT("ENodeType"), &Z_Registration_Info_UEnum_ENodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3513779571U) },
		{ EArrowType_StaticEnum, TEXT("EArrowType"), &Z_Registration_Info_UEnum_EArrowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3959697105U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphEditorSettings, UMounteaDialogueGraphEditorSettings::StaticClass, TEXT("UMounteaDialogueGraphEditorSettings"), &Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphEditorSettings), 402947094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_542341817(TEXT("/Script/MounteaDialogueSystemEditor"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
