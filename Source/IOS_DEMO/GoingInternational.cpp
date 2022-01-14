// Fill out your copyright notice in the Description page of Project Settings.


#include "GoingInternational.h"
#include "HelpshiftLibrary.h"

// Sets default values
AGoingInternational::AGoingInternational()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGoingInternational::BeginPlay()
{
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();
	
	// Language Demo
	UHelpshiftLibrary::SetLanguage("en");
	
}

// Called every frame
void AGoingInternational::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGoingInternational::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

