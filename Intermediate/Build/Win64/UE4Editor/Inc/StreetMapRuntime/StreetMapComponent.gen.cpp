// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapComponent() {}
// Cross Module References
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings();
	STREETMAPRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStreetMapComponent::execSetStreetMap)
	{
		P_GET_OBJECT(UStreetMap,Z_Param_NewStreetMap);
		P_GET_UBOOL(Z_Param_bClearPreviousMeshIfAny);
		P_GET_UBOOL(Z_Param_bRebuildMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStreetMap(Z_Param_NewStreetMap,Z_Param_bClearPreviousMeshIfAny,Z_Param_bRebuildMesh);
		P_NATIVE_END;
	}
	void UStreetMapComponent::StaticRegisterNativesUStreetMapComponent()
	{
		UClass* Class = UStreetMapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStreetMap", &UStreetMapComponent::execSetStreetMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics
	{
		struct StreetMapComponent_eventSetStreetMap_Parms
		{
			UStreetMap* NewStreetMap;
			bool bClearPreviousMeshIfAny;
			bool bRebuildMesh;
		};
		static void NewProp_bRebuildMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildMesh;
		static void NewProp_bClearPreviousMeshIfAny_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearPreviousMeshIfAny;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewStreetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh_SetBit(void* Obj)
	{
		((StreetMapComponent_eventSetStreetMap_Parms*)Obj)->bRebuildMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh = { "bRebuildMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreetMapComponent_eventSetStreetMap_Parms), &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny_SetBit(void* Obj)
	{
		((StreetMapComponent_eventSetStreetMap_Parms*)Obj)->bClearPreviousMeshIfAny = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny = { "bClearPreviousMeshIfAny", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreetMapComponent_eventSetStreetMap_Parms), &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_NewStreetMap = { "NewStreetMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreetMapComponent_eventSetStreetMap_Parms, NewStreetMap), Z_Construct_UClass_UStreetMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bRebuildMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_bClearPreviousMeshIfAny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::NewProp_NewStreetMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**\n\x09 * Assigns a street map asset to this component.  Render state will be updated immediately.\n\x09 *\n\x09 * @param NewStreetMap The street map to use\n\x09 *\n\x09 * @param bRebuildMesh : Rebuilds map mesh based on the new map asset\n\x09 *\n\x09 * @return Sets the street map object\n\x09 */" },
		{ "CPP_Default_bClearPreviousMeshIfAny", "false" },
		{ "CPP_Default_bRebuildMesh", "false" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Assigns a street map asset to this component.  Render state will be updated immediately.\n\n@param NewStreetMap The street map to use\n\n@param bRebuildMesh : Rebuilds map mesh based on the new map asset\n\n@return Sets the street map object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreetMapComponent, nullptr, "SetStreetMap", nullptr, nullptr, sizeof(StreetMapComponent_eventSetStreetMap_Parms), Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreetMapComponent_SetStreetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreetMapComponent_SetStreetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister()
	{
		return UStreetMapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMapDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMapDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMapBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMapBodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBuildSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreetMapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreetMapComponent_SetStreetMap, "SetStreetMap" }, // 1564768564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * Component that represents a section of street map roads and buildings\n */" },
		{ "HideCategories", "Physics Mobility Trigger" },
		{ "IncludePath", "StreetMapComponent.h" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that represents a section of street map roads and buildings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData[] = {
		{ "Comment", "/** Cached StreetMap DefaultMaterial */" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached StreetMap DefaultMaterial" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial = { "StreetMapDefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, StreetMapDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData[] = {
		{ "Comment", "/** Cached bounding box */" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached bounding box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds = { "CachedLocalBounds", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, CachedLocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData[] = {
		{ "Comment", "/** Cached raw mesh triangle indices */" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached raw mesh triangle indices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData[] = {
		{ "Comment", "/** Cached raw mesh vertices */" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "Cached raw mesh vertices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreetMapVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData[] = {
		{ "Comment", "//** Physics data for mesh collision. */\n" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "/ Physics data for mesh collision." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup = { "StreetMapBodySetup", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, StreetMapBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, CollisionSettings), Z_Construct_UScriptStruct_FStreetMapCollisionSettings, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings = { "MeshBuildSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, MeshBuildSettings), Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** The street map we're representing. */" },
		{ "ModuleRelativePath", "Public/StreetMapComponent.h" },
		{ "ToolTip", "The street map we're representing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreetMapComponent, StreetMap), Z_Construct_UClass_UStreetMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CachedLocalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMapBodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_CollisionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_MeshBuildSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreetMapComponent_Statics::NewProp_StreetMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStreetMapComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStreetMapComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMapComponent_Statics::ClassParams = {
		&UStreetMapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapComponent, 4247741289);
	template<> STREETMAPRUNTIME_API UClass* StaticClass<UStreetMapComponent>()
	{
		return UStreetMapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapComponent(Z_Construct_UClass_UStreetMapComponent, &UStreetMapComponent::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("UStreetMapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
