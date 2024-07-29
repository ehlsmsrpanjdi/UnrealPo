// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/C_Car.h"

// Sets default values
AC_Car::AC_Car()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	Car_Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");

	Car_Mesh->SetupAttachment(DefaultSceneRoot);
	SetRootComponent(DefaultSceneRoot);
}

// Called when the game starts or when spawned
void AC_Car::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Car::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

