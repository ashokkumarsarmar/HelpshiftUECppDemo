// Fill out your copyright notice in the Description page of Project Settings.


#include "Login.h"
#include "HelpshiftLibrary.h"

// Sets default values
ALogin::ALogin()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALogin::BeginPlay()
{
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();
	
	// please define init the loginParams before using it to login
	TMap<FString, FString> loginParams;

	// Login
	UHelpshiftLibrary::Login(loginParams);

	/**
	 * for Logout
	 * UHelpshiftLibrary::Logout();
	 */
	
}

// Called every frame
void ALogin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALogin::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

