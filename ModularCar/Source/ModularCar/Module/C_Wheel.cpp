// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/C_Wheel.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AC_Wheel::AC_Wheel()
{
	PrimaryActorTick.bCanEverTick = true;
	//DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	//Car_Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	//Car_Axis = CreateDefaultSubobject<UPhysicsConstraintComponent>("Axis");
	//Car_Suspension = CreateDefaultSubobject<UPhysicsConstraintComponent>("Suspension");

	//Car_Axis->SetupAttachment(Car_Mesh);
	//Car_Suspension->SetupAttachment(Car_Mesh);
	//Car_Mesh->SetupAttachment(DefaultSceneRoot);
	//SetRootComponent(DefaultSceneRoot);
}

// Called when the game starts or when spawned
void AC_Wheel::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AC_Wheel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Wheel::WheelSet(UPhysicsConstraintComponent* _Axis, UPhysicsConstraintComponent* _Suspension, UPrimitiveComponent* _Body, UPrimitiveComponent* _Wheel)
{
	if (false == _Axis->IsValidLowLevel() || false == _Suspension->IsValidLowLevel()) {
		UE_LOG(LogTemp, Fatal, TEXT("Not Initilize"));
	}

	if (false == _Body->IsValidLowLevel() || false == _Wheel->IsValidLowLevel()) {
		UE_LOG(LogTemp, Fatal, TEXT("Not Initilize"));
	}

	if (IsInit == false) {
		_Axis->SetConstrainedComponents(_Wheel, "", _Body, "");
		_Suspension->SetConstrainedComponents(_Wheel, "", _Body, "");
		_Wheel->SetSimulatePhysics(true);
	}
	else {
		UE_LOG(LogTemp, Fatal, TEXT("Init One More."));
	}
}

void AC_Wheel::AxisSet()
{
	/*Car_Axis->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	Car_Axis->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Free, 0.0f);
	Car_Axis->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 0.0f);
	Car_Axis->setmot*/
}

void AC_Wheel::SuspensionSet()
{
	//Car_Suspension->
}



