// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/HPGameHUD.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPGameHUD() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPGameHUD_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AHPGameHUD::StaticRegisterNativesAHPGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AHPGameHUD_NoRegister()
	{
		return AHPGameHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPGameHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPGameHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2090028Cu;


				UProperty* NewProp_PlayerHUDWidgetClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerHUDWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(PlayerHUDWidgetClass, AHPGameHUD), 0x0024080000000015, Z_Construct_UClass_UUserWidget_NoRegister(), Z_Construct_UClass_UClass());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPGameHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UI/HPGameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPGameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_PlayerHUDWidgetClass, TEXT("Category"), TEXT("HUD"));
				MetaData->SetValue(NewProp_PlayerHUDWidgetClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPGameHUD.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPGameHUD, 2869701839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPGameHUD(Z_Construct_UClass_AHPGameHUD, &AHPGameHUD::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
