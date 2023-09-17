// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animations/HPEquipFinishAnimNotify.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPEquipFinishAnimNotify() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPEquipFinishAnimNotify_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPEquipFinishAnimNotify();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPAnimNotify();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPEquipFinishAnimNotify::StaticRegisterNativesUHPEquipFinishAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UHPEquipFinishAnimNotify_NoRegister()
	{
		return UHPEquipFinishAnimNotify::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPEquipFinishAnimNotify()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UHPAnimNotify();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPEquipFinishAnimNotify::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UHPEquipFinishAnimNotify> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Animations/HPEquipFinishAnimNotify.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Animations/HPEquipFinishAnimNotify.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPEquipFinishAnimNotify, 1217184976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPEquipFinishAnimNotify(Z_Construct_UClass_UHPEquipFinishAnimNotify, &UHPEquipFinishAnimNotify::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPEquipFinishAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPEquipFinishAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
