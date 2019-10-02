// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    PrintLine(TEXT("Bull Cow game welocmes you"));
    PrintLine(TEXT("Please, enter something"));
    
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    FString HiddenWord = TEXT("cake");



}