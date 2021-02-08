// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UNREALSTARTERPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		float moveSpeed{ 100.f };
	UPROPERTY(EditAnywhere)
		float rotSpeed{ 0.f };

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};