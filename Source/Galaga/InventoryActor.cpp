// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryActor.h"
#include "Engine/CollisionProfile.h"


void AInventoryActor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AInventoryActor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());

}

AInventoryActor::AInventoryActor()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
			if (MeshAsset.Object != nullptr)
			{
				GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
				GetStaticMeshComponent()->SetCollisionProfileName(
					UCollisionProfile::Pawn_ProfileName);

				//static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Pebble.M_CobbleStone_Pebble'"));
				//GetStaticMeshComponent()->SetMaterial(0, Material.Object);



			}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}
