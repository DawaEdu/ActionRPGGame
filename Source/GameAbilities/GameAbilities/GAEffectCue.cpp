// Fill out your copyright notice in the Description page of Project Settings.

#include "GameAbilities.h"
#include "GAEffectCue.h"


// Sets default values
AGAEffectCue::AGAEffectCue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGAEffectCue::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGAEffectCue::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

