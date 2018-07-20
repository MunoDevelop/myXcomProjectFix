// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUQueue() {}
// Cross Module References
	MYXCOMPROJECT_API UClass* Z_Construct_UClass_UQueue_NoRegister();
	MYXCOMPROJECT_API UClass* Z_Construct_UClass_UQueue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_myXcomProject();
// End Cross Module References
	void UQueue::StaticRegisterNativesUQueue()
	{
	}
	UClass* Z_Construct_UClass_UQueue_NoRegister()
	{
		return UQueue::StaticClass();
	}
	UClass* Z_Construct_UClass_UQueue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_myXcomProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "UQueue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/UQueue.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UQueue>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UQueue::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UQueue, 1076494246);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQueue(Z_Construct_UClass_UQueue, &UQueue::StaticClass, TEXT("/Script/myXcomProject"), TEXT("UQueue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQueue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
