// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Object.h"
#include <Queue.h>
#include "CoreMinimal.h"
#include "UQueue.generated.h"

/**
 * 
 */

UCLASS(Blueprintable, BlueprintType)
class MYXCOMPROJECT_API UQueue:public UObject
{
	GENERATED_BODY()
private:
	TQueue<int32> _mainQueue;
public:
	UQueue();
	~UQueue();
};
