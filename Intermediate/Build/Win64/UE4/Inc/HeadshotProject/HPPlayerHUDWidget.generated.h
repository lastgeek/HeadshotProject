// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
struct FWeaponUIData;
#ifdef HEADSHOTPROJECT_HPPlayerHUDWidget_generated_h
#error "HPPlayerHUDWidget.generated.h already included, missing '#pragma once' in HPPlayerHUDWidget.h"
#endif
#define HEADSHOTPROJECT_HPPlayerHUDWidget_generated_h

#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayerCanFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerCanFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerSpectating(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_CurrentAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCurrentAmmo(Z_Param_Out_CurrentAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponUIData) \
	{ \
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetWeaponUIData(Z_Param_Out_UIData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthProcent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthProcent(); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayerCanFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerCanFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerSpectating(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_CurrentAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCurrentAmmo(Z_Param_Out_CurrentAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeaponUIData) \
	{ \
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetWeaponUIData(Z_Param_Out_UIData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthProcent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthProcent(); \
		P_NATIVE_END; \
	}


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHPPlayerHUDWidget(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_UHPPlayerHUDWidget(); \
public: \
	DECLARE_CLASS(UHPPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(UHPPlayerHUDWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHPPlayerHUDWidget(); \
	friend HEADSHOTPROJECT_API class UClass* Z_Construct_UClass_UHPPlayerHUDWidget(); \
public: \
	DECLARE_CLASS(UHPPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HeadshotProject"), NO_API) \
	DECLARE_SERIALIZER(UHPPlayerHUDWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHPPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHPPlayerHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPPlayerHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPPlayerHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHPPlayerHUDWidget(UHPPlayerHUDWidget&&); \
	NO_API UHPPlayerHUDWidget(const UHPPlayerHUDWidget&); \
public:


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHPPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHPPlayerHUDWidget(UHPPlayerHUDWidget&&); \
	NO_API UHPPlayerHUDWidget(const UHPPlayerHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHPPlayerHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHPPlayerHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHPPlayerHUDWidget)


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_10_PROLOG
#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_RPC_WRAPPERS \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_INCLASS \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
	HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HeadshotProject_Source_HeadshotProject_Public_UI_HPPlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
