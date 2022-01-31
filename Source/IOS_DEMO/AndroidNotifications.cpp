// Fill out your copyright notice in the Description page of Project Settings.


#include "AndroidNotifications.h"
#include "HelpshiftLibrary.h"

// Sets default values
AAndroidNotifications::AAndroidNotifications()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAndroidNotifications::BeginPlay()
{
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();
	// please add the tokenid from FCM
	FString Token;
	UHelpshiftLibrary::RegisterPushToken(Token);
	
}

// Called every frame
void AAndroidNotifications::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAndroidNotifications::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

