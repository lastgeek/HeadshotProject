// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/HPBaseWeapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPBaseWeapon() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AHPBaseWeapon::StaticRegisterNativesAHPBaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_AHPBaseWeapon_NoRegister()
	{
		return AHPBaseWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPBaseWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPBaseWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_UIData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UIData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UIData, AHPBaseWeapon), 0x0020080000000015, Z_Construct_UScriptStruct_FWeaponUIData());
				UProperty* NewProp_DefaultAmmo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DefaultAmmo, AHPBaseWeapon), 0x0010000000000015, Z_Construct_UScriptStruct_FAmmoData());
				UProperty* NewProp_DamageAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DamageAmount, AHPBaseWeapon), 0x0010000000000015);
				UProperty* NewProp_TraceMaxDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceMaxDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TraceMaxDistance, AHPBaseWeapon), 0x0010000000000015);
				UProperty* NewProp_WeaponMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponMesh, AHPBaseWeapon), 0x00100000000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPBaseWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(NewProp_UIData, TEXT("Category"), TEXT("UI Settings"));
				MetaData->SetValue(NewProp_UIData, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(NewProp_DefaultAmmo, TEXT("Category"), TEXT("Weapon Settings"));
				MetaData->SetValue(NewProp_DefaultAmmo, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(NewProp_DamageAmount, TEXT("Category"), TEXT("Shot Settings"));
				MetaData->SetValue(NewProp_DamageAmount, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(NewProp_TraceMaxDistance, TEXT("Category"), TEXT("Shot Settings"));
				MetaData->SetValue(NewProp_TraceMaxDistance, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("Category"), TEXT("HPBaseWeapon"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponMesh, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPBaseWeapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPBaseWeapon, 2684387843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPBaseWeapon(Z_Construct_UClass_AHPBaseWeapon, &AHPBaseWeapon::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPBaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPBaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
