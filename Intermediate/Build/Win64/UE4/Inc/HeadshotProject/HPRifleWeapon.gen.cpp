// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/HPRifleWeapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPRifleWeapon() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPRifleWeapon_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPRifleWeapon();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void AHPRifleWeapon::StaticRegisterNativesAHPRifleWeapon()
	{
	}
	UClass* Z_Construct_UClass_AHPRifleWeapon_NoRegister()
	{
		return AHPRifleWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPRifleWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHPBaseWeapon();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPRifleWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_BulletSpread = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BulletSpread"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BulletSpread, AHPRifleWeapon), 0x0010000000000015);
				UProperty* NewProp_ShotRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShotRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ShotRate, AHPRifleWeapon), 0x0010000000000015);
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPRifleWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/HPRifleWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPRifleWeapon.h"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("Category"), TEXT("Shot Settings"));
				MetaData->SetValue(NewProp_BulletSpread, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPRifleWeapon.h"));
				MetaData->SetValue(NewProp_ShotRate, TEXT("Category"), TEXT("Shot Settings"));
				MetaData->SetValue(NewProp_ShotRate, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPRifleWeapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPRifleWeapon, 1409915623);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPRifleWeapon(Z_Construct_UClass_AHPRifleWeapon, &AHPRifleWeapon::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPRifleWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPRifleWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
