// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowConversation.h"
#include "HelpshiftLibrary.h"


// Sets default values
AShowConversation::AShowConversation()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShowConversation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShowConversation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShowConversation::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

