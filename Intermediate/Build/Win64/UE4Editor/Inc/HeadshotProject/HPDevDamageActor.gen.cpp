// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Dev/HPDevDamageActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPDevDamageActor() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPDevDamageActor_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPDevDamageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AHPDevDamageActor::StaticRegisterNativesAHPDevDamageActor()
	{
	}
	UClass* Z_Construct_UClass_AHPDevDamageActor_NoRegister()
	{
		return AHPDevDamageActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPDevDamageActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPDevDamageActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, AHPDevDamageActor), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsFullDamage, AHPDevDamageActor);
				UProperty* NewProp_bIsFullDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsFullDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsFullDamage, AHPDevDamageActor), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsFullDamage, AHPDevDamageActor), sizeof(bool), true);
				UProperty* NewProp_SphereColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SphereColor, AHPDevDamageActor), 0x0010000000000005, Z_Construct_UScriptStruct_FColor());
				UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, AHPDevDamageActor), 0x0010000000000005);
				UProperty* NewProp_SceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SceneComponent, AHPDevDamageActor), 0x00100000000a000d, Z_Construct_UClass_USceneComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPDevDamageActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Dev/HPDevDamageActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
				MetaData->SetValue(NewProp_Damage, TEXT("Category"), TEXT("HPDevDamageActor"));
				MetaData->SetValue(NewProp_Damage, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
				MetaData->SetValue(NewProp_bIsFullDamage, TEXT("Category"), TEXT("HPDevDamageActor"));
				MetaData->SetValue(NewProp_bIsFullDamage, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
				MetaData->SetValue(NewProp_SphereColor, TEXT("Category"), TEXT("HPDevDamageActor"));
				MetaData->SetValue(NewProp_SphereColor, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
				MetaData->SetValue(NewProp_Radius, TEXT("Category"), TEXT("HPDevDamageActor"));
				MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("Category"), TEXT("HPDevDamageActor"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("ModuleRelativePath"), TEXT("Public/Dev/HPDevDamageActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPDevDamageActor, 1944865552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPDevDamageActor(Z_Construct_UClass_AHPDevDamageActor, &AHPDevDamageActor::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPDevDamageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPDevDamageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
