// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCar/Module/C_Wheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Wheel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Wheel();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Wheel_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularCar();
// End Cross Module References

// Begin Class AC_Wheel
void AC_Wheel::StaticRegisterNativesAC_Wheel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Wheel);
UClass* Z_Construct_UClass_AC_Wheel_NoRegister()
{
	return AC_Wheel::StaticClass();
}
struct Z_Construct_UClass_AC_Wheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Module/C_Wheel.h" },
		{ "ModuleRelativePath", "Module/C_Wheel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Wheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_Wheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularCar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Wheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Wheel_Statics::ClassParams = {
	&AC_Wheel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Wheel_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_Wheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_Wheel()
{
	if (!Z_Registration_Info_UClass_AC_Wheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Wheel.OuterSingleton, Z_Construct_UClass_AC_Wheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_Wheel.OuterSingleton;
}
template<> MODULARCAR_API UClass* StaticClass<AC_Wheel>()
{
	return AC_Wheel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Wheel);
AC_Wheel::~AC_Wheel() {}
// End Class AC_Wheel

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_Wheel, AC_Wheel::StaticClass, TEXT("AC_Wheel"), &Z_Registration_Info_UClass_AC_Wheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Wheel), 1742642456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_505389805(TEXT("/Script/ModularCar"),
	Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
