// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HPCoreTypes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPCoreTypes() {}
// Cross Module References
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
// End Cross Module References
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADSHOTPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_HeadshotProject(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/HeadshotProject"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponData
{
	FScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponData")),new UScriptStruct::TCppStructOps<FWeaponData>);
	}
} ScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponData;
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HeadshotProject();
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWeaponData>, EStructFlags(0x00000001));
			UProperty* NewProp_ReloadAnimMontage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ReloadAnimMontage"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReloadAnimMontage, FWeaponData), 0x0010000000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
			UProperty* NewProp_WeaponClass = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WeaponClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WeaponClass, FWeaponData), 0x0014000000000005, Z_Construct_UClass_AHPBaseWeapon_NoRegister(), Z_Construct_UClass_UClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_ReloadAnimMontage, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(NewProp_ReloadAnimMontage, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_WeaponClass, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(NewProp_WeaponClass, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC() { return 3698250470U; }
class UScriptStruct* FWeaponUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADSHOTPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponUIData, Z_Construct_UPackage__Script_HeadshotProject(), TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponUIData(FWeaponUIData::StaticStruct, TEXT("/Script/HeadshotProject"), TEXT("WeaponUIData"), false, nullptr, nullptr);
static struct FScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponUIData
{
	FScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponUIData")),new UScriptStruct::TCppStructOps<FWeaponUIData>);
	}
} ScriptStruct_HeadshotProject_StaticRegisterNativesFWeaponUIData;
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HeadshotProject();
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WeaponUIData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWeaponUIData>, EStructFlags(0x00000001));
			UProperty* NewProp_CrossHairIcon = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CrossHairIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CrossHairIcon, FWeaponUIData), 0x0010000000010005, Z_Construct_UClass_UTexture2D_NoRegister());
			UProperty* NewProp_MainIcon = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MainIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MainIcon, FWeaponUIData), 0x0010000000010005, Z_Construct_UClass_UTexture2D_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_CrossHairIcon, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(NewProp_CrossHairIcon, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_MainIcon, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(NewProp_MainIcon, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_CRC() { return 959566682U; }
class UScriptStruct* FAmmoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HEADSHOTPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FAmmoData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoData, Z_Construct_UPackage__Script_HeadshotProject(), TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmmoData(FAmmoData::StaticStruct, TEXT("/Script/HeadshotProject"), TEXT("AmmoData"), false, nullptr, nullptr);
static struct FScriptStruct_HeadshotProject_StaticRegisterNativesFAmmoData
{
	FScriptStruct_HeadshotProject_StaticRegisterNativesFAmmoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AmmoData")),new UScriptStruct::TCppStructOps<FAmmoData>);
	}
} ScriptStruct_HeadshotProject_StaticRegisterNativesFAmmoData;
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HeadshotProject();
		extern uint32 Get_Z_Construct_UScriptStruct_FAmmoData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AmmoData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAmmoData>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsInfinit, FAmmoData);
			UProperty* NewProp_bIsInfinit = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsInfinit"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsInfinit, FAmmoData), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bIsInfinit, FAmmoData), sizeof(bool), true);
			UProperty* NewProp_Clips = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Clips"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Clips, FAmmoData), 0x0010000000000015);
			UProperty* NewProp_Bullets = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bullets"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Bullets, FAmmoData), 0x0010000000000015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_bIsInfinit, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(NewProp_bIsInfinit, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_Clips, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(NewProp_Clips, TEXT("EditCondition"), TEXT("!bIsInfinit"));
			MetaData->SetValue(NewProp_Clips, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
			MetaData->SetValue(NewProp_Bullets, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(NewProp_Bullets, TEXT("ModuleRelativePath"), TEXT("Public/HPCoreTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmmoData_CRC() { return 1910807420U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
