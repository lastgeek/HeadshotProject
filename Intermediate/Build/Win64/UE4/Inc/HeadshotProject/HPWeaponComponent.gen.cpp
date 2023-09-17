// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/HPWeaponComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPWeaponComponent() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPWeaponComponent_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
// End Cross Module References
	void UHPWeaponComponent::StaticRegisterNativesUHPWeaponComponent()
	{
	}
	UClass* Z_Construct_UClass_UHPWeaponComponent_NoRegister()
	{
		return UHPWeaponComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPWeaponComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPWeaponComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_Weapons = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Weapons"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Weapons, UHPWeaponComponent), 0x0040000000000000);
				UProperty* NewProp_Weapons_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Weapons, TEXT("Weapons"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AHPBaseWeapon_NoRegister());
				UProperty* NewProp_CurrentReloadAnimMontage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentReloadAnimMontage"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentReloadAnimMontage, UHPWeaponComponent), 0x0040000000000000, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_CurrentWeapon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWeapon, UHPWeaponComponent), 0x0040000000000000, Z_Construct_UClass_AHPBaseWeapon_NoRegister());
				UProperty* NewProp_CurrentWeaponIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWeaponIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CurrentWeaponIndex, UHPWeaponComponent), 0x0020080000000000);
				UProperty* NewProp_EquipAnimMontage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EquipAnimMontage"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EquipAnimMontage, UHPWeaponComponent), 0x0020080000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_WeaponArmorySocketName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponArmorySocketName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponArmorySocketName, UHPWeaponComponent), 0x0020080000000005);
				UProperty* NewProp_WeaponEquipSocketName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponEquipSocketName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponEquipSocketName, UHPWeaponComponent), 0x0020080000000005);
				UProperty* NewProp_WeaponData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(WeaponData, UHPWeaponComponent), 0x0020080000000005);
				UProperty* NewProp_WeaponData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_WeaponData, TEXT("WeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FWeaponData());
				static TCppClassTypeInfo<TCppClassTypeTraits<UHPWeaponComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Components/HPWeaponComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_Weapons, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_CurrentReloadAnimMontage, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_CurrentWeapon, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_CurrentWeaponIndex, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_EquipAnimMontage, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_EquipAnimMontage, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_WeaponArmorySocketName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponArmorySocketName, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_WeaponEquipSocketName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponEquipSocketName, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
				MetaData->SetValue(NewProp_WeaponData, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponData, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPWeaponComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPWeaponComponent, 1472515398);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPWeaponComponent(Z_Construct_UClass_UHPWeaponComponent, &UHPWeaponComponent::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
