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
	TMap<FString, FHelpshiftConfigParameter> Parameters;
	UHelpshiftLibrary::Init(Parameters);
	Super::BeginPlay();
	/**
    * You can use the API call to allow a user to directly send feedback or start a new conversation without having to first view FAQs.
    * Once, a user starts a new conversation, this API call will show the conversation screen. The conversation will continue until it is resolved or rejected by the agent.
    *
    * @param Parameters: additional data to pass for the conversation.
    * https://developers.helpshift.com/sdkx_android/sdk-configuration/
    * https://developers.helpshift.com/sdkx_ios/sdk-configuration/
    * @param Tags: additional tags for the conversation.
    * https://developers.helpshift.com/sdkx_android/tracking/#adding-tags
    * @param CustomIssueFields: custom issue fields for the conversation.
    * https://developers.helpshift.com/sdkx_android/tracking/#set-custom-issue-fields
    */

    TArray<FString> Tags = {"foo", "bar"};
	TMap<FString, FHelpshiftCustomIssueFieldParameter> CustomIssueFields; 

	CustomIssueFields.Add("tier", UHelpshiftCustomIssueFieldParameterFunctions::NewSingleLineParameter("professional"));
	
	UHelpshiftLibrary::ShowConversation(Parameters, Tags, CustomIssueFields);

	
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

