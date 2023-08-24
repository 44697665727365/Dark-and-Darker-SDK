#include "pch.h"
#include "SDK.h"

void ABP_GiantCentipede_PoisonRoad_C::DespawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantCentipede_PoisonRoad.BP_GiantCentipede_PoisonRoad_C.DespawnFiringFX");

	FDespawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantCentipede_PoisonRoad_C::SpawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantCentipede_PoisonRoad.BP_GiantCentipede_PoisonRoad_C.SpawnFiringFX");

	FSpawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

