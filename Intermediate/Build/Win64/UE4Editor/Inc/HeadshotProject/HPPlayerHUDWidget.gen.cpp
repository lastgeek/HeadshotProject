// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/HPPlayerHUDWidget.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPPlayerHUDWidget() {}
// Cross Module References
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetCurrentAmmo();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPPlayerHUDWidget();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetHealthProcent();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetWeaponUIData();
	HEADSHOTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerAlive();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerCanFire();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerSpectating();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPPlayerHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPPlayerHUDWidget::StaticRegisterNativesUHPPlayerHUDWidget()
	{
		UClass* Class = UHPPlayerHUDWidget::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCurrentAmmo", (Native)&UHPPlayerHUDWidget::execGetCurrentAmmo },
			{ "GetHealthProcent", (Native)&UHPPlayerHUDWidget::execGetHealthProcent },
			{ "GetWeaponUIData", (Native)&UHPPlayerHUDWidget::execGetWeaponUIData },
			{ "IsPlayerAlive", (Native)&UHPPlayerHUDWidget::execIsPlayerAlive },
			{ "IsPlayerCanFire", (Native)&UHPPlayerHUDWidget::execIsPlayerCanFire },
			{ "IsPlayerSpectating", (Native)&UHPPlayerHUDWidget::execIsPlayerSpectating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetCurrentAmmo()
	{
		struct HPPlayerHUDWidget_eventGetCurrentAmmo_Parms
		{
			FAmmoData CurrentAmmo;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(HPPlayerHUDWidget_eventGetCurrentAmmo_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPPlayerHUDWidget_eventGetCurrentAmmo_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPPlayerHUDWidget_eventGetCurrentAmmo_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPPlayerHUDWidget_eventGetCurrentAmmo_Parms), sizeof(bool), true);
			UProperty* NewProp_CurrentAmmo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentAmmo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentAmmo, HPPlayerHUDWidget_eventGetCurrentAmmo_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FAmmoData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetHealthProcent()
	{
		struct HPPlayerHUDWidget_eventGetHealthProcent_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealthProcent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HPPlayerHUDWidget_eventGetHealthProcent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HPPlayerHUDWidget_eventGetHealthProcent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_GetWeaponUIData()
	{
		struct HPPlayerHUDWidget_eventGetWeaponUIData_Parms
		{
			FWeaponUIData UIData;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWeaponUIData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(HPPlayerHUDWidget_eventGetWeaponUIData_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPPlayerHUDWidget_eventGetWeaponUIData_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPPlayerHUDWidget_eventGetWeaponUIData_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPPlayerHUDWidget_eventGetWeaponUIData_Parms), sizeof(bool), true);
			UProperty* NewProp_UIData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UIData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(UIData, HPPlayerHUDWidget_eventGetWeaponUIData_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FWeaponUIData());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerAlive()
	{
		struct HPPlayerHUDWidget_eventIsPlayerAlive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayerAlive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HPPlayerHUDWidget_eventIsPlayerAlive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPPlayerHUDWidget_eventIsPlayerAlive_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPPlayerHUDWidget_eventIsPlayerAlive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPPlayerHUDWidget_eventIsPlayerAlive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerCanFire()
	{
		struct HPPlayerHUDWidget_eventIsPlayerCanFire_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayerCanFire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HPPlayerHUDWidget_eventIsPlayerCanFire_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPPlayerHUDWidget_eventIsPlayerCanFire_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPPlayerHUDWidget_eventIsPlayerCanFire_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPPlayerHUDWidget_eventIsPlayerCanFire_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerSpectating()
	{
		struct HPPlayerHUDWidget_eventIsPlayerSpectating_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPPlayerHUDWidget();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayerSpectating"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HPPlayerHUDWidget_eventIsPlayerSpectating_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPPlayerHUDWidget_eventIsPlayerSpectating_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPPlayerHUDWidget_eventIsPlayerSpectating_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPPlayerHUDWidget_eventIsPlayerSpectating_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UI"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHPPlayerHUDWidget_NoRegister()
	{
		return UHPPlayerHUDWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPPlayerHUDWidget()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UUserWidget();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPPlayerHUDWidget::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_GetCurrentAmmo());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_GetHealthProcent());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_GetWeaponUIData());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerAlive());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerCanFire());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerSpectating());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_GetCurrentAmmo(), "GetCurrentAmmo"); // 2956235360
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_GetHealthProcent(), "GetHealthProcent"); // 2232126266
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_GetWeaponUIData(), "GetWeaponUIData"); // 4045639747
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerAlive(), "IsPlayerAlive"); // 2474566239
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerCanFire(), "IsPlayerCanFire"); // 2811329801
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPPlayerHUDWidget_IsPlayerSpectating(), "IsPlayerSpectating"); // 3892970678
				static TCppClassTypeInfo<TCppClassTypeTraits<UHPPlayerHUDWidget> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UI/HPPlayerHUDWidget.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/HPPlayerHUDWidget.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPPlayerHUDWidget, 1385193423);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPPlayerHUDWidget(Z_Construct_UClass_UHPPlayerHUDWidget, &UHPPlayerHUDWidget::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPPlayerHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPPlayerHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
