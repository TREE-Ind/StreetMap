// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMap() {}
// Cross Module References
	STREETMAPRUNTIME_API UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap_NoRegister();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	static UEnum* EStreetMapRoadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("EStreetMapRoadType"));
		}
		return Singleton;
	}
	template<> STREETMAPRUNTIME_API UEnum* StaticEnum<EStreetMapRoadType>()
	{
		return EStreetMapRoadType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreetMapRoadType(EStreetMapRoadType_StaticEnum, TEXT("/Script/StreetMapRuntime"), TEXT("EStreetMapRoadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_Hash() { return 4131211152U; }
	UEnum* Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreetMapRoadType"), 0, Get_Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Street", (int64)Street },
				{ "MajorRoad", (int64)MajorRoad },
				{ "Highway", (int64)Highway },
				{ "Other", (int64)Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of roads */" },
				{ "Highway.Comment", "/** Highway */" },
				{ "Highway.Name", "Highway" },
				{ "Highway.ToolTip", "Highway" },
				{ "MajorRoad.Comment", "/** Major road or minor state highway */" },
				{ "MajorRoad.Name", "MajorRoad" },
				{ "MajorRoad.ToolTip", "Major road or minor state highway" },
				{ "ModuleRelativePath", "Public/StreetMap.h" },
				{ "Other.Comment", "/** Other (path, bus route, etc) */" },
				{ "Other.Name", "Other" },
				{ "Other.ToolTip", "Other (path, bus route, etc)" },
				{ "Street.Comment", "/** Small road or residential street */" },
				{ "Street.Name", "Street" },
				{ "Street.ToolTip", "Small road or residential street" },
				{ "ToolTip", "Types of roads" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreetMapRuntime,
				nullptr,
				"EStreetMapRoadType",
				"EStreetMapRoadType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStreetMapBuilding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuilding, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapBuilding>()
{
	return FStreetMapBuilding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapBuilding(FStreetMapBuilding::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapBuilding"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapBuilding")),new UScriptStruct::TCppStructOps<FStreetMapBuilding>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapBuilding;
	struct Z_Construct_UScriptStruct_FStreetMapBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BuildingLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A building */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A building" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuilding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (max) of this building's points */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (min) of this building's points */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Levels of the building (if known, otherwise zero) */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels = { "BuildingLevels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Height of the building in meters (if known, otherwise zero) */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Polygon points that define the perimeter of the building */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints = { "BuildingPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_Inner = { "BuildingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Name of the building */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName = { "BuildingName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewProp_BuildingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapBuilding",
		sizeof(FStreetMapBuilding),
		alignof(FStreetMapBuilding),
		Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapBuilding"), sizeof(FStreetMapBuilding), Get_Z_Construct_UScriptStruct_FStreetMapBuilding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapBuilding_Hash() { return 169138612U; }
class UScriptStruct* FStreetMapNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapNode, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapNode>()
{
	return FStreetMapNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapNode(FStreetMapNode::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapNode"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapNode")),new UScriptStruct::TCppStructOps<FStreetMapNode>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapNode;
	struct Z_Construct_UScriptStruct_FStreetMapNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadRefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadRefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadRefs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes a node on a road.  Nodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.  They are sort of like an \"intersection\". */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Describes a node on a road.  Nodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.  They are sort of like an \"intersection\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\n\x09    road where this node exists */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\n          road where this node exists" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs = { "RoadRefs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapNode, RoadRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_Inner = { "RoadRefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoadRef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewProp_RoadRefs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapNode",
		sizeof(FStreetMapNode),
		alignof(FStreetMapNode),
		Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapNode"), sizeof(FStreetMapNode), Get_Z_Construct_UScriptStruct_FStreetMapNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapNode_Hash() { return 2972583643U; }
class UScriptStruct* FStreetMapRoadRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadRef, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapRoadRef>()
{
	return FStreetMapRoadRef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoadRef(FStreetMapRoadRef::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoadRef"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoadRef")),new UScriptStruct::TCppStructOps<FStreetMapRoadRef>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoadRef;
	struct Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadPointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoadPointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoadIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Nodes have a list of road refs, one for each road that intersects this node.  Each road ref references a road and also the \n    point along that road where this node exists. */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Nodes have a list of road refs, one for each road that intersects this node.  Each road ref references a road and also the\n   point along that road where this node exists." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadRef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Index of the point along road where this node exists */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Index of the point along road where this node exists" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex = { "RoadPointIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoadRef, RoadPointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Index of road in the list of all roads in this street map */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Index of road in the list of all roads in this street map" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex = { "RoadIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoadRef, RoadIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadPointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewProp_RoadIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapRoadRef",
		sizeof(FStreetMapRoadRef),
		alignof(FStreetMapRoadRef),
		Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoadRef"), sizeof(FStreetMapRoadRef), Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoadRef_Hash() { return 2061159981U; }
class UScriptStruct* FStreetMapRoad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoad, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapRoad>()
{
	return FStreetMapRoad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapRoad(FStreetMapRoad::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapRoad"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapRoad")),new UScriptStruct::TCppStructOps<FStreetMapRoad>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapRoad;
	struct Z_Construct_UScriptStruct_FStreetMapRoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOneWay_MetaData[];
#endif
		static void NewProp_bIsOneWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOneWay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoadType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoadName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A road */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A road" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoad>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array. */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_SetBit(void* Obj)
	{
		((FStreetMapRoad*)Obj)->bIsOneWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay = { "bIsOneWay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreetMapRoad), &Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (max) of this road's points */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this road's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (min) of this road's points */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this road's points" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** List of all of the points on this road, one for each node in the NodeIndices list */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all of the points on this road, one for each node in the NodeIndices list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints = { "RoadPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, RoadPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_Inner = { "RoadPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Nodes along this road, one at each point in the RoadPoints list */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Nodes along this road, one at each point in the RoadPoints list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices = { "NodeIndices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, NodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_Inner = { "NodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Type of road */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Type of road" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType = { "RoadType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, RoadType), Z_Construct_UEnum_StreetMapRuntime_EStreetMapRoadType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Name of the road */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Name of the road" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName = { "RoadName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapRoad, RoadName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_bIsOneWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_NodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewProp_RoadName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapRoad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapRoad",
		sizeof(FStreetMapRoad),
		alignof(FStreetMapRoad),
		Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapRoad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapRoad"), sizeof(FStreetMapRoad), Get_Z_Construct_UScriptStruct_FStreetMapRoad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapRoad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapRoad_Hash() { return 2803346581U; }
class UScriptStruct* FStreetMapMeshBuildSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapMeshBuildSettings>()
{
	return FStreetMapMeshBuildSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapMeshBuildSettings(FStreetMapMeshBuildSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapMeshBuildSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapMeshBuildSettings")),new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapMeshBuildSettings;
	struct Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderLinearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildingBorderLinearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighwayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighwayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighwayThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighwayThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MajorRoadColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MajorRoadColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MajorRoadThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MajorRoadThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreetColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreetThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantLitBuildings_MetaData[];
#endif
		static void NewProp_bWantLitBuildings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantLitBuildings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingLevelFloorFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildingLevelFloorFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWant3DBuildings_MetaData[];
#endif
		static void NewProp_bWant3DBuildings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWant3DBuildings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadOffesetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadOffesetZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mesh generation settings */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Mesh generation settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Buildings border vertical offset */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Buildings border vertical offset" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ = { "BuildingBorderZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Building border vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Building border vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor = { "BuildingBorderLinearColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Streets Thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Streets Thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness = { "BuildingBorderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Highway vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Highway vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor = { "HighwayColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Highway thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Highway thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness = { "HighwayThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Major road vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Major road vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor = { "MajorRoadColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Major road thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Major road thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness = { "MajorRoadThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Street vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Street vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor = { "StreetColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Streets thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Streets thickness" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness = { "StreetThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**\n\x09* If true, buildings mesh will receive light information.\n\x09* Lit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry.\n\x09*/" },
		{ "DisplayName", "Lit buildings" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "If true, buildings mesh will receive light information.\nLit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWantLitBuildings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings = { "bWantLitBuildings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreetMapMeshBuildSettings), &Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** building level floor conversion factor in centimeters\n\x09\x09@todo: harmonize with OSMToCentimetersScaleFactor refactoring\n\x09*/" },
		{ "DisplayName", "Building Level Floor Factor" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "building level floor conversion factor in centimeters\n              @todo: harmonize with OSMToCentimetersScaleFactor refactoring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor = { "BuildingLevelFloorFactor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingLevelFloorFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** if true buildings mesh will be 3D instead of flat representation. */" },
		{ "DisplayName", "Create 3D Buildings" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "if true buildings mesh will be 3D instead of flat representation." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWant3DBuildings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings = { "bWant3DBuildings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreetMapMeshBuildSettings), &Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Roads base vertical offset */" },
		{ "DisplayName", "Road Vertical Offset" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Roads base vertical offset" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ = { "RoadOffesetZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, RoadOffesetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderLinearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingBorderThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_HighwayThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_MajorRoadThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_StreetThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWantLitBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_BuildingLevelFloorFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_bWant3DBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewProp_RoadOffesetZ,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapMeshBuildSettings",
		sizeof(FStreetMapMeshBuildSettings),
		alignof(FStreetMapMeshBuildSettings),
		Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapMeshBuildSettings"), sizeof(FStreetMapMeshBuildSettings), Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Hash() { return 582260362U; }
class UScriptStruct* FStreetMapCollisionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapCollisionSettings, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapCollisionSettings>()
{
	return FStreetMapCollisionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapCollisionSettings(FStreetMapCollisionSettings::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapCollisionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapCollisionSettings")),new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapCollisionSettings;
	struct Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bAllowDoubleSidedGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDoubleSidedGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollision_MetaData[];
#endif
		static void NewProp_bGenerateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**\n\x09*\x09If true, the physics triangle mesh will use double sided faces when doing scene queries.\n\x09*\x09This is useful for planes and single sided meshes that need traces to work on both sides.\n\x09*/" },
		{ "editcondition", "bGenerateCollision" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bAllowDoubleSidedGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry = { "bAllowDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreetMapCollisionSettings), &Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Uses triangle mesh data for collision data. (Cannot be used for physics simulation). */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Uses triangle mesh data for collision data. (Cannot be used for physics simulation)." },
	};
#endif
	void Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bGenerateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision = { "bGenerateCollision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreetMapCollisionSettings), &Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bAllowDoubleSidedGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewProp_bGenerateCollision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapCollisionSettings",
		sizeof(FStreetMapCollisionSettings),
		alignof(FStreetMapCollisionSettings),
		Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapCollisionSettings"), sizeof(FStreetMapCollisionSettings), Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Hash() { return 2727229909U; }
	void UStreetMap::StaticRegisterNativesUStreetMap()
	{
	}
	UClass* Z_Construct_UClass_UStreetMap_NoRegister()
	{
		return UStreetMap::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buildings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Buildings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roads;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A loaded street map */" },
		{ "IncludePath", "StreetMap.h" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "A loaded street map" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00220808000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (max) of this map's roads and buildings */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this map's roads and buildings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** 2D bounds (min) of this map's roads and buildings */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this map's roads and buildings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** List of all buildings on the street map */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of all buildings on the street map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreetMapNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** List of roads */" },
		{ "ModuleRelativePath", "Public/StreetMap.h" },
		{ "ToolTip", "List of roads" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMap, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreetMap_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_BoundsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Buildings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMap_Statics::NewProp_Roads_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMap_Statics::ClassParams = {
		&UStreetMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreetMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMap, 2106298732);
	template<> STREETMAPRUNTIME_API UClass* StaticClass<UStreetMap>()
	{
		return UStreetMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMap(Z_Construct_UClass_UStreetMap, &UStreetMap::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
