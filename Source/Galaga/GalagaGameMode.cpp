// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaGameMode.h"
#include "NaveEnemiga.h"
#include "MiniNaveEnemigaCaza01.h"
#include "MiniNaveEnemigaCaza02.h"
#include "MiniNaveEnemigaEspia01.h"
#include "MiniNaveEnemigaEspia02.h"
#include "MiniNaveEnemigaNodriza01.h"
#include "MiniNaveEnemigaNodriza02.h"
#include "InventoryActor.h"
#include "CapsulaEnergia.h"
#include"CapsulaProyectilLaw.h"
#include "GalagaPawn.h"

AGalagaGameMode::AGalagaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaPawn::StaticClass();
}

void AGalagaGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing
	FVector UbicacionNaveEnemiga01 = FVector(0,-400,215);
	FVector UbicacionMiniNaveEnemigaCaza01 = FVector(100,-400,215);
	FVector UbicacionMiniNaveEnemigaCaza02 = FVector(200,-400,215);
	FVector UbicacionMiniNaveEnemigaEspia01 = FVector(300,-400,215);
	FVector UbicacionMiniNaveEnemigaEspia02 = FVector(400,-400,215);
	FVector UbicacionMiniNaveEnemigaNodriza01 = FVector(500,-400,215);
	FVector UbicacionMiniNaveEnemigaNodriza02 = FVector(600,-400,215);
	FVector UbicacionDrop = FVector(200, -300, 215);
	FVector UbicacionEnergia = FVector(300, -300, 215);
	FVector UbicacionProyectilLaw = FVector(400, -300, 215);


	//Spawn NaveEnemiga
	NaveEnemiga01=GetWorld()->SpawnActor<ANaveEnemiga>(UbicacionNaveEnemiga01, FRotator::ZeroRotator);
	MiniNaveEnemigaCaza01=GetWorld()->SpawnActor<AMiniNaveEnemigaCaza01>(UbicacionMiniNaveEnemigaCaza01, FRotator::ZeroRotator);
	MiniNaveEnemigaCaza02=GetWorld()->SpawnActor<AMiniNaveEnemigaCaza02>(UbicacionMiniNaveEnemigaCaza02, FRotator::ZeroRotator);
	MiniNaveEnemigaEspia01=GetWorld()->SpawnActor<AMiniNaveEnemigaEspia01>(UbicacionMiniNaveEnemigaEspia01, FRotator::ZeroRotator);
	MiniNaveEnemigaEspia02=GetWorld()->SpawnActor<AMiniNaveEnemigaEspia02>(UbicacionMiniNaveEnemigaEspia02, FRotator::ZeroRotator);
	MiniNaveEnemigaNodriza01=GetWorld()->SpawnActor<AMiniNaveEnemigaNodriza01>(UbicacionMiniNaveEnemigaNodriza01, FRotator::ZeroRotator);
	MiniNaveEnemigaNodriza02=GetWorld()->SpawnActor<AMiniNaveEnemigaNodriza02>(UbicacionMiniNaveEnemigaNodriza02, FRotator::ZeroRotator);



	//spawn drop
	InventoryActor = GetWorld()->SpawnActor<AInventoryActor>(UbicacionDrop, FRotator::ZeroRotator);
	CapsulaEnergia = GetWorld()->SpawnActor<ACapsulaEnergia>(UbicacionEnergia, FRotator::ZeroRotator);
	CapsulaProyectilLaw = GetWorld()->SpawnActor<ACapsulaProyectilLaw>(UbicacionProyectilLaw, FRotator::ZeroRotator);

}

