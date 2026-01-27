// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/Engine.h"
#include "BP_Train_Library.h"

void UBP_Train_Library::PerformCollisionCheck()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Collision Check Performed"));
	}
}