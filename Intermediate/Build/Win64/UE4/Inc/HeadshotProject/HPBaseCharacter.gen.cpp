// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Player/HPBaseCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPBaseCharacter() {}
// Cross Module References
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_AHPBaseCharacter_GetDirection();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseCharacter();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_AHPBaseCharacter_OnLeandedHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPWeaponComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AHPBaseCharacter::StaticRegisterNativesAHPBaseCharacter()
	{
		UClass* Class = AHPBaseCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDirection", (Native)&AHPBaseCharacter::execGetDirection },
			{ "OnLeandedHit", (Native)&AHPBaseCharacter::execOnLeandedHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AHPBaseCharacter_GetDirection()
	{
		struct HPBaseCharacter_eventGetDirection_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHPBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HPBaseCharacter_eventGetDirection_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HPBaseCharacter_eventGetDirection_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHPBaseCharacter_OnLeandedHit()
	{
		struct HPBaseCharacter_eventOnLeandedHit_Parms
		{
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_AHPBaseCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLeandedHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(HPBaseCharacter_eventOnLeandedHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, HPBaseCharacter_eventOnLeandedHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHPBaseCharacter_NoRegister()
	{
		return AHPBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPBaseCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPBaseCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHPBaseCharacter_GetDirection());
				OuterClass->LinkChild(Z_Construct_UFunction_AHPBaseCharacter_OnLeandedHit());

				UProperty* NewProp_LeandedDamageVelicity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeandedDamageVelicity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LeandedDamageVelicity, AHPBaseCharacter), 0x0020080000000005, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_LeandedDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeandedDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LeandedDamage, AHPBaseCharacter), 0x0020080000000005, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_DeathAnimMontage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeathAnimMontage"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DeathAnimMontage, AHPBaseCharacter), 0x0020080000000005, Z_Construct_UClass_UAnimMontage_NoRegister());
				UProperty* NewProp_WeaponComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponComponent, AHPBaseCharacter), 0x00200800000a000d, Z_Construct_UClass_UHPWeaponComponent_NoRegister());
				UProperty* NewProp_HealthTextComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthTextComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthTextComponent, AHPBaseCharacter), 0x00200800000a000d, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				UProperty* NewProp_HealthComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HealthComponent, AHPBaseCharacter), 0x00200800000a000d, Z_Construct_UClass_UHPHealthComponent_NoRegister());
				UProperty* NewProp_SpringArmComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArmComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SpringArmComponent, AHPBaseCharacter), 0x00200800000a000d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_CameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraComponent, AHPBaseCharacter), 0x00200800000a000d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHPBaseCharacter_GetDirection(), "GetDirection"); // 3643486648
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHPBaseCharacter_OnLeandedHit(), "OnLeandedHit"); // 89165535
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPBaseCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/HPBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_LeandedDamageVelicity, TEXT("Category"), TEXT("Damage"));
				MetaData->SetValue(NewProp_LeandedDamageVelicity, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_LeandedDamage, TEXT("Category"), TEXT("Damage"));
				MetaData->SetValue(NewProp_LeandedDamage, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_DeathAnimMontage, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_DeathAnimMontage, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_WeaponComponent, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_WeaponComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponComponent, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_HealthTextComponent, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_HealthTextComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HealthTextComponent, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_HealthComponent, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_HealthComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HealthComponent, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_SpringArmComponent, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_SpringArmComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SpringArmComponent, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("Category"), TEXT("Component"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraComponent, TEXT("ModuleRelativePath"), TEXT("Public/Player/HPBaseCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPBaseCharacter, 2007856814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPBaseCharacter(Z_Construct_UClass_AHPBaseCharacter, &AHPBaseCharacter::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
