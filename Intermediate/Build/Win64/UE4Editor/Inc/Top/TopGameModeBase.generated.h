// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOP_TopGameModeBase_generated_h
#error "TopGameModeBase.generated.h already included, missing '#pragma once' in TopGameModeBase.h"
#endif
#define TOP_TopGameModeBase_generated_h

#define Top_Source_Top_TopGameModeBase_h_15_SPARSE_DATA
#define Top_Source_Top_TopGameModeBase_h_15_RPC_WRAPPERS
#define Top_Source_Top_TopGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Top_Source_Top_TopGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopGameModeBase(); \
	friend struct Z_Construct_UClass_ATopGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATopGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Top"), NO_API) \
	DECLARE_SERIALIZER(ATopGameModeBase)


#define Top_Source_Top_TopGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATopGameModeBase(); \
	friend struct Z_Construct_UClass_ATopGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATopGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Top"), NO_API) \
	DECLARE_SERIALIZER(ATopGameModeBase)


#define Top_Source_Top_TopGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopGameModeBase(ATopGameModeBase&&); \
	NO_API ATopGameModeBase(const ATopGameModeBase&); \
public:


#define Top_Source_Top_TopGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopGameModeBase(ATopGameModeBase&&); \
	NO_API ATopGameModeBase(const ATopGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopGameModeBase)


#define Top_Source_Top_TopGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Top_Source_Top_TopGameModeBase_h_12_PROLOG
#define Top_Source_Top_TopGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Top_Source_Top_TopGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Top_Source_Top_TopGameModeBase_h_15_SPARSE_DATA \
	Top_Source_Top_TopGameModeBase_h_15_RPC_WRAPPERS \
	Top_Source_Top_TopGameModeBase_h_15_INCLASS \
	Top_Source_Top_TopGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Top_Source_Top_TopGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Top_Source_Top_TopGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Top_Source_Top_TopGameModeBase_h_15_SPARSE_DATA \
	Top_Source_Top_TopGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Top_Source_Top_TopGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Top_Source_Top_TopGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOP_API UClass* StaticClass<class ATopGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Top_Source_Top_TopGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
