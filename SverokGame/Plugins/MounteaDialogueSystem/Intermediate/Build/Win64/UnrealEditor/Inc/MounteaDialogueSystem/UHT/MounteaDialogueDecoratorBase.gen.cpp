// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecoratorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState();
	MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecoratorState;
	static UEnum* EDecoratorState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDecoratorState"));
		}
		return Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDecoratorState>()
	{
		return EDecoratorState_StaticEnum();
	}
	struct Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enumerators[] = {
		{ "EDecoratorState::Uninitialized", (int64)EDecoratorState::Uninitialized },
		{ "EDecoratorState::Initialized", (int64)EDecoratorState::Initialized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Initialized.Name", "EDecoratorState::Initialized" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "Uninitialized.Name", "EDecoratorState::Uninitialized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		"EDecoratorState",
		"EDecoratorState",
		Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState()
	{
		if (!Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwnerParticipant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=P_THIS->GetOwnerParticipant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetOwningGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetOwningNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetOwningWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execStoreWorldReference)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoreWorldReference(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execExecuteDecorator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteDecorator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execEvaluateDecorator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateDecorator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execValidateDecorator)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationMessages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateDecorator_Implementation(Z_Param_Out_ValidationMessages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execCleanupDecorator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanupDecorator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execInitializeDecorator)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_OwningParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDecorator_Implementation(Z_Param_World,Z_Param_Out_OwningParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetDecoratorDocumentationLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDecoratorDocumentationLink_Implementation();
		P_NATIVE_END;
	}
	struct MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms
	{
		FString ReturnValue;
	};
	struct MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms
	{
		UWorld* World;
		TScriptInterface<IMounteaDialogueParticipantInterface> OwningParticipant;
	};
	struct MounteaDialogueDecoratorBase_eventValidateDecorator_Parms
	{
		TArray<FText> ValidationMessages;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MounteaDialogueDecoratorBase_eventValidateDecorator_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UMounteaDialogueDecoratorBase_CleanupDecorator = FName(TEXT("CleanupDecorator"));
	void UMounteaDialogueDecoratorBase::CleanupDecorator()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_CleanupDecorator),NULL);
	}
	static FName NAME_UMounteaDialogueDecoratorBase_EvaluateDecorator = FName(TEXT("EvaluateDecorator"));
	bool UMounteaDialogueDecoratorBase::EvaluateDecorator()
	{
		MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_EvaluateDecorator),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueDecoratorBase_ExecuteDecorator = FName(TEXT("ExecuteDecorator"));
	void UMounteaDialogueDecoratorBase::ExecuteDecorator()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_ExecuteDecorator),NULL);
	}
	static FName NAME_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink = FName(TEXT("GetDecoratorDocumentationLink"));
	FString UMounteaDialogueDecoratorBase::GetDecoratorDocumentationLink() const
	{
		MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMounteaDialogueDecoratorBase_InitializeDecorator = FName(TEXT("InitializeDecorator"));
	void UMounteaDialogueDecoratorBase::InitializeDecorator(UWorld* World, TScriptInterface<IMounteaDialogueParticipantInterface> const& OwningParticipant)
	{
		MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms Parms;
		Parms.World=World;
		Parms.OwningParticipant=OwningParticipant;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_InitializeDecorator),&Parms);
	}
	static FName NAME_UMounteaDialogueDecoratorBase_ValidateDecorator = FName(TEXT("ValidateDecorator"));
	bool UMounteaDialogueDecoratorBase::ValidateDecorator(TArray<FText>& ValidationMessages)
	{
		MounteaDialogueDecoratorBase_eventValidateDecorator_Parms Parms;
		Parms.ValidationMessages=ValidationMessages;
		ProcessEvent(FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_ValidateDecorator),&Parms);
		ValidationMessages=Parms.ValidationMessages;
		return !!Parms.ReturnValue;
	}
	void UMounteaDialogueDecoratorBase::StaticRegisterNativesUMounteaDialogueDecoratorBase()
	{
		UClass* Class = UMounteaDialogueDecoratorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanupDecorator", &UMounteaDialogueDecoratorBase::execCleanupDecorator },
			{ "EvaluateDecorator", &UMounteaDialogueDecoratorBase::execEvaluateDecorator },
			{ "ExecuteDecorator", &UMounteaDialogueDecoratorBase::execExecuteDecorator },
			{ "GetDecoratorDocumentationLink", &UMounteaDialogueDecoratorBase::execGetDecoratorDocumentationLink },
			{ "GetOwner", &UMounteaDialogueDecoratorBase::execGetOwner },
			{ "GetOwnerParticipant", &UMounteaDialogueDecoratorBase::execGetOwnerParticipant },
			{ "GetOwningGraph", &UMounteaDialogueDecoratorBase::execGetOwningGraph },
			{ "GetOwningNode", &UMounteaDialogueDecoratorBase::execGetOwningNode },
			{ "GetOwningWorld", &UMounteaDialogueDecoratorBase::execGetOwningWorld },
			{ "InitializeDecorator", &UMounteaDialogueDecoratorBase::execInitializeDecorator },
			{ "StoreWorldReference", &UMounteaDialogueDecoratorBase::execStoreWorldReference },
			{ "ValidateDecorator", &UMounteaDialogueDecoratorBase::execValidateDecorator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Cleans up the Decorator.\n\x09 * In Blueprints should be used to reset cached values to avoid blocking garbage collector.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Cleans up the Decorator.\nIn Blueprints should be used to reset cached values to avoid blocking garbage collector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "CleanupDecorator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Evaluates the Decorator.\n\x09 * Called for each Node it is attached to.\n\x09 * Could enhance Node's 'CanStartNode'. Example would be: BP_RequireItem decorator, which would return true if Player has specific Item in inventory. Otherwise it returns false and its Node is not available in Selection of Answers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Evaluates the Decorator.\nCalled for each Node it is attached to.\nCould enhance Node's 'CanStartNode'. Example would be: BP_RequireItem decorator, which would return true if Player has specific Item in inventory. Otherwise it returns false and its Node is not available in Selection of Answers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "EvaluateDecorator", nullptr, nullptr, sizeof(MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Executes the Decorator.\n\x09 * Useful for triggering special events per Node, for instance, switching dialogue cameras.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Executes the Decorator.\nUseful for triggering special events per Node, for instance, switching dialogue cameras." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "ExecuteDecorator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetDecoratorDocumentationLink", nullptr, nullptr, sizeof(MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics
	{
		struct MounteaDialogueDecoratorBase_eventGetOwner_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Returns Owning Object of this Decorator.\n\x09 */" },
		{ "CompactNodeTitle", "Owner" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Returns Owning Object of this Decorator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::MounteaDialogueDecoratorBase_eventGetOwner_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics
	{
		struct MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms
		{
			TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Returns Owner Participant Interface.\n\x09 */" },
		{ "CompactNodeTitle", "OwnerParticipant" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Returns Owner Participant Interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwnerParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics
	{
		struct MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Returns Owning Graph of this Decorator.\n\x09 *\n\x09 * \xe2\x9d\x97 Might return Null if this Decorator is owned by Node!\n\x09 */" },
		{ "CompactNodeTitle", "OwningGraph" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Returns Owning Graph of this Decorator.\n\n\xe2\x9d\x97 Might return Null if this Decorator is owned by Node!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics
	{
		struct MounteaDialogueDecoratorBase_eventGetOwningNode_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Returns Owning Node of this Decorator.\n\x09 *\n\x09 * \xe2\x9d\x97 Might return Null if this Decorator is owned by Graph!\n\x09 */" },
		{ "CompactNodeTitle", "OwningNode" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Returns Owning Node of this Decorator.\n\n\xe2\x9d\x97 Might return Null if this Decorator is owned by Graph!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::MounteaDialogueDecoratorBase_eventGetOwningNode_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics
	{
		struct MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Returns Owning World this Decorator belongs to.\n\x09 *\n\x09 * \xe2\x9d\x97 Should not return Null, but possibly can.\n\x09 */" },
		{ "CompactNodeTitle", "World" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Returns Owning World this Decorator belongs to.\n\n\xe2\x9d\x97 Should not return Null, but possibly can." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant = { "OwningParticipant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms, OwningParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Initializes the Decorator.\n\x09 * In C++ saves the World for later use.\n\x09 * In Blueprints should be used to cache values to avoid overhead in 'ExecuteDecorator'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Initializes the Decorator.\nIn C++ saves the World for later use.\nIn Blueprints should be used to cache values to avoid overhead in 'ExecuteDecorator'." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "InitializeDecorator", nullptr, nullptr, sizeof(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics
	{
		struct MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms
		{
			UWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Stores reference to World.\n\x09 * World is needed to perform World affecting tasks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Stores reference to World.\nWorld is needed to perform World affecting tasks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "StoreWorldReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationMessages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationMessages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages_Inner = { "ValidationMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages = { "ValidationMessages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms, ValidationMessages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MounteaDialogueDecoratorBase_eventValidateDecorator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorators" },
		{ "Comment", "/**\n\x09 * Validates the Decorator.\n\x09 * Called for each Node it is attached to.\n\x09 * Works as safety measure to avoid calling broken Decorators with invalid references.\n\x09 *\n\x09 * False value stops Dialogue whatsoever.\n\x09 * Validation is called before Context is initialized!\n\x09 */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Validates the Decorator.\nCalled for each Node it is attached to.\nWorks as safety measure to avoid calling broken Decorators with invalid references.\n\nFalse value stops Dialogue whatsoever.\nValidation is called before Context is initialized!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "ValidateDecorator", nullptr, nullptr, sizeof(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecoratorBase);
	UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister()
	{
		return UMounteaDialogueDecoratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DecoratorState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DecoratorState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwnerParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator, "CleanupDecorator" }, // 1036902711
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator, "EvaluateDecorator" }, // 540946156
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator, "ExecuteDecorator" }, // 2535273399
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink, "GetDecoratorDocumentationLink" }, // 2607004858
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner, "GetOwner" }, // 3030975224
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant, "GetOwnerParticipant" }, // 2019189018
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph, "GetOwningGraph" }, // 3297128631
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode, "GetOwningNode" }, // 3339131828
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld, "GetOwningWorld" }, // 2104461656
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator, "InitializeDecorator" }, // 523289120
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference, "StoreWorldReference" }, // 2545279662
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator, "ValidateDecorator" }, // 676466337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorator\n *\n * Decorators are instanced and exist only as \"triggers\".\n * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n */" },
		{ "IncludePath", "Decorators/MounteaDialogueDecoratorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Mountea Dialogue Decorator\n\nDecorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState = { "DecoratorState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, DecoratorState), Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_MetaData)) }; // 4089493814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant = { "OwnerParticipant", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, OwnerParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecoratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::ClassParams = {
		&UMounteaDialogueDecoratorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecoratorBase>()
	{
		return UMounteaDialogueDecoratorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecoratorBase);
	UMounteaDialogueDecoratorBase::~UMounteaDialogueDecoratorBase() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator;
class UScriptStruct* FMounteaDialogueDecorator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMounteaDialogueDecorator, Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("MounteaDialogueDecorator"));
	}
	return Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FMounteaDialogueDecorator>()
{
	return FMounteaDialogueDecorator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DecoratorType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dialogue Decorator Structure.\n * Holds reference to its Instanced Decorator.\n */" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "ToolTip", "Dialogue Decorator Structure.\nHolds reference to its Instanced Decorator." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMounteaDialogueDecorator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintBaseOnly", "true" },
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Decorators can help out with enhancing the Dialogue flow.\n\x09 * Those Decorators are instanced and exist only as \"triggers\".\n\x09 * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Decorators can help out with enhancing the Dialogue flow.\nThose Decorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType = { "DecoratorType", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMounteaDialogueDecorator, DecoratorType), Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
		nullptr,
		&NewStructOps,
		"MounteaDialogueDecorator",
		sizeof(FMounteaDialogueDecorator),
		alignof(FMounteaDialogueDecorator),
		Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator()
	{
		if (!Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton, Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::EnumInfo[] = {
		{ EDecoratorState_StaticEnum, TEXT("EDecoratorState"), &Z_Registration_Info_UEnum_EDecoratorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4089493814U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ScriptStructInfo[] = {
		{ FMounteaDialogueDecorator::StaticStruct, Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewStructOps, TEXT("MounteaDialogueDecorator"), &Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMounteaDialogueDecorator), 2215661766U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecoratorBase, UMounteaDialogueDecoratorBase::StaticClass, TEXT("UMounteaDialogueDecoratorBase"), &Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecoratorBase), 1239770085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_3448593180(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
