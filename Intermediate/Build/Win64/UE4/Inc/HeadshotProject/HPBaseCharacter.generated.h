// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef HEADSHOTPROJECT_HPBaseCharacter_generated_h
#error "HPBaseCharacter.generated.h already included, missing '#pragma once' in HPBaseCharacter.h"
#endif
#define HEADSHOTPROJECT_HPBaseCharacter_generated_h

#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeandedHit) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeandedHit(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLeandedHit) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeandedHit(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHPBaseCharacter(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_AHPBaseCharacter(); \
public: \
	DECLARE_CLASS(AHPBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(AHPBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHPBaseCharacter(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_AHPBaseCharacter(); \
public: \
	DECLARE_CLASS(AHPBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(AHPBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHPBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHPBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHPBaseCharacter(AHPBaseCharacter&&); \
	NO_API AHPBaseCharacter(const AHPBaseCharacter&); \
public:


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHPBaseCharacter(AHPBaseCharacter&&); \
	NO_API AHPBaseCharacter(const AHPBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHPBaseCharacter)


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AHPBaseCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(AHPBaseCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(AHPBaseCharacter, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__HealthTextComponent() { return STRUCT_OFFSET(AHPBaseCharacter, HealthTextComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponComponent() { return STRUCT_OFFSET(AHPBaseCharacter, WeaponComponent); } \
	FORCEINLINE static uint32 __PPO__DeathAnimMontage() { return STRUCT_OFFSET(AHPBaseCharacter, DeathAnimMontage); } \
	FORCEINLINE static uint32 __PPO__LeandedDamage() { return STRUCT_OFFSET(AHPBaseCharacter, LeandedDamage); } \
	FORCEINLINE static uint32 __PPO__LeandedDamageVelicity() { return STRUCT_OFFSET(AHPBaseCharacter, LeandedDamageVelicity); }


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_9_PROLOG
#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_RPC_WRAPPERS \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_INCLASS \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HeadshotProject_Source_HeadshotProject_Public_Player_HPBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
