// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Wheel.generated.h"

UCLASS()
class MODULARCAR_API AC_Wheel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_Wheel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void WheelSet(UPhysicsConstraintComponent* _Axis, UPhysicsConstraintComponent* _Suspension, UPrimitiveComponent* _Body, UPrimitiveComponent* _Wheel);

	void AxisSet();
	void SuspensionSet();

private:
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))
	//class UPhysicsConstraintComponent* Car_Axis = nullptr;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))
	//UPhysicsConstraintComponent* Car_Suspension = nullptr;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))
	//class UStaticMeshComponent* Car_Mesh = nullptr;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess))
	//USceneComponent* DefaultSceneRoot = nullptr;

	UPROPERTY()
	bool IsInit = false;
};
