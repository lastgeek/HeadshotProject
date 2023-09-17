// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animations/HPClipEjectAnimNotify.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPClipEjectAnimNotify() {}
// Cross Module References
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPClipEjectAnimNotify_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPClipEjectAnimNotify();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPAnimNotify();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPClipEjectAnimNotify::StaticRegisterNativesUHPClipEjectAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UHPClipEjectAnimNotify_NoRegister()
	{
		return UHPClipEjectAnimNotify::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPClipEjectAnimNotify()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UHPAnimNotify();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPClipEjectAnimNotify::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UHPClipEjectAnimNotify> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Animations/HPClipEjectAnimNotify.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Animations/HPClipEjectAnimNotify.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPClipEjectAnimNotify, 761480575);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPClipEjectAnimNotify(Z_Construct_UClass_UHPClipEjectAnimNotify, &UHPClipEjectAnimNotify::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPClipEjectAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPClipEjectAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
