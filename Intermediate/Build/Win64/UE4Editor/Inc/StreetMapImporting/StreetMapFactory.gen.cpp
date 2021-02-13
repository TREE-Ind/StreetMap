// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMapImporting/Public/StreetMapFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreetMapFactory() {}
// Cross Module References
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapFactory_NoRegister();
	STREETMAPIMPORTING_API UClass* Z_Construct_UClass_UStreetMapFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_StreetMapImporting();
// End Cross Module References
	void UStreetMapFactory::StaticRegisterNativesUStreetMapFactory()
	{
	}
	UClass* Z_Construct_UClass_UStreetMapFactory_NoRegister()
	{
		return UStreetMapFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStreetMapFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreetMapFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StreetMapImporting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreetMapFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import factory object for OpenStreetMap assets\n */" },
		{ "IncludePath", "StreetMapFactory.h" },
		{ "ModuleRelativePath", "Public/StreetMapFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Import factory object for OpenStreetMap assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreetMapFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreetMapFactory_Statics::ClassParams = {
		&UStreetMapFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreetMapFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreetMapFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreetMapFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreetMapFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreetMapFactory, 3913751552);
	template<> STREETMAPIMPORTING_API UClass* StaticClass<UStreetMapFactory>()
	{
		return UStreetMapFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreetMapFactory(Z_Construct_UClass_UStreetMapFactory, &UStreetMapFactory::StaticClass, TEXT("/Script/StreetMapImporting"), TEXT("UStreetMapFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreetMapFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
