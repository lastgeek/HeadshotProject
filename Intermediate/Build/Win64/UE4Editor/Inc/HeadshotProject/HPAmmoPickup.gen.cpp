// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Pickups/HPAmmoPickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPAmmoPickup() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPAmmoPickup_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPAmmoPickup();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBasePickup();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AHPAmmoPickup::StaticRegisterNativesAHPAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_AHPAmmoPickup_NoRegister()
	{
		return AHPAmmoPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPAmmoPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHPBasePickup();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPAmmoPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_WeaponType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WeaponType, AHPAmmoPickup), 0x0014000000000005, Z_Construct_UClass_AHPBaseWeapon_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_ClipsAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClipsAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ClipsAmount, AHPAmmoPickup), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPAmmoPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickups/HPAmmoPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPAmmoPickup.h"));
				MetaData->SetValue(NewProp_WeaponType, TEXT("Category"), TEXT("Ammo Pickup"));
				MetaData->SetValue(NewProp_WeaponType, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPAmmoPickup.h"));
				MetaData->SetValue(NewProp_ClipsAmount, TEXT("Category"), TEXT("Ammo Pickup"));
				MetaData->SetValue(NewProp_ClipsAmount, TEXT("ClampMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_ClipsAmount, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_ClipsAmount, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPAmmoPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPAmmoPickup, 2210895097);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPAmmoPickup(Z_Construct_UClass_AHPAmmoPickup, &AHPAmmoPickup::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
