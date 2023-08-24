#include "pch.h"
#include "SDK.h"

void ABP_AOE_LocustsSwarm_C::OnRep_Radius(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.OnRep_Radius");

	FOnRep_Radius parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::SpawnCollision(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnCollision");

	FSpawnCollision parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::DespawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DespawnFiringFX");

	FDespawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::SpawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnFiringFX");

	FSpawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::SetData(double AreaRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SetData");

	FSetData parms{};	
	parms.AreaRadius = AreaRadius;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::DestroyEvent(double DestroyDelayTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DestroyEvent");

	FDestroyEvent parms{};	
	parms.DestroyDelayTime = DestroyDelayTime;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_LocustsSwarm_C::ExecuteUbergraph_BP_AOE_LocustsSwarm(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.ExecuteUbergraph_BP_AOE_LocustsSwarm");

	FExecuteUbergraph_BP_AOE_LocustsSwarm parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

