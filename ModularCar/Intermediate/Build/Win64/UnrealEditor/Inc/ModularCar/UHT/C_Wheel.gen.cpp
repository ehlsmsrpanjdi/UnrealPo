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
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Wheel();
MODULARCAR_API UClass* Z_Construct_UClass_AC_Wheel_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularCar();
// End Cross Module References

// Begin Class AC_Wheel Function WheelSet
struct Z_Construct_UFunction_AC_Wheel_WheelSet_Statics
{
	struct C_Wheel_eventWheelSet_Parms
	{
		UPhysicsConstraintComponent* _Axis;
		UPhysicsConstraintComponent* _Suspension;
		UPrimitiveComponent* _Body;
		UPrimitiveComponent* _Wheel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Module/C_Wheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Axis_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Suspension_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Body_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Wheel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Axis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Suspension;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Wheel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Axis = { "_Axis", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Wheel_eventWheelSet_Parms, _Axis), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Axis_MetaData), NewProp__Axis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Suspension = { "_Suspension", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Wheel_eventWheelSet_Parms, _Suspension), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Suspension_MetaData), NewProp__Suspension_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Body = { "_Body", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Wheel_eventWheelSet_Parms, _Body), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Body_MetaData), NewProp__Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Wheel = { "_Wheel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_Wheel_eventWheelSet_Parms, _Wheel), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Wheel_MetaData), NewProp__Wheel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Suspension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::NewProp__Wheel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Wheel, nullptr, "WheelSet", nullptr, nullptr, Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::C_Wheel_eventWheelSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::C_Wheel_eventWheelSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_Wheel_WheelSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Wheel_WheelSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_Wheel::execWheelSet)
{
	P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param__Axis);
	P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param__Suspension);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__Body);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__Wheel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WheelSet(Z_Param__Axis,Z_Param__Suspension,Z_Param__Body,Z_Param__Wheel);
	P_NATIVE_END;
}
// End Class AC_Wheel Function WheelSet

// Begin Class AC_Wheel
void AC_Wheel::StaticRegisterNativesAC_Wheel()
{
	UClass* Class = AC_Wheel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WheelSet", &AC_Wheel::execWheelSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))\n//USceneComponent* DefaultSceneRoot = nullptr;\n" },
#endif
		{ "ModuleRelativePath", "Module/C_Wheel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))\nUSceneComponent* DefaultSceneRoot = nullptr;" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Wheel_WheelSet, "WheelSet" }, // 1022217750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Wheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AC_Wheel_Statics::NewProp_IsInit_SetBit(void* Obj)
{
	((AC_Wheel*)Obj)->IsInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_Wheel_Statics::NewProp_IsInit = { "IsInit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Wheel), &Z_Construct_UClass_AC_Wheel_Statics::NewProp_IsInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInit_MetaData), NewProp_IsInit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Wheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Wheel_Statics::NewProp_IsInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Wheel_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AC_Wheel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_Wheel_Statics::PropPointers),
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
		{ Z_Construct_UClass_AC_Wheel, AC_Wheel::StaticClass, TEXT("AC_Wheel"), &Z_Registration_Info_UClass_AC_Wheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Wheel), 3178426254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_2844386764(TEXT("/Script/ModularCar"),
	Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
