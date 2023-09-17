// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/HPCharacterMovementComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPCharacterMovementComponent() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPCharacterMovementComponent_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPCharacterMovementComponent::StaticRegisterNativesUHPCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UHPCharacterMovementComponent_NoRegister()
	{
		return UHPCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPCharacterMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCharacterMovementComponent();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPCharacterMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00084u;


				UProperty* NewProp_SpeedIncrease = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpeedIncrease"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpeedIncrease, UHPCharacterMovementComponent), 0x0010000000010005);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UHPCharacterMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Components/HPCharacterMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPCharacterMovementComponent.h"));
				MetaData->SetValue(NewProp_SpeedIncrease, TEXT("Category"), TEXT("Character Movement: Running"));
				MetaData->SetValue(NewProp_SpeedIncrease, TEXT("ClampMax"), TEXT("10.000000"));
				MetaData->SetValue(NewProp_SpeedIncrease, TEXT("ClampMin"), TEXT("1.500000"));
				MetaData->SetValue(NewProp_SpeedIncrease, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPCharacterMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPCharacterMovementComponent, 46862411);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPCharacterMovementComponent(Z_Construct_UClass_UHPCharacterMovementComponent, &UHPCharacterMovementComponent::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
