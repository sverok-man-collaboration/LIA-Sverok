// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_DialogueNodeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase();
	MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References
	DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetRowNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRowName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->GetDataTable();
		P_NATIVE_END;
	}
	void UMounteaDialogueGraphNode_DialogueNodeBase::StaticRegisterNativesUMounteaDialogueGraphNode_DialogueNodeBase()
	{
		UClass* Class = UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTable", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetDataTable },
			{ "GetRowName", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowName },
			{ "GetRowNames", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics
	{
		struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Dialogue Data Table for this graph node.\n\x09 * \xe2\x9d\x97 Might be null\n\x09 *\n\x09 * @return The Dialogue Data Table for this graph node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "ToolTip", "Returns the Dialogue Data Table for this graph node.\n\xe2\x9d\x97 Might be null\n\n@return The Dialogue Data Table for this graph node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetDataTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics
	{
		struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * Returns the Dialogue Data Row name.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 *\n\x09 * @return The Dialogue Data Row name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "ToolTip", "Returns the Dialogue Data Row name.\n\xe2\x9d\x97 Might be invalid\n\n@return The Dialogue Data Row name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetRowName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics
	{
		struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetRowNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_DialogueNodeBase);
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister()
	{
		return UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FTextPropertyParams NewProp_Preview_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Preview;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable, "GetDataTable" }, // 2164517995
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName, "GetRowName" }, // 3464721079
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames, "GetRowNames" }, // 1620339886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "Comment", "/**\n * Mountea Dialogue Graph Node abstract Base class.\n * \n * Enhances 'MounteaDialogueGraphNode' Base class with Dialogue data.\n * Provides DataTable and Row options that define the Dialogue data which will be displayed in UI.\n */" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "ToolTip", "Mountea Dialogue Graph Node abstract Base class.\n\nEnhances 'MounteaDialogueGraphNode' Base class with Dialogue data.\nProvides DataTable and Row options that define the Dialogue data which will be displayed in UI." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_Inner = { "Preview", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_MetaData[] = {
		{ "Category", "Base" },
		{ "Comment", "/**\n\x09 * Shows read-only Texts with localization of selected Dialogue Row.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "MultiLine", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Shows read-only Texts with localization of selected Dialogue Row." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000800022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, Preview), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/**\n\x09 * The data table containing the dialogue rows.\n\x09 * \xe2\x9d\x97 Strongly suggested to use 'DialogueRow' based Data Tables\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The data table containing the dialogue rows.\n\xe2\x9d\x97 Strongly suggested to use 'DialogueRow' based Data Tables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "EditCondition", "DataTable!=nullptr" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, RowName), METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_DialogueNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::ClassParams = {
		&UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase()
	{
		if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton;
	}
	template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_DialogueNodeBase>()
	{
		return UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_DialogueNodeBase);
	UMounteaDialogueGraphNode_DialogueNodeBase::~UMounteaDialogueGraphNode_DialogueNodeBase() {}
	struct Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass, TEXT("UMounteaDialogueGraphNode_DialogueNodeBase"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_DialogueNodeBase), 111834276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_599530839(TEXT("/Script/MounteaDialogueSystem"),
		Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_LIA_Sverok_SverokGame_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
