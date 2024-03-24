// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaProyectilLaw.h"

ACapsulaProyectilLaw::ACapsulaProyectilLaw()
{

	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Pebble.M_CobbleStone_Pebble'"));
	GetStaticMeshComponent()->SetMaterial(0, Material.Object);

}
