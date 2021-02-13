// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapRuntime/Public/StreetMapActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapActor() {}
// Cross Module References
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_AStreetMapActor_NoRegister();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_AStreetMapActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StreetMapRuntime();
	STREETMAPRUNTIME_API UClass* Z_Construct_UClass_UStreetMapComponent_NoRegister();
// End Cross Module References
	void AStreetMapActor::StaticRegisterNativesAStreetMapActor()
	{
	}
	UClass* Z_Construct_UClass_AStreetMapActor_NoRegister()
	{
		return AStreetMapActor::StaticClass();
	}
	struct Z_Construct_UClass_AStreetMapActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreetMapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreetMapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStreetMapActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreetMapActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An actor that renders a street map mesh component */" },
		{ "HideCategories", "Physics" },
		{ "IncludePath", "StreetMapActor.h" },
		{ "ModuleRelativePath", "Public/StreetMapActor.h" },
		{ "ToolTip", "An actor that renders a street map mesh component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStreetMapActor_Statics::NewProp_StreetMapComponent_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**  Component that represents a section of street map roads and buildings */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreetMapActor.h" },
		{ "ToolTip", "Component that represents a section of street map roads and buildings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStreetMapActor_Statics::NewProp_StreetMapComponent = { "StreetMapComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStreetMapActor, StreetMapComponent), Z_Construct_UClass_UStreetMapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStreetMapActor_Statics::NewProp_StreetMapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStreetMapActor_Statics::NewProp_StreetMapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStreetMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStreetMapActor_Statics::NewProp_StreetMapComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStreetMapActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStreetMapActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStreetMapActor_Statics::ClassParams = {
		&AStreetMapActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStreetMapActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStreetMapActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStreetMapActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStreetMapActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStreetMapActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStreetMapActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStreetMapActor, 2150353396);
	template<> STREETMAPRUNTIME_API UClass* StaticClass<AStreetMapActor>()
	{
		return AStreetMapActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStreetMapActor(Z_Construct_UClass_AStreetMapActor, &AStreetMapActor::StaticClass, TEXT("/Script/StreetMapRuntime"), TEXT("AStreetMapActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStreetMapActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
