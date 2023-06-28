// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/MounteaDialogueParticipantInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueParticipantInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature();
	MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms
		{
			UMounteaDialogueGraph* NewGraph;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::NewProp_NewGraph = { "NewGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms, NewGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::NewProp_NewGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueGraphChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_MetaData)) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueParticipantStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms
		{
			const UAudioComponent* NewAudioComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp = { "NewAudioComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms, NewAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueParticipantAudioComponentChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics
	{
		struct _Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms
		{
			const UMounteaDialogueGraphNode* NewSavedNode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSavedNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSavedNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode = { "NewSavedNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms, NewSavedNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "ParticipantStartingNodeSaved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDialogueParticipantState*)Z_Param__Result=P_THIS->GetState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSaveTraversedPath)
	{
		P_GET_TMAP_REF(FGuid,int32,Z_Param_Out_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveTraversedPath_Implementation(Z_Param_Out_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSaveStartingNode)
	{
		P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewStartingNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveStartingNode_Implementation(Z_Param_NewStartingNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execCanStartDialogueEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartDialogueEvent_Implementation();
		P_NATIVE_END;
	}
	struct MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct MounteaDialogueParticipantInterface_eventGetOwningActor_Parms
	{
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueParticipantInterface_eventGetOwningActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct MounteaDialogueParticipantInterface_eventGetState_Parms
	{
		EDialogueParticipantState ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueParticipantInterface_eventGetState_Parms()
			: ReturnValue((EDialogueParticipantState)0)
		{
		}
	};
	struct MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms
	{
		UMounteaDialogueGraphNode* NewStartingNode;
	};
	struct MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms
	{
		TMap<FGuid,int32> InPath;
	};
	bool IMounteaDialogueParticipantInterface::CanStartDialogueEvent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanStartDialogueEvent instead.");
		MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* IMounteaDialogueParticipantInterface::GetOwningActor() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOwningActor instead.");
		MounteaDialogueParticipantInterface_eventGetOwningActor_Parms Parms;
		return Parms.ReturnValue;
	}
	EDialogueParticipantState IMounteaDialogueParticipantInterface::GetState() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetState instead.");
		MounteaDialogueParticipantInterface_eventGetState_Parms Parms;
		return Parms.ReturnValue;
	}
	void IMounteaDialogueParticipantInterface::SaveStartingNode(UMounteaDialogueGraphNode* NewStartingNode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveStartingNode instead.");
	}
	void IMounteaDialogueParticipantInterface::SaveTraversedPath(TMap<FGuid,int32>& InPath)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveTraversedPath instead.");
	}
	void UMounteaDialogueParticipantInterface::StaticRegisterNativesUMounteaDialogueParticipantInterface()
	{
		UClass* Class = UMounteaDialogueParticipantInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartDialogueEvent", &IMounteaDialogueParticipantInterface::execCanStartDialogueEvent },
			{ "GetOwningActor", &IMounteaDialogueParticipantInterface::execGetOwningActor },
			{ "GetState", &IMounteaDialogueParticipantInterface::execGetState },
			{ "SaveStartingNode", &IMounteaDialogueParticipantInterface::execSaveStartingNode },
			{ "SaveTraversedPath", &IMounteaDialogueParticipantInterface::execSaveTraversedPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/*\n\x09 * A way to determine whether the Dialogue can even start.\n\x09 * It does come with Native C++ implementation, which can be overriden in child C++ classes.\n\x09 * \xe2\x9d\x97 If you are using Blueprint implementation, don't forget to call Parent Node, which contains all parent implementations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
		{ "ToolTip", "* A way to determine whether the Dialogue can even start.\n* It does come with Native C++ implementation, which can be overriden in child C++ classes.\n* \xe2\x9d\x97 If you are using Blueprint implementation, don't forget to call Parent Node, which contains all parent implementations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "CanStartDialogueEvent", nullptr, nullptr, sizeof(MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the owning actor for this Dialogue Participant Component.\n\x09 *\n\x09 * @return The owning actor for this Dialogue Participant Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
		{ "ToolTip", "Returns the owning actor for this Dialogue Participant Component.\n\n@return The owning actor for this Dialogue Participant Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(MounteaDialogueParticipantInterface_eventGetOwningActor_Parms), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(nullptr, 0) }; // 693011791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Interface call.\n\x09 * Retrieves current Dialogue Participant State.\n\x09 * State defines whether Participant can start/close dialogue or not.\n\x09 * \n\x09 * @return ParticipantState\x09Participant state value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
		{ "ToolTip", "Interface call.\nRetrieves current Dialogue Participant State.\nState defines whether Participant can start/close dialogue or not.\n\n@return ParticipantState     Participant state value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetState", nullptr, nullptr, sizeof(MounteaDialogueParticipantInterface_eventGetState_Parms), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStartingNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::NewProp_NewStartingNode = { "NewStartingNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms, NewStartingNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::NewProp_NewStartingNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Saves the starting node for this Dialogue Participant Component.\n\x09 *\n\x09 * @param NewStartingNode The node to set as the starting node\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
		{ "ToolTip", "Saves the starting node for this Dialogue Participant Component.\n\n@param NewStartingNode The node to set as the starting node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SaveStartingNode", nullptr, nullptr, sizeof(MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPath_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPath_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_InPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_ValueProp = { "InPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_Key_KeyProp = { "InPath_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms, InPath), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Saves the traversed path for this Dialogue Participant Component.\n\x09 * This function is called once Dialogue ends and is updated from Dialogue Context.\n\x09 *\n\x09 * @param InPath The traversed path of the dialogue graph to be saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
		{ "ToolTip", "Saves the traversed path for this Dialogue Participant Component.\nThis function is called once Dialogue ends and is updated from Dialogue Context.\n\n@param InPath The traversed path of the dialogue graph to be saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SaveTraversedPath", nullptr, nullptr, sizeof(MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueParticipantInterface);
	UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister()
	{
		return UMounteaDialogueParticipantInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogueEvent, "CanStartDialogueEvent" }, // 1332821000
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor, "GetOwningActor" }, // 2951317024
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetState, "GetState" }, // 3333515697
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode, "SaveStartingNode" }, // 1447028785
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath, "SaveTraversedPath" }, // 740982688
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/MounteaDialogueParticipantInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueParticipantInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::ClassParams = {
		&UMounteaDialogueParticipantInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueParticipantInterface>()
	{
		return UMounteaDialogueParticipantInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueParticipantInterface);
	UMounteaDialogueParticipantInterface::~UMounteaDialogueParticipantInterface() {}
	static FName NAME_UMounteaDialogueParticipantInterface_CanStartDialogueEvent = FName(TEXT("CanStartDialogueEvent"));
	bool IMounteaDialogueParticipantInterface::Execute_CanStartDialogueEvent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
		MounteaDialogueParticipantInterface_eventCanStartDialogueEvent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_CanStartDialogueEvent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanStartDialogueEvent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueParticipantInterface_GetOwningActor = FName(TEXT("GetOwningActor"));
	AActor* IMounteaDialogueParticipantInterface::Execute_GetOwningActor(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
		MounteaDialogueParticipantInterface_eventGetOwningActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetOwningActor);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetOwningActor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueParticipantInterface_GetState = FName(TEXT("GetState"));
	EDialogueParticipantState IMounteaDialogueParticipantInterface::Execute_GetState(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
		MounteaDialogueParticipantInterface_eventGetState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetState);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetState_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueParticipantInterface_SaveStartingNode = FName(TEXT("SaveStartingNode"));
	void IMounteaDialogueParticipantInterface::Execute_SaveStartingNode(UObject* O, UMounteaDialogueGraphNode* NewStartingNode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
		MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SaveStartingNode);
		if (Func)
		{
			Parms.NewStartingNode=NewStartingNode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
		{
			I->SaveStartingNode_Implementation(NewStartingNode);
		}
	}
	static FName NAME_UMounteaDialogueParticipantInterface_SaveTraversedPath = FName(TEXT("SaveTraversedPath"));
	void IMounteaDialogueParticipantInterface::Execute_SaveTraversedPath(UObject* O, TMap<FGuid,int32>& InPath)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
		MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SaveTraversedPath);
		if (Func)
		{
			Parms.InPath=InPath;
			O->ProcessEvent(Func, &Parms);
			InPath=Parms.InPath;
		}
		else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
		{
			I->SaveTraversedPath_Implementation(InPath);
		}
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueParticipantInterface, UMounteaDialogueParticipantInterface::StaticClass, TEXT("UMounteaDialogueParticipantInterface"), &Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueParticipantInterface), 3934492758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_1944137876(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_MounteaDialogueParticipantInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
