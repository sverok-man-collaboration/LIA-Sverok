// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetch/Public/SimpleJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleJsonValue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonObject_NoRegister();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue();
	FETCH_API UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Fetch();
// End Cross Module References
	DEFINE_FUNCTION(USimpleJsonValue::execIsValidSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execIsNullSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNullSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsArraySync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->AsArraySync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USimpleJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsObjectSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->AsObjectSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsBoolSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBoolSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsStringSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsStringSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsNumberSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumberSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	void USimpleJsonValue::StaticRegisterNativesUSimpleJsonValue()
	{
		UClass* Class = USimpleJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &USimpleJsonValue::execAsArray },
			{ "AsArraySync", &USimpleJsonValue::execAsArraySync },
			{ "AsBool", &USimpleJsonValue::execAsBool },
			{ "AsBoolSync", &USimpleJsonValue::execAsBoolSync },
			{ "AsNumber", &USimpleJsonValue::execAsNumber },
			{ "AsNumberSync", &USimpleJsonValue::execAsNumberSync },
			{ "AsObject", &USimpleJsonValue::execAsObject },
			{ "AsObjectSync", &USimpleJsonValue::execAsObjectSync },
			{ "AsString", &USimpleJsonValue::execAsString },
			{ "AsStringSync", &USimpleJsonValue::execAsStringSync },
			{ "IsNull", &USimpleJsonValue::execIsNull },
			{ "IsNullSync", &USimpleJsonValue::execIsNullSync },
			{ "IsValid", &USimpleJsonValue::execIsValid },
			{ "IsValidSync", &USimpleJsonValue::execIsValidSync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics
	{
		struct SimpleJsonValue_eventAsArray_Parms
		{
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::SimpleJsonValue_eventAsArray_Parms), Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics
	{
		struct SimpleJsonValue_eventAsArraySync_Parms
		{
			TArray<USimpleJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USimpleJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsArraySync_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsArraySync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::SimpleJsonValue_eventAsArraySync_Parms), Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsArraySync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsArraySync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics
	{
		struct SimpleJsonValue_eventAsBool_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::SimpleJsonValue_eventAsBool_Parms), Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics
	{
		struct SimpleJsonValue_eventAsBoolSync_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventAsBoolSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventAsBoolSync_Parms), &Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsBoolSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::SimpleJsonValue_eventAsBoolSync_Parms), Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsBoolSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsBoolSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics
	{
		struct SimpleJsonValue_eventAsNumber_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::SimpleJsonValue_eventAsNumber_Parms), Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics
	{
		struct SimpleJsonValue_eventAsNumberSync_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsNumberSync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsNumberSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::SimpleJsonValue_eventAsNumberSync_Parms), Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsNumberSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsNumberSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics
	{
		struct SimpleJsonValue_eventAsObject_Parms
		{
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::SimpleJsonValue_eventAsObject_Parms), Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics
	{
		struct SimpleJsonValue_eventAsObjectSync_Parms
		{
			USimpleJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsObjectSync_Parms, ReturnValue), Z_Construct_UClass_USimpleJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsObjectSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::SimpleJsonValue_eventAsObjectSync_Parms), Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsObjectSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsObjectSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsString_Statics
	{
		struct SimpleJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::SimpleJsonValue_eventAsString_Parms), Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics
	{
		struct SimpleJsonValue_eventAsStringSync_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleJsonValue_eventAsStringSync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "AsStringSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::SimpleJsonValue_eventAsStringSync_Parms), Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_AsStringSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_AsStringSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics
	{
		struct SimpleJsonValue_eventIsNull_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "IsNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::SimpleJsonValue_eventIsNull_Parms), Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics
	{
		struct SimpleJsonValue_eventIsNullSync_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventIsNullSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventIsNullSync_Parms), &Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "IsNullSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::SimpleJsonValue_eventIsNullSync_Parms), Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_IsNullSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_IsNullSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics
	{
		struct SimpleJsonValue_eventIsValid_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventIsValid_Parms), &Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::SimpleJsonValue_eventIsValid_Parms), Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics
	{
		struct SimpleJsonValue_eventIsValidSync_Parms
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
	void Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleJsonValue_eventIsValidSync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SimpleJsonValue_eventIsValidSync_Parms), &Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fetch | SimpleJsonValue" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleJsonValue, nullptr, "IsValidSync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::SimpleJsonValue_eventIsValidSync_Parms), Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleJsonValue_IsValidSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleJsonValue_IsValidSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleJsonValue);
	UClass* Z_Construct_UClass_USimpleJsonValue_NoRegister()
	{
		return USimpleJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_USimpleJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Fetch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleJsonValue_AsArray, "AsArray" }, // 3968593527
		{ &Z_Construct_UFunction_USimpleJsonValue_AsArraySync, "AsArraySync" }, // 2421895481
		{ &Z_Construct_UFunction_USimpleJsonValue_AsBool, "AsBool" }, // 4142319355
		{ &Z_Construct_UFunction_USimpleJsonValue_AsBoolSync, "AsBoolSync" }, // 1312682717
		{ &Z_Construct_UFunction_USimpleJsonValue_AsNumber, "AsNumber" }, // 1751677903
		{ &Z_Construct_UFunction_USimpleJsonValue_AsNumberSync, "AsNumberSync" }, // 570603773
		{ &Z_Construct_UFunction_USimpleJsonValue_AsObject, "AsObject" }, // 3736437975
		{ &Z_Construct_UFunction_USimpleJsonValue_AsObjectSync, "AsObjectSync" }, // 3127341322
		{ &Z_Construct_UFunction_USimpleJsonValue_AsString, "AsString" }, // 3705725122
		{ &Z_Construct_UFunction_USimpleJsonValue_AsStringSync, "AsStringSync" }, // 2260115962
		{ &Z_Construct_UFunction_USimpleJsonValue_IsNull, "IsNull" }, // 1658188347
		{ &Z_Construct_UFunction_USimpleJsonValue_IsNullSync, "IsNullSync" }, // 4150212945
		{ &Z_Construct_UFunction_USimpleJsonValue_IsValid, "IsValid" }, // 2519572688
		{ &Z_Construct_UFunction_USimpleJsonValue_IsValidSync, "IsValidSync" }, // 85617091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SimpleJsonValue.h" },
		{ "ModuleRelativePath", "Public/SimpleJsonValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleJsonValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleJsonValue_Statics::ClassParams = {
		&USimpleJsonValue::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleJsonValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleJsonValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleJsonValue()
	{
		if (!Z_Registration_Info_UClass_USimpleJsonValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleJsonValue.OuterSingleton, Z_Construct_UClass_USimpleJsonValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleJsonValue.OuterSingleton;
	}
	template<> FETCH_API UClass* StaticClass<USimpleJsonValue>()
	{
		return USimpleJsonValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleJsonValue);
	USimpleJsonValue::~USimpleJsonValue() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleJsonValue, USimpleJsonValue::StaticClass, TEXT("USimpleJsonValue"), &Z_Registration_Info_UClass_USimpleJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleJsonValue), 1246171532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_3843968280(TEXT("/Script/Fetch"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Fetch_Source_Fetch_Public_SimpleJsonValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
