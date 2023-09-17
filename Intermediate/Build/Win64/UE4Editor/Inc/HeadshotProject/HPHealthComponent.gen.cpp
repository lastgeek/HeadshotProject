// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/HPHealthComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPHealthComponent() {}
// Cross Module References
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPHealthComponent_GetHealthProcent();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPHealthComponent();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPHealthComponent_IsDead();
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_UHPHealthComponent_OnTakeAnyDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_UHPHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
// End Cross Module References
	void UHPHealthComponent::StaticRegisterNativesUHPHealthComponent()
	{
		UClass* Class = UHPHealthComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetHealthProcent", (Native)&UHPHealthComponent::execGetHealthProcent },
			{ "IsDead", (Native)&UHPHealthComponent::execIsDead },
			{ "OnTakeAnyDamage", (Native)&UHPHealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UHPHealthComponent_GetHealthProcent()
	{
		struct HPHealthComponent_eventGetHealthProcent_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPHealthComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHealthProcent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HPHealthComponent_eventGetHealthProcent_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, HPHealthComponent_eventGetHealthProcent_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPHealthComponent_IsDead()
	{
		struct HPHealthComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHPHealthComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsDead"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(HPHealthComponent_eventIsDead_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, HPHealthComponent_eventIsDead_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, HPHealthComponent_eventIsDead_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, HPHealthComponent_eventIsDead_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHPHealthComponent_OnTakeAnyDamage()
	{
		struct HPHealthComponent_eventOnTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		UObject* Outer = Z_Construct_UClass_UHPHealthComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnTakeAnyDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00040401, 65535, sizeof(HPHealthComponent_eventOnTakeAnyDamage_Parms));
			UProperty* NewProp_DamageCauser = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageCauser"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageCauser, HPHealthComponent_eventOnTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_InstigatedBy = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InstigatedBy"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstigatedBy, HPHealthComponent_eventOnTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamageType, HPHealthComponent_eventOnTakeAnyDamage_Parms), 0x0010000000000082, Z_Construct_UClass_UDamageType_NoRegister());
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, HPHealthComponent_eventOnTakeAnyDamage_Parms), 0x0010000000000080);
			UProperty* NewProp_DamagedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DamagedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DamagedActor, HPHealthComponent_eventOnTakeAnyDamage_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHPHealthComponent_NoRegister()
	{
		return UHPHealthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHPHealthComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = UHPHealthComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UHPHealthComponent_GetHealthProcent());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPHealthComponent_IsDead());
				OuterClass->LinkChild(Z_Construct_UFunction_UHPHealthComponent_OnTakeAnyDamage());

				UProperty* NewProp_HealModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealModifier, UHPHealthComponent), 0x0010000000000015);
				UProperty* NewProp_HealDelay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealDelay, UHPHealthComponent), 0x0010000000000015);
				UProperty* NewProp_HealUpdateTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealUpdateTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HealUpdateTime, UHPHealthComponent), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoHeal, UHPHealthComponent);
				UProperty* NewProp_bAutoHeal = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoHeal"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoHeal, UHPHealthComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bAutoHeal, UHPHealthComponent), sizeof(bool), true);
				UProperty* NewProp_MaxHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxHealth, UHPHealthComponent), 0x0010000000010005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPHealthComponent_GetHealthProcent(), "GetHealthProcent"); // 1094508188
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPHealthComponent_IsDead(), "IsDead"); // 107186171
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHPHealthComponent_OnTakeAnyDamage(), "OnTakeAnyDamage"); // 873271064
				static TCppClassTypeInfo<TCppClassTypeTraits<UHPHealthComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Components/HPHealthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
				MetaData->SetValue(NewProp_HealModifier, TEXT("Category"), TEXT("Health (Auto Heal)"));
				MetaData->SetValue(NewProp_HealModifier, TEXT("ClampMax"), TEXT("100.000000"));
				MetaData->SetValue(NewProp_HealModifier, TEXT("ClampMin"), TEXT("0.000000"));
				MetaData->SetValue(NewProp_HealModifier, TEXT("EditCondition"), TEXT("bAutoHeal"));
				MetaData->SetValue(NewProp_HealModifier, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
				MetaData->SetValue(NewProp_HealDelay, TEXT("Category"), TEXT("Health (Auto Heal)"));
				MetaData->SetValue(NewProp_HealDelay, TEXT("ClampMax"), TEXT("10.000000"));
				MetaData->SetValue(NewProp_HealDelay, TEXT("ClampMin"), TEXT("0.000000"));
				MetaData->SetValue(NewProp_HealDelay, TEXT("EditCondition"), TEXT("bAutoHeal"));
				MetaData->SetValue(NewProp_HealDelay, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
				MetaData->SetValue(NewProp_HealUpdateTime, TEXT("Category"), TEXT("Health (Auto Heal)"));
				MetaData->SetValue(NewProp_HealUpdateTime, TEXT("ClampMax"), TEXT("10.000000"));
				MetaData->SetValue(NewProp_HealUpdateTime, TEXT("ClampMin"), TEXT("0.000000"));
				MetaData->SetValue(NewProp_HealUpdateTime, TEXT("EditCondition"), TEXT("bAutoHeal"));
				MetaData->SetValue(NewProp_HealUpdateTime, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
				MetaData->SetValue(NewProp_bAutoHeal, TEXT("Category"), TEXT("Health (Auto Heal)"));
				MetaData->SetValue(NewProp_bAutoHeal, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("Category"), TEXT("Health (General Settings)"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("ClampMax"), TEXT("1000.000000"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("ClampMin"), TEXT("0.000000"));
				MetaData->SetValue(NewProp_MaxHealth, TEXT("ModuleRelativePath"), TEXT("Public/Components/HPHealthComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPHealthComponent, 2233662427);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPHealthComponent(Z_Construct_UClass_UHPHealthComponent, &UHPHealthComponent::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("UHPHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
