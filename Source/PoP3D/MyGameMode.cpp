// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

void AMyGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogTemp, Warning, TEXT("Hello world!!"));
	UGameplayStatics::OpenLevel(this, "World'/Game/Library/Map/Prison.Prison'", false);
}