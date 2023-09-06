// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextManager.generated.h"

/**
 * 
 */
UCLASS()
class KALMANFILTER_API UTextManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(Blueprintcallable, Category = "Custom", meta = (Keywords = "Save"))
			static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);
};
