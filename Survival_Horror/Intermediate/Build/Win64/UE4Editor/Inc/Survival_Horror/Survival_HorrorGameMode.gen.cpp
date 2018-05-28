// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Survival_HorrorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_HorrorGameMode() {}
// Cross Module References
	SURVIVAL_HORROR_API UClass* Z_Construct_UClass_ASurvival_HorrorGameMode_NoRegister();
	SURVIVAL_HORROR_API UClass* Z_Construct_UClass_ASurvival_HorrorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Survival_Horror();
// End Cross Module References
	void ASurvival_HorrorGameMode::StaticRegisterNativesASurvival_HorrorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASurvival_HorrorGameMode_NoRegister()
	{
		return ASurvival_HorrorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASurvival_HorrorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Survival_Horror,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Survival_HorrorGameMode.h" },
				{ "ModuleRelativePath", "Survival_HorrorGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASurvival_HorrorGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASurvival_HorrorGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvival_HorrorGameMode, 305548599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvival_HorrorGameMode(Z_Construct_UClass_ASurvival_HorrorGameMode, &ASurvival_HorrorGameMode::StaticClass, TEXT("/Script/Survival_Horror"), TEXT("ASurvival_HorrorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvival_HorrorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
