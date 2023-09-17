// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HEADSHOTPROJECT_HPProjectile_generated_h
#error "HPProjectile.generated.h already included, missing '#pragma once' in HPProjectile.h"
#endif
#define HEADSHOTPROJECT_HPProjectile_generated_h

#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHPProjectile(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_AHPProjectile(); \
public: \
	DECLARE_CLASS(AHPProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(AHPProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHPProjectile(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_AHPProjectile(); \
public: \
	DECLARE_CLASS(AHPProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(AHPProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHPProjectile(AHPProjectile&&); \
	NO_API AHPProjectile(const AHPProjectile&); \
public:


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHPProjectile(AHPProjectile&&); \
	NO_API AHPProjectile(const AHPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHPProjectile)


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_PRIVATE_PROPERTY_OFFSET
#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_9_PROLOG
#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_RPC_WRAPPERS \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_INCLASS \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_INCLASS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HeadshotProject_Source_HeadshotProject_Public_Weapon_HPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
