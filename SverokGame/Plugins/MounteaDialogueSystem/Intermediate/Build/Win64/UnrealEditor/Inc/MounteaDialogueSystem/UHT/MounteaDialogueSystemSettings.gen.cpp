// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueSystemSettings.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EInputMode();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execSetSubtitlesSettings)
	{
		P_GET_STRUCT_REF(FSubtitlesSettings,Z_Param_Out_NewSettings);
		P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_RowID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesSettings(Z_Param_Out_NewSettings,Z_Param_Out_RowID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetSubtitlesSettings)
	{
		P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_RowID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubtitlesSettings*)Z_Param__Result=P_THIS->GetSubtitlesSettings(Z_Param_Out_RowID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetSkipFadeDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSkipFadeDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetWidgetUpdateFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidgetUpdateFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execSubtitlesAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SubtitlesAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDialogueInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputMode*)Z_Param__Result=P_THIS->GetDialogueInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDefaultDialogueWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=P_THIS->GetDefaultDialogueWidget();
		P_NATIVE_END;
	}
	void UMounteaDialogueSystemSettings::StaticRegisterNativesUMounteaDialogueSystemSettings()
	{
		UClass* Class = UMounteaDialogueSystemSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultDialogueWidget", &UMounteaDialogueSystemSettings::execGetDefaultDialogueWidget },
			{ "GetDialogueInputMode", &UMounteaDialogueSystemSettings::execGetDialogueInputMode },
			{ "GetSkipFadeDuration", &UMounteaDialogueSystemSettings::execGetSkipFadeDuration },
			{ "GetSubtitlesSettings", &UMounteaDialogueSystemSettings::execGetSubtitlesSettings },
			{ "GetWidgetUpdateFrequency", &UMounteaDialogueSystemSettings::execGetWidgetUpdateFrequency },
			{ "SetSubtitlesSettings", &UMounteaDialogueSystemSettings::execSetSubtitlesSettings },
			{ "SubtitlesAllowed", &UMounteaDialogueSystemSettings::execSubtitlesAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics
	{
		struct MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms
		{
			TSoftClassPtr<UUserWidget>  ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Default Dialogue Widget if any is defined.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Returns Default Dialogue Widget if any is defined.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDefaultDialogueWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics
	{
		struct MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms
		{
			EInputMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EInputMode, METADATA_PARAMS(nullptr, 0) }; // 2473644682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDialogueInputMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics
	{
		struct MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "CompactNodeTitle", "SkipFadeDuration" },
		{ "Keywords", "skip, fade, easy, smooth" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetSkipFadeDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics
	{
		struct MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms
		{
			FUIRowID RowID;
			FSubtitlesSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID = { "RowID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms, RowID), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID_MetaData)) }; // 566581763
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(nullptr, 0) }; // 1601263800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Subtitles Settings.\n\x09 * If given 'RowID' then it will search for Subtitles Settings override for this class, if any is specified.\n\x09 * \n\x09 * If 'SubtitlesSettingsOverrides' are specified but invalid, 'SubtitlesSettings' are returned instead like no optional filters were provided.\n\x09 * \n\x09 * @param RowID\x09Optional Class and Row ID of UserWidget to filter out the override Settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Returns Subtitles Settings.\nIf given 'RowID' then it will search for Subtitles Settings override for this class, if any is specified.\n\nIf 'SubtitlesSettingsOverrides' are specified but invalid, 'SubtitlesSettings' are returned instead like no optional filters were provided.\n\n@param RowID Optional Class and Row ID of UserWidget to filter out the override Settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetSubtitlesSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics
	{
		struct MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Widget Update Frequency in seconds.\n\x09 */" },
		{ "CompactNodeTitle", "Update Frequency" },
		{ "Keywords", "update, refresh, tick, frequency" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Returns Widget Update Frequency in seconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetWidgetUpdateFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics
	{
		struct MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms
		{
			FSubtitlesSettings NewSettings;
			FUIRowID RowID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms, NewSettings), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings_MetaData)) }; // 1601263800
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_RowID = { "RowID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms, RowID), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(nullptr, 0) }; // 566581763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_RowID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "SetSubtitlesSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics
	{
		struct MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms
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
	void Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether Subtitles are allowed or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Returns whether Subtitles are allowed or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "SubtitlesAllowed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms), Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemSettings);
	UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister()
	{
		return UMounteaDialogueSystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultDialogueWidgetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipFadeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipFadeDuration;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueWidgetCommands_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetCommands_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DialogueWidgetCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubtitles_MetaData[];
#endif
		static void NewProp_bAllowSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettingsOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubtitlesSettingsOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget, "GetDefaultDialogueWidget" }, // 1817371281
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode, "GetDialogueInputMode" }, // 2706081708
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration, "GetSkipFadeDuration" }, // 229924395
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings, "GetSubtitlesSettings" }, // 2084678100
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency, "GetWidgetUpdateFrequency" }, // 684505292
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings, "SetSubtitlesSettings" }, // 3732014844
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed, "SubtitlesAllowed" }, // 2339860780
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mountea Dialogue System Runtime Settigns.\n * \n * Holds a list of settings that are used to further improve and tweak Dialogues.\n */" },
		{ "IncludePath", "Helpers/MounteaDialogueSystemSettings.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Mountea Dialogue System Runtime Settigns.\n\nHolds a list of settings that are used to further improve and tweak Dialogues." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DefaultDialogueWidgetClass_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * User Widget class to be set as default one if requested.\n\x09 * \xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\xe2\x9d\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
		{ "ToolTip", "User Widget class to be set as default one if requested.\n\xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DefaultDialogueWidgetClass = { "DefaultDialogueWidgetClass", nullptr, (EPropertyFlags)0x0024080000014001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, DefaultDialogueWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DefaultDialogueWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DefaultDialogueWidgetClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Sets Input mode when in Dialogue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Sets Input mode when in Dialogue." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, InputMode), Z_Construct_UEnum_MounteaDialogueSystem_EInputMode, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode_MetaData)) }; // 2473644682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/**\n\x09 * Defines how often Dialogue Widgets update per second.\n\x09 * Effectively can replaces Tick.\n\x09 * \xe2\x9d\x94 Units: seconds\n\x09 * \xe2\x9d\x97Lower the value higher the performance impact\xe2\x9d\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Defines how often Dialogue Widgets update per second.\nEffectively can replaces Tick.\n\xe2\x9d\x94 Units: seconds\n\xe2\x9d\x97Lower the value higher the performance impact\xe2\x9d\x97" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
		{ "Units", "seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, UpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_UpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_UpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SkipFadeDuration_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/**\n\x09 * Defines fading duration to naturally stop voice when anything is playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Defines fading duration to naturally stop voice when anything is playing." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
		{ "Units", "seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SkipFadeDuration = { "SkipFadeDuration", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, SkipFadeDuration), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SkipFadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SkipFadeDuration_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_ElementProp = { "DialogueWidgetCommands", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * List of Dialogue commands.\n\x09 * Dialogue Commands are used to provide information what action should happen.\n\x09 * \xe2\x9d\x94 Some values are hardcoded and cannot be deleted, thos are used for C++ requests\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "List of Dialogue commands.\nDialogue Commands are used to provide information what action should happen.\n\xe2\x9d\x94 Some values are hardcoded and cannot be deleted, thos are used for C++ requests" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands = { "DialogueWidgetCommands", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, DialogueWidgetCommands), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Whether subtitles are allowed or not.\n\x09 * If subtitles are not allowed, C++ requests won't request showing subtitles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Whether subtitles are allowed or not.\nIf subtitles are not allowed, C++ requests won't request showing subtitles." },
	};
#endif
	void Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles_SetBit(void* Obj)
	{
		((UMounteaDialogueSystemSettings*)Obj)->bAllowSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles = { "bAllowSubtitles", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMounteaDialogueSystemSettings), &Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * List of General Dialogue Settings.\n\x09 * Defines font, sizes etc. for all subtitles.\n\x09 * If any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "List of General Dialogue Settings.\nDefines font, sizes etc. for all subtitles.\nIf any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings = { "SubtitlesSettings", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, SubtitlesSettings), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings_MetaData)) }; // 1601263800
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(nullptr, 0) }; // 1601263800
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp = { "SubtitlesSettingsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(nullptr, 0) }; // 566581763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "Comment", "/**\n\x09 * Map of Widget Classes and their Subtitles Settings.\n\x09 * Used for overriding General Defaults.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemSettings.h" },
		{ "ToolTip", "Map of Widget Classes and their Subtitles Settings.\nUsed for overriding General Defaults." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueSystemSettings, SubtitlesSettingsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_MetaData)) }; // 566581763 1601263800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DefaultDialogueWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_UpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SkipFadeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_bAllowSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::ClassParams = {
		&UMounteaDialogueSystemSettings::StaticClass,
		"MounteaSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSystemSettings>()
	{
		return UMounteaDialogueSystemSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemSettings);
	UMounteaDialogueSystemSettings::~UMounteaDialogueSystemSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemSettings, UMounteaDialogueSystemSettings::StaticClass, TEXT("UMounteaDialogueSystemSettings"), &Z_Registration_Info_UClass_UMounteaDialogueSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemSettings), 1895597646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemSettings_h_1976682233(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_andreas_hansen_Documents_GitHub_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
