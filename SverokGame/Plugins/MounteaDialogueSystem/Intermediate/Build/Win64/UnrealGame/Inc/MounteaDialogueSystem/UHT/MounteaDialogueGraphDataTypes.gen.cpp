// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "SlateCore/Public/Fonts/SlateFontInfo.h"
#include "SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphDataTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EInputMode();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueManagerState;
	static UEnum* EDialogueManagerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueManagerState"));
		}
		return Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerState>()
	{
		return EDialogueManagerState_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enumerators[] = {
		{ "EDialogueManagerState::EDMS_Disabled", (int64)EDialogueManagerState::EDMS_Disabled },
		{ "EDialogueManagerState::EDMS_Enabled", (int64)EDialogueManagerState::EDMS_Enabled },
		{ "EDialogueManagerState::EDMS_Active", (int64)EDialogueManagerState::EDMS_Active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dialogue Manager State\n * \n * Define state of Dialogue Manager.\n */" },
		{ "EDMS_Active.DisplayName", "Active" },
		{ "EDMS_Active.Name", "EDialogueManagerState::EDMS_Active" },
		{ "EDMS_Active.Tooltip", "Active. Is in Diaologue." },
		{ "EDMS_Disabled.DisplayName", "Disabled" },
		{ "EDMS_Disabled.Name", "EDialogueManagerState::EDMS_Disabled" },
		{ "EDMS_Disabled.Tooltip", "Disabled. Dialogue cannot start." },
		{ "EDMS_Enabled.DisplayName", "Enabled" },
		{ "EDMS_Enabled.Name", "EDialogueManagerState::EDMS_Enabled" },
		{ "EDMS_Enabled.Tooltip", "Enabled. Dialogue can start." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Dialogue Manager State\n\nDefine state of Dialogue Manager." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		"EDialogueManagerState",
		"EDialogueManagerState",
		Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState()
	{
		if (!Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueParticipantState;
	static UEnum* EDialogueParticipantState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueParticipantState"));
		}
		return Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueParticipantState>()
	{
		return EDialogueParticipantState_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enumerators[] = {
		{ "EDialogueParticipantState::EDPS_Disabled", (int64)EDialogueParticipantState::EDPS_Disabled },
		{ "EDialogueParticipantState::EDPS_Enabled", (int64)EDialogueParticipantState::EDPS_Enabled },
		{ "EDialogueParticipantState::EDPS_Active", (int64)EDialogueParticipantState::EDPS_Active },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dialogue Participant State\n * \n * Define state of Dialogue Participant. \n */" },
		{ "EDPS_Active.DisplayName", "Active" },
		{ "EDPS_Active.Name", "EDialogueParticipantState::EDPS_Active" },
		{ "EDPS_Active.Tooltip", "Active. Is in Diaologue." },
		{ "EDPS_Disabled.DisplayName", "Disabled" },
		{ "EDPS_Disabled.Name", "EDialogueParticipantState::EDPS_Disabled" },
		{ "EDPS_Disabled.Tooltip", "Disabled. Dialogue cannot start." },
		{ "EDPS_Enabled.DisplayName", "Enabled" },
		{ "EDPS_Enabled.Name", "EDialogueParticipantState::EDPS_Enabled" },
		{ "EDPS_Enabled.Tooltip", "Enabled. Dialogue can start." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Dialogue Participant State\n\nDefine state of Dialogue Participant." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		"EDialogueParticipantState",
		"EDialogueParticipantState",
		Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState()
	{
		if (!Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERowDurationMode;
	static UEnum* ERowDurationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("ERowDurationMode"));
		}
		return Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowDurationMode>()
	{
		return ERowDurationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enumerators[] = {
		{ "ERowDurationMode::ERDM_Duration", (int64)ERowDurationMode::ERDM_Duration },
		{ "ERowDurationMode::EDRM_Override", (int64)ERowDurationMode::EDRM_Override },
		{ "ERowDurationMode::EDRM_Add", (int64)ERowDurationMode::EDRM_Add },
		{ "ERowDurationMode::ERDM_AutoCalculate", (int64)ERowDurationMode::ERDM_AutoCalculate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Row Duration Mode\n * \n * Used for calculation of the Row Duration.\n */" },
		{ "EDRM_Add.DisplayName", "Add Time" },
		{ "EDRM_Add.Name", "ERowDurationMode::EDRM_Add" },
		{ "EDRM_Add.Tooltip", "Adds 'Duration Override' value to 'Duration'." },
		{ "EDRM_Override.DisplayName", "Override" },
		{ "EDRM_Override.Name", "ERowDurationMode::EDRM_Override" },
		{ "EDRM_Override.Tooltip", "Uses 'Duration Override' value." },
		{ "ERDM_AutoCalculate.DisplayName", "Calculate" },
		{ "ERDM_AutoCalculate.Name", "ERowDurationMode::ERDM_AutoCalculate" },
		{ "ERDM_AutoCalculate.Tooltip", "Calculates Duration automatically. Base value is: 100 characters per 8 seconds." },
		{ "ERDM_Duration.DisplayName", "Duration" },
		{ "ERDM_Duration.Name", "ERowDurationMode::ERDM_Duration" },
		{ "ERDM_Duration.Tooltip", "Uses either duration of 'Row Sound' or value from 'Duration'." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row Duration Mode\n\nUsed for calculation of the Row Duration." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		"ERowDurationMode",
		"ERowDurationMode",
		Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode()
	{
		if (!Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMode;
	static UEnum* EInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EInputMode, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EInputMode"));
		}
		return Z_Registration_Info_UEnum_EInputMode.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EInputMode>()
	{
		return EInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enumerators[] = {
		{ "EInputMode::EIM_UIOnly", (int64)EInputMode::EIM_UIOnly },
		{ "EInputMode::EIM_UIAndGame", (int64)EInputMode::EIM_UIAndGame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input Mode type.\n * When Dialogue starts, this value defines what effect it has on Player.\n * Player can be stopped and forced to dialogue 'cinematic' or not affected at all.\n */" },
		{ "EIM_UIAndGame.DisplayName", "UI & Game" },
		{ "EIM_UIAndGame.Name", "EInputMode::EIM_UIAndGame" },
		{ "EIM_UIOnly.DisplayName", "UI Only" },
		{ "EIM_UIOnly.Name", "EInputMode::EIM_UIOnly" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Input Mode type.\nWhen Dialogue starts, this value defines what effect it has on Player.\nPlayer can be stopped and forced to dialogue 'cinematic' or not affected at all." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		"EInputMode",
		"EInputMode",
		Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EInputMode()
	{
		if (!Z_Registration_Info_UEnum_EInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMode.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubtitlesSettings;
class UScriptStruct* FSubtitlesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitlesSettings, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("SubtitlesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FSubtitlesSettings>()
{
	return FSubtitlesSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubtitlesSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesFont_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper structure exposing Widget text settings to set them globally in Dialogue Settings.\n */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Helper structure exposing Widget text settings to set them globally in Dialogue Settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitlesSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Slate Color Settings.\n\x09 * Defines color of the Font for UI.\n\x09 * Default:\n\x09 * * Color: White\n\x09 */" },
		{ "DisplayName", "Color and Oppacity" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Slate Color Settings.\nDefines color of the Font for UI.\nDefault:\n* Color: White" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor = { "FontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubtitlesSettings, FontColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Slate Font Info settings.\n\x09 * Should be filled by default with:\n\x09 * * Font: Roboot\n\x09 * * Size 16\n\x09 * * Typeface: 'Regular'\n\x09 * * Outline: 1\n\x09 */" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Slate Font Info settings.\nShould be filled by default with:\n* Font: Roboot\n* Size 16\n* Typeface: 'Regular'\n* Outline: 1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont = { "SubtitlesFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubtitlesSettings, SubtitlesFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Shadow Offset Settings.\n\x09 * Defines shadow offset on X and Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Shadow Offset Settings.\nDefines shadow offset on X and Y axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubtitlesSettings, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Shadow Color Settings.\n\x09 * Default:\n\x09 * * Color: Black\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Shadow Color Settings.\nDefault:\n* Color: Black" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubtitlesSettings, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Settings GUID.\n\x09 * Defines whether settings are valid or not.\n\x09 * Invalid settings are:\n\x09 * * With no Font\n\x09 * \n\x09 * Invalid settings are ignored!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Settings GUID.\nDefines whether settings are valid or not.\nInvalid settings are:\n* With no Font\n\nInvalid settings are ignored!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID = { "SettingsGUID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubtitlesSettings, SettingsGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		&NewStructOps,
		"SubtitlesSettings",
		sizeof(FSubtitlesSettings),
		alignof(FSubtitlesSettings),
		Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueRowData;
class UScriptStruct* FDialogueRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueRowData, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueRowData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueRowData>()
{
	return FDialogueRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RowText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RowSound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RowDurationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowDurationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RowDurationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RowDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowDurationOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RowDurationOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dialogue Row Data\n * \n * Structure which contains Dialogue Row data, which will be displayed in UI and/or played.\n */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Dialogue Row Data\n\nStructure which contains Dialogue Row data, which will be displayed in UI and/or played." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row Text.\n\x09 * \n\x09 * \xe2\x9d\x97 Required value\n\x09 * \xe2\x9d\x94 Localizable \n\x09 * Row Text contains data Players will see in the UI.\n\x09 * \n\x09 * \xe2\x9d\x97 This Text should not be displayed as option to be selected, for that use 'DialogueRow.RowTitle' value\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Row Text.\n\n\xe2\x9d\x97 Required value\n\xe2\x9d\x94 Localizable\nRow Text contains data Players will see in the UI.\n\n\xe2\x9d\x97 This Text should not be displayed as option to be selected, for that use 'DialogueRow.RowTitle' value" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText = { "RowText", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row Sound.\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Sound to be triggered once this Row Data has been displayed in UI.\n\x09 * \n\x09 * \xe2\x9d\x97 Is not directly used in any C++ code\n\x09 * \xe2\x9d\x94 Could be used with 'DP_PlayDialogueSound' or as Sound Value for any better way of handling synced animations and sounds (to get more info how to do that, join the Support Discord)\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row Sound.\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Sound to be triggered once this Row Data has been displayed in UI.\n\n\xe2\x9d\x97 Is not directly used in any C++ code\n\xe2\x9d\x94 Could be used with 'DP_PlayDialogueSound' or as Sound Value for any better way of handling synced animations and sounds (to get more info how to do that, join the Support Discord)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound = { "RowSound", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row Duration Mode\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Determines how the 'Row Duration' is calculated.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row Duration Mode\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Determines how the 'Row Duration' is calculated." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode = { "RowDurationMode", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowDurationMode), Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_MetaData)) }; // 3429678037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * Row Duration\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Determines for how long the UI will display this Row Data.\n\x09 */" },
		{ "EditCondition", "RowSound==nullptr" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row Duration\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Determines for how long the UI will display this Row Data." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration = { "RowDuration", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row Duration Override\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value\n\x09 * \xe2\x9d\x94 Determines how much time is added to the Row Duration if any.\n\x09 * \n\x09 * \xe2\x9d\x97 No validation applied here, so using value of -4684 will result in weird behaviour.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row Duration Override\n\n\xe2\x9d\x97 Optional value\n\xe2\x9d\x94 Determines how much time is added to the Row Duration if any.\n\n\xe2\x9d\x97 No validation applied here, so using value of -4684 will result in weird behaviour." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride = { "RowDurationOverride", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowDurationOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row GUID.\n\x09 * \n\x09 * Unique Key when searching and binding this Row.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Row GUID.\n\nUnique Key when searching and binding this Row." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID = { "RowGUID", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRowData, RowGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		&NewStructOps,
		"DialogueRowData",
		sizeof(FDialogueRowData),
		alignof(FDialogueRowData),
		Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialogueRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueRow;
class UScriptStruct* FDialogueRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueRow, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueRow"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueRow>()
{
	return FDialogueRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompatibleTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowOptionalIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RowOptionalIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueParticipant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RowTitle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueRowData_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowData_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DialogueRowData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowAdditionalData_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueRowAdditionalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleSettingsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TitleSettingsOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dialogue Row\n * \n * Data Table compatible Dialogue Row.\n * Contains name of Participant and Row Data.\n */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Dialogue Row\n\nData Table compatible Dialogue Row.\nContains name of Participant and Row Data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * List of GameplayTags which distinguish participants. \n\x09 * \n\x09 * \xe2\x9d\x97 Optional value in version 1.0.1.X.\n\x09 * \xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "List of GameplayTags which distinguish participants.\n\n\xe2\x9d\x97 Optional value in version 1.0.1.X.\n\xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags = { "CompatibleTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, CompatibleTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Optional Row type ID.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * \xe2\x9d\x94 Could be used to visually differentiate rows which are using same UI Class.\n\x09 * Example: Quest dialogue options are yellow or bold, while optional dialogue options are white or regular.\n\x09 * \n\x09 * Range:\n\x09 * * Min: 0\n\x09 * * Max: 255\n\x09 */" },
		{ "DisplayName", "Row Type ID" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Optional Row type ID.\n\n\xe2\x9d\x97 Optional value.\n\xe2\x9d\x94 Could be used to visually differentiate rows which are using same UI Class.\nExample: Quest dialogue options are yellow or bold, while optional dialogue options are white or regular.\n\nRange:\n* Min: 0\n* Max: 255" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, UIRowID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Optional Row Icon.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * \xe2\x9d\x94 Could be used to mark special dialogue options, like \"Open Store\" or \"Leave conversation\" with special icon.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Optional Row Icon.\n\n\xe2\x9d\x97 Optional value.\n\xe2\x9d\x94 Could be used to mark special dialogue options, like \"Open Store\" or \"Leave conversation\" with special icon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon = { "RowOptionalIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, RowOptionalIcon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Name of the Dialogue Participant.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * If left empty, Dialogue will ignore it and use its default Participant name.\n\x09 * \xe2\x9d\x94 Each row might have different participant tied to it, so there can be three-way dialogues, where one player talks to 2 NPCs\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Name of the Dialogue Participant.\n\n\xe2\x9d\x97 Optional value.\nIf left empty, Dialogue will ignore it and use its default Participant name.\n\xe2\x9d\x94 Each row might have different participant tied to it, so there can be three-way dialogues, where one player talks to 2 NPCs" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, DialogueParticipant), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Title of the Dialogue Row.\n\x09 * \n\x09 * \xe2\x9d\x94 This should summarize what is this row about, let's say \"Accept offering\" is a title for \"Thank you very much, kind sir, it would be pleasure to join you on your adventure!\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Title of the Dialogue Row.\n\n\xe2\x9d\x94 This should summarize what is this row about, let's say \"Accept offering\" is a title for \"Thank you very much, kind sir, it would be pleasure to join you on your adventure!\"." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle = { "RowTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, RowTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_ElementProp = { "DialogueRowData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(nullptr, 0) }; // 928667032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * List of Dialogue Row Data.\n\x09 * \n\x09 * \xe2\x9d\x94 Each Dialogue Row can contain multiple of those, where each Data Row represents:\n\x09 * * What Sound should be played\n\x09 * * What text should be displayed\n\x09 * \n\x09 * This provides easy way to have multiple dialogue lines per single Node.\n\x09 * As example, Player asks NPC what happened to its family. And each sentence could be its own Dialogue Row Data input.\n\x09 * This makes UI easier to read and sounds more managable.\n\x09 * \n\x09 * Each Data Row has its Duration, which could be based on the Sound, directly set, calculated on generic formula or added atop of the sound duration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "TitleProperty", "RowText" },
		{ "ToolTip", "List of Dialogue Row Data.\n\n\xe2\x9d\x94 Each Dialogue Row can contain multiple of those, where each Data Row represents:\n* What Sound should be played\n* What text should be displayed\n\nThis provides easy way to have multiple dialogue lines per single Node.\nAs example, Player asks NPC what happened to its family. And each sentence could be its own Dialogue Row Data input.\nThis makes UI easier to read and sounds more managable.\n\nEach Data Row has its Duration, which could be based on the Sound, directly set, calculated on generic formula or added atop of the sound duration." },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FDialogueRowData>::Value, "The structure 'FDialogueRowData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData = { "DialogueRowData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, DialogueRowData), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_MetaData)) }; // 928667032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Additional Row Data\n\x09 * \n\x09 * Generic Data Asset reference which could hold some more data.\n\x09 * This data could be used for Decorators or UI in general.\n\x09 * Any Data Asset can be used here and no logic is tied to this attribute.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "Additional Row Data\n\nGeneric Data Asset reference which could hold some more data.\nThis data could be used for Decorators or UI in general.\nAny Data Asset can be used here and no logic is tied to this attribute." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData = { "DialogueRowAdditionalData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, DialogueRowAdditionalData), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueAdditionalData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Row GUID.\n\x09 * \n\x09 * Unique Key when searching and binding this Row.\n\x09 */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoElementDuplicate", "" },
		{ "NoExport", "" },
		{ "ToolTip", "Row GUID.\n\nUnique Key when searching and binding this Row." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID = { "RowGUID", nullptr, (EPropertyFlags)0x0010040000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, RowGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * \xe2\x9d\x97 WIP\n\x09 * Title Settings Override.\n\x09 * \n\x09 * \xe2\x9d\x94 Provides ability to override this Row Title using direct settings rather than 'UIRowID'.\n\x09 * \xe2\x9d\x97 No logic is implemented yet\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "ToolTip", "\xe2\x9d\x97 WIP\nTitle Settings Override.\n\n\xe2\x9d\x94 Provides ability to override this Row Title using direct settings rather than 'UIRowID'.\n\xe2\x9d\x97 No logic is implemented yet" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride = { "TitleSettingsOverride", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueRow, TitleSettingsOverride), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride_MetaData)) }; // 1601263800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogueRow",
		sizeof(FDialogueRow),
		alignof(FDialogueRow),
		Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton, Z_Construct_UScriptStruct_FDialogueRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIRowID;
class UScriptStruct* FUIRowID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIRowID, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("UIRowID"));
	}
	return Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FUIRowID>()
{
	return FUIRowID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIRowID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RowWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIRowID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIRowID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIRowID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoSpinbox", "TRUE" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIRowID, UIRowID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass = { "RowWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIRowID, RowWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIRowID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		&NewStructOps,
		"UIRowID",
		sizeof(FUIRowID),
		alignof(FUIRowID),
		Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIRowID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIRowID()
	{
		if (!Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton, Z_Construct_UScriptStruct_FUIRowID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::EnumInfo[] = {
		{ EDialogueManagerState_StaticEnum, TEXT("EDialogueManagerState"), &Z_Registration_Info_UEnum_EDialogueManagerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2269609251U) },
		{ EDialogueParticipantState_StaticEnum, TEXT("EDialogueParticipantState"), &Z_Registration_Info_UEnum_EDialogueParticipantState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 693011791U) },
		{ ERowDurationMode_StaticEnum, TEXT("ERowDurationMode"), &Z_Registration_Info_UEnum_ERowDurationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3429678037U) },
		{ EInputMode_StaticEnum, TEXT("EInputMode"), &Z_Registration_Info_UEnum_EInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2473644682U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FSubtitlesSettings::StaticStruct, Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewStructOps, TEXT("SubtitlesSettings"), &Z_Registration_Info_UScriptStruct_SubtitlesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubtitlesSettings), 1601263800U) },
		{ FDialogueRowData::StaticStruct, Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewStructOps, TEXT("DialogueRowData"), &Z_Registration_Info_UScriptStruct_DialogueRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueRowData), 928667032U) },
		{ FDialogueRow::StaticStruct, Z_Construct_UScriptStruct_FDialogueRow_Statics::NewStructOps, TEXT("DialogueRow"), &Z_Registration_Info_UScriptStruct_DialogueRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueRow), 1576585352U) },
		{ FUIRowID::StaticStruct, Z_Construct_UScriptStruct_FUIRowID_Statics::NewStructOps, TEXT("UIRowID"), &Z_Registration_Info_UScriptStruct_UIRowID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIRowID), 566581763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_1430625986(TEXT("/Script/MounteaDialogueSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
