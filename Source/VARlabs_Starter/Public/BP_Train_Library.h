// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BP_Train_Library.generated.h"

/**
 * 
 */
UCLASS()
class VARLABS_STARTER_API UBP_Train_Library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Train")
	static void PerformCollisionCheck();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Train")
	float testingValue;
};
