// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularCarCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARCAR_ModularCarCharacter_generated_h
#error "ModularCarCharacter.generated.h already included, missing '#pragma once' in ModularCarCharacter.h"
#endif
#define MODULARCAR_ModularCarCharacter_generated_h

#define FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularCarCharacter(); \
	friend struct Z_Construct_UClass_AModularCarCharacter_Statics; \
public: \
	DECLARE_CLASS(AModularCarCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularCar"), NO_API) \
	DECLARE_SERIALIZER(AModularCarCharacter)


#define FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularCarCharacter(AModularCarCharacter&&); \
	AModularCarCharacter(const AModularCarCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularCarCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularCarCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModularCarCharacter) \
	NO_API virtual ~AModularCarCharacter();


#define FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_18_PROLOG
#define FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_ModularCar_Source_ModularCar_ModularCarCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARCAR_API UClass* StaticClass<class AModularCarCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModularCar_Source_ModularCar_ModularCarCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
