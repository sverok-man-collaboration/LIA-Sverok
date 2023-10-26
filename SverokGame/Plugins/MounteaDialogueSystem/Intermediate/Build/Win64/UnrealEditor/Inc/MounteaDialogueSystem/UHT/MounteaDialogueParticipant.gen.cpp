// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Components/MounteaDialogueParticipant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueParticipant() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipant();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipant_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetTraversedPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGuid,int32>*)Z_Param__Result=P_THIS->GetTraversedPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetAudioComponent)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_NewAudioComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioComponent(Z_Param_NewAudioComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetAudioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetAudioComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetDefaultParticipantState)
	{
		P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultParticipantState(EDialogueParticipantState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetDefaultParticipantState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueParticipantState*)Z_Param__Result=P_THIS->GetDefaultParticipantState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetParticipantState)
	{
		P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParticipantState(EDialogueParticipantState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetParticipantState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueParticipantState*)Z_Param__Result=P_THIS->GetParticipantState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetDialogueGraph)
	{
		P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_NewDialogueGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueGraph(Z_Param_NewDialogueGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetDialogueGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetDialogueGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execGetSavedStartingNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetSavedStartingNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execCanStartDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponentByTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponentByTag(Z_Param_Out_Arg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponentByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponentByName(Z_Param_Out_Arg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueParticipant::execInitializeParticipant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeParticipant_Implementation();
		P_NATIVE_END;
	}
	struct MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms
	{
		UMounteaDialogueGraph* NewDialogueGraph;
	};
	static FName NAME_UMounteaDialogueParticipant_InitializeParticipant = FName(TEXT("InitializeParticipant"));
	void UMounteaDialogueParticipant::InitializeParticipant()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueParticipant_InitializeParticipant),NULL);
	}
	static FName NAME_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent = FName(TEXT("OnDialogueGraphChangedEvent"));
	void UMounteaDialogueParticipant::OnDialogueGraphChangedEvent(UMounteaDialogueGraph* NewDialogueGraph)
	{
		MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms Parms;
		Parms.NewDialogueGraph=NewDialogueGraph;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent),&Parms);
	}
	void UMounteaDialogueParticipant::StaticRegisterNativesUMounteaDialogueParticipant()
	{
		UClass* Class = UMounteaDialogueParticipant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartDialogue", &UMounteaDialogueParticipant::execCanStartDialogue },
			{ "FindAudioComponent", &UMounteaDialogueParticipant::execFindAudioComponent },
			{ "FindAudioComponentByName", &UMounteaDialogueParticipant::execFindAudioComponentByName },
			{ "FindAudioComponentByTag", &UMounteaDialogueParticipant::execFindAudioComponentByTag },
			{ "GetAudioComponent", &UMounteaDialogueParticipant::execGetAudioComponent },
			{ "GetDefaultParticipantState", &UMounteaDialogueParticipant::execGetDefaultParticipantState },
			{ "GetDialogueGraph", &UMounteaDialogueParticipant::execGetDialogueGraph },
			{ "GetParticipantState", &UMounteaDialogueParticipant::execGetParticipantState },
			{ "GetSavedStartingNode", &UMounteaDialogueParticipant::execGetSavedStartingNode },
			{ "GetTraversedPath", &UMounteaDialogueParticipant::execGetTraversedPath },
			{ "InitializeParticipant", &UMounteaDialogueParticipant::execInitializeParticipant },
			{ "SetAudioComponent", &UMounteaDialogueParticipant::execSetAudioComponent },
			{ "SetDefaultParticipantState", &UMounteaDialogueParticipant::execSetDefaultParticipantState },
			{ "SetDialogueGraph", &UMounteaDialogueParticipant::execSetDialogueGraph },
			{ "SetParticipantState", &UMounteaDialogueParticipant::execSetParticipantState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics
	{
		struct MounteaDialogueParticipant_eventCanStartDialogue_Parms
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
	void Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueParticipant_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueParticipant_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns whether Dialogue Can start or not.\n\x09 * Returns CanStartDialogueEvent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns whether Dialogue Can start or not.\nReturns CanStartDialogueEvent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "CanStartDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::MounteaDialogueParticipant_eventCanStartDialogue_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics
	{
		struct MounteaDialogueParticipant_eventFindAudioComponent_Parms
		{
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Finds an audio component using FindAudioComponentByName or FindAudioComponentByTag.\n\x09 * \xe2\x9d\x97 Returns null if 'AudioComponentIdentification' is invalid!\n\x09 * \n\x09 * @param Arg The Name to search for.\n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Finds an audio component using FindAudioComponentByName or FindAudioComponentByTag.\n\xe2\x9d\x97 Returns null if 'AudioComponentIdentification' is invalid!\n\n@param Arg The Name to search for.\n@return The found audio component, or nullptr if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::MounteaDialogueParticipant_eventFindAudioComponent_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics
	{
		struct MounteaDialogueParticipant_eventFindAudioComponentByName_Parms
		{
			FName Arg;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByName_Parms, Arg), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByName_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Finds an audio component by the specified Name.\n\x09 * \n\x09 * @param Arg The Name to search for.\n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Finds an audio component by the specified Name.\n\n@param Arg The Name to search for.\n@return The found audio component, or nullptr if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponentByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::MounteaDialogueParticipant_eventFindAudioComponentByName_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics
	{
		struct MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms
		{
			FName Arg;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms, Arg), METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Finds an audio component by the specified tag.\n\x09 * \n\x09 * @param Arg The tag to search for.\n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Finds an audio component by the specified tag.\n\n@param Arg The tag to search for.\n@return The found audio component, or nullptr if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponentByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics
	{
		struct MounteaDialogueParticipant_eventGetAudioComponent_Parms
		{
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the audio component used to play the participant voices.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns the audio component used to play the participant voices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetAudioComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::MounteaDialogueParticipant_eventGetAudioComponent_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics
	{
		struct MounteaDialogueParticipant_eventGetDefaultParticipantState_Parms
		{
			EDialogueParticipantState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetDefaultParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(nullptr, 0) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Default state of the Dialogue Participant.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns the Default state of the Dialogue Participant." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetDefaultParticipantState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::MounteaDialogueParticipant_eventGetDefaultParticipantState_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics
	{
		struct MounteaDialogueParticipant_eventGetDialogueGraph_Parms
		{
			UMounteaDialogueGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetDialogueGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns Dialogue Graph of this Participant.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns Dialogue Graph of this Participant.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetDialogueGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::MounteaDialogueParticipant_eventGetDialogueGraph_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics
	{
		struct MounteaDialogueParticipant_eventGetParticipantState_Parms
		{
			EDialogueParticipantState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(nullptr, 0) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the current state of the Dialogue Participant.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns the current state of the Dialogue Participant." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetParticipantState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::MounteaDialogueParticipant_eventGetParticipantState_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics
	{
		struct MounteaDialogueParticipant_eventGetSavedStartingNode_Parms
		{
			UMounteaDialogueGraphNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetSavedStartingNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the starting node of the Mountea Dialogue Graph saved during runtime.\n\x09 * \xe2\x9d\x97 In order to have a saved starting node, the function 'SaveStartingNode' must have been called at least once.\n\x09 * \xe2\x9d\x94 The saved starting node can be updated using 'SaveStartingNode' function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns the starting node of the Mountea Dialogue Graph saved during runtime.\n\xe2\x9d\x97 In order to have a saved starting node, the function 'SaveStartingNode' must have been called at least once.\n\xe2\x9d\x94 The saved starting node can be updated using 'SaveStartingNode' function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetSavedStartingNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::MounteaDialogueParticipant_eventGetSavedStartingNode_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics
	{
		struct MounteaDialogueParticipant_eventGetTraversedPath_Parms
		{
			TMap<FGuid,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventGetTraversedPath_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the map of nodes traversed during the dialogue.\n\x09 * \n\x09 * @return The map of nodes traversed during the dialogue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Returns the map of nodes traversed during the dialogue.\n\n@return The map of nodes traversed during the dialogue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "GetTraversedPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::MounteaDialogueParticipant_eventGetTraversedPath_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Helps initialize Participant.\n\x09 * \xe2\x9d\x94 Is being called in BeginPlay.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Helps initialize Participant.\n\xe2\x9d\x94 Is being called in BeginPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "InitializeParticipant", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::NewProp_NewDialogueGraph = { "NewDialogueGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms, NewDialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::NewProp_NewDialogueGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called once Dialogue Graph has changed. \n\x09 * @param NewDialogueGraph\x09Value of the new Dialogue Graph. Can be null!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Event called once Dialogue Graph has changed.\n@param NewDialogueGraph      Value of the new Dialogue Graph. Can be null!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "OnDialogueGraphChangedEvent", nullptr, nullptr, sizeof(MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics
	{
		struct MounteaDialogueParticipant_eventSetAudioComponent_Parms
		{
			UAudioComponent* NewAudioComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::NewProp_NewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::NewProp_NewAudioComponent = { "NewAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetAudioComponent_Parms, NewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::NewProp_NewAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::NewProp_NewAudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::NewProp_NewAudioComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Sets the audio component used to play dialogue audio.\n\x09 *\n\x09 * @param NewAudioComponent The new audio component to use for dialogue audio.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Sets the audio component used to play dialogue audio.\n\n@param NewAudioComponent The new audio component to use for dialogue audio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetAudioComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::MounteaDialogueParticipant_eventSetAudioComponent_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics
	{
		struct MounteaDialogueParticipant_eventSetDefaultParticipantState_Parms
		{
			EDialogueParticipantState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetDefaultParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState_MetaData)) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Sets the Default state of the dialogue participant to the given state.\n\x09 * @param NewState The new state to set the dialogue participant to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Sets the Default state of the dialogue participant to the given state.\n@param NewState The new state to set the dialogue participant to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetDefaultParticipantState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::MounteaDialogueParticipant_eventSetDefaultParticipantState_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics
	{
		struct MounteaDialogueParticipant_eventSetDialogueGraph_Parms
		{
			UMounteaDialogueGraph* NewDialogueGraph;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::NewProp_NewDialogueGraph = { "NewDialogueGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetDialogueGraph_Parms, NewDialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::NewProp_NewDialogueGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Overrides Dialogue Graph for this Participant.\n\x09 * \xe2\x9d\x97 Accepts Null values\xe2\x9d\x97\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Overrides Dialogue Graph for this Participant.\n\xe2\x9d\x97 Accepts Null values\xe2\x9d\x97" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetDialogueGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::MounteaDialogueParticipant_eventSetDialogueGraph_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics
	{
		struct MounteaDialogueParticipant_eventSetParticipantState_Parms
		{
			EDialogueParticipantState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState_MetaData)) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Sets the current state of the dialogue participant to the given state.\n\x09 * @param NewState The new state to set the dialogue participant to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Sets the current state of the dialogue participant to the given state.\n@param NewState The new state to set the dialogue participant to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetParticipantState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::MounteaDialogueParticipant_eventSetParticipantState_Parms), Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueParticipant);
	UClass* Z_Construct_UClass_UMounteaDialogueParticipant_NoRegister()
	{
		return UMounteaDialogueParticipant::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueParticipant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultParticipantState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticipantState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultParticipantState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParticipantState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParticipantState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponentIdentification_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AudioComponentIdentification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingNode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraversedPath_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraversedPath_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraversedPath_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TraversedPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueGraphChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueGraphChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueParticipantStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueParticipantStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioComponentChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioComponentChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStartingNodeSaved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartingNodeSaved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueParticipant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueParticipant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_CanStartDialogue, "CanStartDialogue" }, // 3216162593
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent, "FindAudioComponent" }, // 3955215764
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName, "FindAudioComponentByName" }, // 3595660952
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag, "FindAudioComponentByTag" }, // 494319162
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetAudioComponent, "GetAudioComponent" }, // 4081617085
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetDefaultParticipantState, "GetDefaultParticipantState" }, // 504885528
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetDialogueGraph, "GetDialogueGraph" }, // 4089288981
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetParticipantState, "GetParticipantState" }, // 2893661096
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetSavedStartingNode, "GetSavedStartingNode" }, // 863926920
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_GetTraversedPath, "GetTraversedPath" }, // 2698881592
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_InitializeParticipant, "InitializeParticipant" }, // 1128131123
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent, "OnDialogueGraphChangedEvent" }, // 2716003860
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent, "SetAudioComponent" }, // 4265382758
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState, "SetDefaultParticipantState" }, // 3156091571
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph, "SetDialogueGraph" }, // 942598373
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState, "SetParticipantState" }, // 3801825993
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea" },
		{ "Comment", "/**\n * Mountea Dialogue Participant Component.\n *\n * \xe2\x9d\x94 This Component allows any Actor to be Dialogue Participant.\n * \xe2\x9d\x97 Requires Dialogue Graph to work.\n */" },
		{ "DisplayName", "Mountea Dialogue Participant" },
		{ "HideCategories", "Collision AssetUserData Cooking Activation Rendering Sockets" },
		{ "IncludePath", "Components/MounteaDialogueParticipant.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Mountea Dialogue Participant Component.\n\n\xe2\x9d\x94 This Component allows any Actor to be Dialogue Participant.\n\xe2\x9d\x97 Requires Dialogue Graph to work." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Mountea Dialogue Graph.\n\x09 * \xe2\x9d\x97 In order to start Dialogue, this value must be filled.\n\x09 * \xe2\x9d\x94 Can be updated using SetDialogueGraph function.\n\x09 *\n\x09 * Set Graph is allowed only outside active Dialogue.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Mountea Dialogue Graph.\n\xe2\x9d\x97 In order to start Dialogue, this value must be filled.\n\xe2\x9d\x94 Can be updated using SetDialogueGraph function.\n\nSet Graph is allowed only outside active Dialogue." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph = { "DialogueGraph", nullptr, (EPropertyFlags)0x0020080001000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, DialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Mountea Dialogue Participant Default State.\n\x09 * \xe2\x9d\x94 Is used in BeginPlay to set ParticipantState.\n\x09 * \xe2\x9d\x94 Is used as fallback value once Dialogue Ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Mountea Dialogue Participant Default State.\n\xe2\x9d\x94 Is used in BeginPlay to set ParticipantState.\n\xe2\x9d\x94 Is used as fallback value once Dialogue Ends." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState = { "DefaultParticipantState", nullptr, (EPropertyFlags)0x0020080001000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, DefaultParticipantState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_MetaData)) }; // 693011791
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09* State of the Dialogue Participant.\n\x09* \xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\x09* \xe2\x9d\x94 Can be updated using SetDialogueParticipantState function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "State of the Dialogue Participant.\n\xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\xe2\x9d\x94 Can be updated using SetDialogueParticipantState function." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState = { "ParticipantState", nullptr, (EPropertyFlags)0x00200c0000022001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, ParticipantState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_MetaData)) }; // 693011791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Provides simple way to pass down Audio Component.\n\x09 * Consumes:\n\x09 * * Actor Tag\n\x09 * * Name\n\x09 *\n\x09 * Tries to find 'UAudioComponent' by both methods in the Owner (Parent) Actor.\n\x09 * If any found, it will be set as AudioComponent.\n\x09 *\n\x09 * This is user friendly way to avoid node 'SetAudioComponent'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Provides simple way to pass down Audio Component.\nConsumes:\n* Actor Tag\n* Name\n\nTries to find 'UAudioComponent' by both methods in the Owner (Parent) Actor.\nIf any found, it will be set as AudioComponent.\n\nThis is user friendly way to avoid node 'SetAudioComponent'." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification = { "AudioComponentIdentification", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, AudioComponentIdentification), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * Audio Component for Dialogue Participant Voice.\n\x09 * \xe2\x9d\x97 Is populated by FindAudioComponent is called.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Audio Component for Dialogue Participant Voice.\n\xe2\x9d\x97 Is populated by FindAudioComponent is called." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200c00010a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * Optional Starting Node.\n\x09 *\n\x09 * If this value is selected, this Participant's Dialogue will start from Selected Node, if valid!\n\x09 * Otherwise it will start from Start Node of the Graph.\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Optional Starting Node.\n\nIf this value is selected, this Participant's Dialogue will start from Selected Node, if valid!\nOtherwise it will start from Start Node of the Graph." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode = { "StartingNode", nullptr, (EPropertyFlags)0x00200c0001020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, StartingNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_ValueProp = { "TraversedPath", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_Key_KeyProp = { "TraversedPath_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_MetaData[] = {
		{ "Category", "Mountea" },
		{ "Comment", "/**\n\x09 * Contains mapped list of Traversed Nodes by GUIDs.\n\x09 * To update Performance, this Path is updated only once Dialogue has finished. Temporary Path is stored in Dialogue Context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Contains mapped list of Traversed Nodes by GUIDs.\nTo update Performance, this Path is updated only once Dialogue has finished. Temporary Path is stored in Dialogue Context." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath = { "TraversedPath", nullptr, (EPropertyFlags)0x00200c0001020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, TraversedPath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called once Dialogue Graph has changed.\n\x09 * Other events can be assigned to this one.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Event called once Dialogue Graph has changed.\nOther events can be assigned to this one." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged = { "OnDialogueGraphChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, OnDialogueGraphChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged_MetaData)) }; // 3728265965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called once Participant State has changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Event called once Participant State has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged = { "OnDialogueParticipantStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, OnDialogueParticipantStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged_MetaData)) }; // 822833675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called once Audio Component has changed.\n\x09 * \xe2\x9d\x97 Output AudioComponent could be Null\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Event called once Audio Component has changed.\n\xe2\x9d\x97 Output AudioComponent could be Null" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged = { "OnAudioComponentChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, OnAudioComponentChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged_MetaData)) }; // 2166737760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Event called once Starting Node has saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "ToolTip", "Event called once Starting Node has saved." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved = { "OnStartingNodeSaved", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueParticipant, OnStartingNodeSaved), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved_MetaData)) }; // 1914973102
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueParticipant, IMounteaDialogueParticipantInterface), false },  // 3934492758
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueParticipant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueParticipant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::ClassParams = {
		&UMounteaDialogueParticipant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueParticipant()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton, Z_Construct_UClass_UMounteaDialogueParticipant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueParticipant>()
	{
		return UMounteaDialogueParticipant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueParticipant);
	UMounteaDialogueParticipant::~UMounteaDialogueParticipant() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueParticipant, UMounteaDialogueParticipant::StaticClass, TEXT("UMounteaDialogueParticipant"), &Z_Registration_Info_UClass_UMounteaDialogueParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueParticipant), 835523992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_1360491291(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
