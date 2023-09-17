// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animations/HPAnimNotify.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPAnimNotify() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPAnimNotify_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPAnimNotify::StaticRegisterNativesUHPAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UHPAnimNotify_NoRegister()
	{
		return UHPAnimNotify::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPAnimNotify()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotify();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPAnimNotify::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UHPAnimNotify> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Animations/HPAnimNotify.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Animations/HPAnimNotify.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPAnimNotify, 11847549);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPAnimNotify(Z_Construct_UClass_UHPAnimNotify, &UHPAnimNotify::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
