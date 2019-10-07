// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    PrintLine(TEXT("Bull Cow game welocmes you"));
    PrintLine(TEXT("Gues the 4 letter word")); // magin number remove!
    PrintLine(TEXT("Please, enter something"));

     HiddenWord = TEXT("cake");
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    if (HiddenWord == Input)
        PrintLine(TEXT("correct word!"));
    else
        PrintLine(TEXT("wrong word!"));
}