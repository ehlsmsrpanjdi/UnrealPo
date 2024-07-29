// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/C_Wheel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
#ifdef MODULARCAR_C_Wheel_generated_h
#error "C_Wheel.generated.h already included, missing '#pragma once' in C_Wheel.h"
#endif
#define MODULARCAR_C_Wheel_generated_h

#define FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWheelSet);


#define FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Wheel(); \
	friend struct Z_Construct_UClass_AC_Wheel_Statics; \
public: \
	DECLARE_CLASS(AC_Wheel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularCar"), NO_API) \
	DECLARE_SERIALIZER(AC_Wheel)


#define FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_Wheel(AC_Wheel&&); \
	AC_Wheel(const AC_Wheel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Wheel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Wheel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Wheel) \
	NO_API virtual ~AC_Wheel();


#define FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_9_PROLOG
#define FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_INCLASS_NO_PURE_DECLS \
	FID_ModularCar_Source_ModularCar_Module_C_Wheel_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARCAR_API UClass* StaticClass<class AC_Wheel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModularCar_Source_ModularCar_Module_C_Wheel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
