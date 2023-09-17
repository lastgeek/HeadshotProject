// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Pickups/HPHealthPickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPHealthPickup() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPHealthPickup_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPHealthPickup();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBasePickup();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void AHPHealthPickup::StaticRegisterNativesAHPHealthPickup()
	{
	}
	UClass* Z_Construct_UClass_AHPHealthPickup_NoRegister()
	{
		return AHPHealthPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPHealthPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHPBasePickup();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPHealthPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_HealAmount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HealAmount, AHPHealthPickup), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPHealthPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickups/HPHealthPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPHealthPickup.h"));
				MetaData->SetValue(NewProp_HealAmount, TEXT("Category"), TEXT("Health Pickup"));
				MetaData->SetValue(NewProp_HealAmount, TEXT("ClampMax"), TEXT("100.0"));
				MetaData->SetValue(NewProp_HealAmount, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_HealAmount, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPHealthPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPHealthPickup, 1825735823);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPHealthPickup(Z_Construct_UClass_AHPHealthPickup, &AHPHealthPickup::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPHealthPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPHealthPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
