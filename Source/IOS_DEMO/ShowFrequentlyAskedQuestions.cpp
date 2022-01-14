// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowFrequentlyAskedQuestions.h"
#include "HelpshiftLibrary.h"

// Sets default values
AShowFrequentlyAskedQuestions::AShowFrequentlyAskedQuestions()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShowFrequentlyAskedQuestions::BeginPlay()
{
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();

	// Show FAQs
	UHelpshiftLibrary::ShowFrequentlyAskedQuestions(Parameters);
	
}

// Called every frame
void AShowFrequentlyAskedQuestions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShowFrequentlyAskedQuestions::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

