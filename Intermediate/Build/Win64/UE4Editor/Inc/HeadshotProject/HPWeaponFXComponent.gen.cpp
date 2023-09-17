// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/Components/HPWeaponFXComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPWeaponFXComponent() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPWeaponFXComponent_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPWeaponFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UHPWeaponFXComponent::StaticRegisterNativesUHPWeaponFXComponent()
	{
	}
	UClass* Z_Construct_UClass_UHPWeaponFXComponent_NoRegister()
	{
		return UHPWeaponFXComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPWeaponFXComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPWeaponFXComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_EffectsMap = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EffectsMap"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(EffectsMap, UHPWeaponFXComponent), 0x0020080000000001);
				UProperty* NewProp_EffectsMap_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_EffectsMap, TEXT("EffectsMap_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000001, Z_Construct_UClass_UPhysicalMaterial_NoRegister());
				UProperty* NewProp_EffectsMap_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_EffectsMap, TEXT("EffectsMap"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_DefaultEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DefaultEffect, UHPWeaponFXComponent), 0x0020080000000001, Z_Construct_UClass_UParticleSystem_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UHPWeaponFXComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/Components/HPWeaponFXComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Components/HPWeaponFXComponent.h"));
				MetaData->SetValue(NewProp_EffectsMap, TEXT("Category"), TEXT("VFX"));
				MetaData->SetValue(NewProp_EffectsMap, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Components/HPWeaponFXComponent.h"));
				MetaData->SetValue(NewProp_DefaultEffect, TEXT("Category"), TEXT("VFX"));
				MetaData->SetValue(NewProp_DefaultEffect, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Components/HPWeaponFXComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPWeaponFXComponent, 3819537469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPWeaponFXComponent(Z_Construct_UClass_UHPWeaponFXComponent, &UHPWeaponFXComponent::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPWeaponFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPWeaponFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
