// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/HPProjectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPProjectile() {}
// Cross Module References
	HEADSHOTPROJECT_API UFunction* Z_Construct_UFunction_AHPProjectile_OnProjectileHit();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPProjectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HEADSHOTPROJECT_API UClass* Z_Construct_UClass_AHPProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HeadshotProject();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AHPProjectile::StaticRegisterNativesAHPProjectile()
	{
		UClass* Class = AHPProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnProjectileHit", (Native)&AHPProjectile::execOnProjectileHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AHPProjectile_OnProjectileHit()
	{
		struct HPProjectile_eventOnProjectileHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_AHPProjectile();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnProjectileHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C80401, 65535, sizeof(HPProjectile_eventOnProjectileHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, HPProjectile_eventOnProjectileHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, HPProjectile_eventOnProjectileHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, HPProjectile_eventOnProjectileHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, HPProjectile_eventOnProjectileHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, HPProjectile_eventOnProjectileHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHPProjectile_NoRegister()
	{
		return AHPProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AHPProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HeadshotProject();
			OuterClass = AHPProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHPProjectile_OnProjectileHit());

				UProperty* NewProp_ProjectileLifeSpan = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileLifeSpan"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ProjectileLifeSpan, AHPProjectile), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsFullDamage, AHPProjectile);
				UProperty* NewProp_bIsFullDamage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsFullDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsFullDamage, AHPProjectile), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bIsFullDamage, AHPProjectile), sizeof(bool), true);
				UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Damage, AHPProjectile), 0x0010000000000015);
				UProperty* NewProp_DamageRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DamageRadius, AHPProjectile), 0x0010000000000015);
				UProperty* NewProp_MovmentComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovmentComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MovmentComponent, AHPProjectile), 0x00100000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AHPProjectile), 0x00100000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHPProjectile_OnProjectileHit(), "OnProjectileHit"); // 517290027
				static TCppClassTypeInfo<TCppClassTypeTraits<AHPProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/HPProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileLifeSpan, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileLifeSpan, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_bIsFullDamage, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_bIsFullDamage, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_Damage, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_Damage, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_DamageRadius, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_DamageRadius, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_MovmentComponent, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MovmentComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MovmentComponent, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/HPProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHPProjectile, 4084294402);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHPProjectile(Z_Construct_UClass_AHPProjectile, &AHPProjectile::StaticClass, TEXT("/Script/HeadshotProject"), TEXT("AHPProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
