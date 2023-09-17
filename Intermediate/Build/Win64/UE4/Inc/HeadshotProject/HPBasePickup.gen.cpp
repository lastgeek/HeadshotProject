// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Pickups/HPBasePickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPBasePickup() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBasePickup_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBasePickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AHPBasePickup::StaticRegisterNativesAHPBasePickup()
	{
	}
	UClass* Z_Construct_UClass_AHPBasePickup_NoRegister()
	{
		return AHPBasePickup::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPBasePickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPBasePickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_RespawnTimerRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RespawnTimerRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RespawnTimerRate, AHPBasePickup), 0x0010000000000015);
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AHPBasePickup), 0x00100000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPBasePickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickups/HPBasePickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPBasePickup.h"));
				MetaData->SetValue(NewProp_RespawnTimerRate, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_RespawnTimerRate, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPBasePickup.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("Public/Pickups/HPBasePickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPBasePickup, 2769572047);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPBasePickup(Z_Construct_UClass_AHPBasePickup, &AHPBasePickup::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPBasePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPBasePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
