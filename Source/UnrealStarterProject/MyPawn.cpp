
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//AddMovementInput(*direction * moveSpeed * DeltaTime);
	AddActorLocalOffset(*direction * moveSpeed * DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Horizontal", this, &AMyPawn::HorizontalAxis);
	PlayerInputComponent->BindAxis("Vertical", this, &AMyPawn::VerticalAxis);


}

void AMyPawn::HorizontalAxis(float value) {

	direction->Y = value;

}
void AMyPawn::VerticalAxis(float value) {

	direction->X = value;
}