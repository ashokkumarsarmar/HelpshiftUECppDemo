// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowSectionForFAQs.h"
#include "HelpshiftLibrary.h"

// Sets default values
AShowSectionForFAQs::AShowSectionForFAQs()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShowSectionForFAQs::BeginPlay()
{
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();
	/*
	* @param SectionId: FAQ section publish-id.
    */
    FString sectionID = "#1";
   	UHelpshiftLibrary::ShowSection(sectionID, Parameters);

}

// Called every frame
void AShowSectionForFAQs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShowSectionForFAQs::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

