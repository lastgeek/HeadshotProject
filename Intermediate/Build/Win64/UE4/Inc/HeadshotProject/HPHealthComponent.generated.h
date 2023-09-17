// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef HEADSHOTPROJECT_HPHealthComponent_generated_h
#error "HPHealthComponent.generated.h already included, missing '#pragma once' in HPHealthComponent.h"
#endif
#define HEADSHOTPROJECT_HPHealthComponent_generated_h

#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthProcent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthProcent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDead(); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthProcent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthProcent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsDead(); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHPHealthComponent(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_UHPHealthComponent(); \
public: \
	DECLARE_CLASS(UHPHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(UHPHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHPHealthComponent(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_UHPHealthComponent(); \
public: \
	DECLARE_CLASS(UHPHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(UHPHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHPHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHPHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHPHealthComponent(UHPHealthComponent&&); \
	NO_API UHPHealthComponent(const UHPHealthComponent&); \
public:


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHPHealthComponent(UHPHealthComponent&&); \
	NO_API UHPHealthComponent(const UHPHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHPHealthComponent)


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_10_PROLOG
#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_RPC_WRAPPERS \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_INCLASS \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HeadshotProject_Source_HeadshotProject_Public_Components_HPHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
