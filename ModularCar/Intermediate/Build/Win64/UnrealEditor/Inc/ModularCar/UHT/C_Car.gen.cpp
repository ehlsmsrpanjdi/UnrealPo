// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCar/Module/C_Car.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Car() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Car();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Car_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularCar();
// End Cross Module References

// Begin Class AC_Car
void AC_Car::StaticRegisterNativesAC_Car()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Car);
UClass* Z_Construct_UClass_AC_Car_NoRegister()
{
	return AC_Car::StaticClass();
}
struct Z_Construct_UClass_AC_Car_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Module/C_Car.h" },
		{ "ModuleRelativePath", "Module/C_Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Car_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "C_Car" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Module/C_Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "C_Car" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Module/C_Car.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Car_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Car>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Car_Statics::NewProp_Car_Mesh = { "Car_Mesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Car, Car_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Car_Mesh_MetaData), NewProp_Car_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Car_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Car, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Car_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Car_Statics::NewProp_Car_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Car_Statics::NewProp_DefaultSceneRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Car_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_Car_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularCar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Car_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Car_Statics::ClassParams = {
	&AC_Car::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_Car_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_Car_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Car_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_Car_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_Car()
{
	if (!Z_Registration_Info_UClass_AC_Car.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Car.OuterSingleton, Z_Construct_UClass_AC_Car_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_Car.OuterSingleton;
}
template<> MODULARCAR_API UClass* StaticClass<AC_Car>()
{
	return AC_Car::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Car);
AC_Car::~AC_Car() {}
// End Class AC_Car

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Car_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_Car, AC_Car::StaticClass, TEXT("AC_Car"), &Z_Registration_Info_UClass_AC_Car, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Car), 2953785987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Car_h_4235906630(TEXT("/Script/ModularCar"),
	Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Car_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Car_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
