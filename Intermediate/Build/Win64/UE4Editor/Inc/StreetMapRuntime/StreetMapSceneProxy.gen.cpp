// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMapSceneProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapSceneProxy() {}
// Cross Module References
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FStreetMapVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STREETMAPRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapVertex, Z_Construct_UPackage__Script_StreetMapRuntime(), TEXT("StreetMapVertex"), sizeof(FStreetMapVertex), Get_Z_Construct_UScriptStruct_FStreetMapVertex_Hash());
	}
	return Singleton;
}
template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<FStreetMapVertex>()
{
	return FStreetMapVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreetMapVertex(FStreetMapVertex::StaticStruct, TEXT("/Script/StreetMapRuntime"), TEXT("StreetMapVertex"), false, nullptr, nullptr);
static struct FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex
{
	FScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreetMapVertex")),new UScriptStruct::TCppStructOps<FStreetMapVertex>);
	}
} ScriptStruct_StreetMapRuntime_StaticRegisterNativesFStreetMapVertex;
	struct Z_Construct_UScriptStruct_FStreetMapVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\x09""A single vertex on a street map mesh */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "A single vertex on a street map mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/** Color */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "Color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentZ_MetaData[] = {
		{ "Comment", "/** Tangent vector Z (normal) */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "Tangent vector Z (normal)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentZ = { "TangentZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapVertex, TangentZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentX_MetaData[] = {
		{ "Comment", "/** Tangent vector X */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "Tangent vector X" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapVertex, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TextureCoordinate_MetaData[] = {
		{ "Comment", "/** Texture coordinate */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "Texture coordinate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TextureCoordinate = { "TextureCoordinate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapVertex, TextureCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TextureCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TextureCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Location of the vertex in local space */" },
		{ "ModuleRelativePath", "Public/StreetMapSceneProxy.h" },
		{ "ToolTip", "Location of the vertex in local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreetMapVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreetMapVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TangentX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_TextureCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreetMapVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
		nullptr,
		&NewStructOps,
		"StreetMapVertex",
		sizeof(FStreetMapVertex),
		alignof(FStreetMapVertex),
		Z_Construct_UScriptStruct_FStreetMapVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreetMapVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StreetMapRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreetMapVertex"), sizeof(FStreetMapVertex), Get_Z_Construct_UScriptStruct_FStreetMapVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreetMapVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreetMapVertex_Hash() { return 385970294U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
