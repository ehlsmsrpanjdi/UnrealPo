// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularCarGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARCAR_ModularCarGameMode_generated_h
#error "ModularCarGameMode.generated.h already included, missing '#pragma once' in ModularCarGameMode.h"
#endif
#define MODULARCAR_ModularCarGameMode_generated_h

#define FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularCarGameMode(); \
	friend struct Z_Construct_UClass_AModularCarGameMode_Statics; \
public: \
	DECLARE_CLASS(AModularCarGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularCar"), MODULARCAR_API) \
	DECLARE_SERIALIZER(AModularCarGameMode)


#define FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularCarGameMode(AModularCarGameMode&&); \
	AModularCarGameMode(const AModularCarGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARCAR_API, AModularCarGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularCarGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModularCarGameMode) \
	MODULARCAR_API virtual ~AModularCarGameMode();


#define FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_9_PROLOG
#define FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_ModularCar_Source_ModularCar_ModularCarGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARCAR_API UClass* StaticClass<class AModularCarGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModularCar_Source_ModularCar_ModularCarGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
