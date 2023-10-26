// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MounteaDialogueGraphDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphDataTypes_generated_h
#error "MounteaDialogueGraphDataTypes.generated.h already included, missing '#pragma once' in MounteaDialogueGraphDataTypes.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphDataTypes_generated_h

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubtitlesSettings_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FSubtitlesSettings>();

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueRowData_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueRowData>();

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_254_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueRow_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueRow>();

#define FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIRowID_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FUIRowID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h


#define FOREACH_ENUM_EDIALOGUEMANAGERSTATE(op) \
	op(EDialogueManagerState::EDMS_Disabled) \
	op(EDialogueManagerState::EDMS_Enabled) \
	op(EDialogueManagerState::EDMS_Active) 

enum class EDialogueManagerState : uint8;
template<> struct TIsUEnumClass<EDialogueManagerState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerState>();

#define FOREACH_ENUM_EDIALOGUEPARTICIPANTSTATE(op) \
	op(EDialogueParticipantState::EDPS_Disabled) \
	op(EDialogueParticipantState::EDPS_Enabled) \
	op(EDialogueParticipantState::EDPS_Active) 

enum class EDialogueParticipantState : uint8;
template<> struct TIsUEnumClass<EDialogueParticipantState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueParticipantState>();

#define FOREACH_ENUM_EROWDURATIONMODE(op) \
	op(ERowDurationMode::ERDM_Duration) \
	op(ERowDurationMode::EDRM_Override) \
	op(ERowDurationMode::EDRM_Add) \
	op(ERowDurationMode::ERDM_AutoCalculate) 

enum class ERowDurationMode : uint8;
template<> struct TIsUEnumClass<ERowDurationMode> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowDurationMode>();

#define FOREACH_ENUM_EINPUTMODE(op) \
	op(EInputMode::EIM_UIOnly) \
	op(EInputMode::EIM_UIAndGame) 

enum class EInputMode : uint8;
template<> struct TIsUEnumClass<EInputMode> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
