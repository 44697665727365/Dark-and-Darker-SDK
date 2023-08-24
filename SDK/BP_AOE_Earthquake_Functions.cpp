#include "pch.h"
#include "SDK.h"

void ABP_AOE_Earthquake_C::OnRep_Radius(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.OnRep_Radius");

	FOnRep_Radius parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::SpawnCollision(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnCollision");

	FSpawnCollision parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::SpawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnFiringFX");

	FSpawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::DespawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DespawnFiringFX");

	FDespawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::SetAoeData(double Radius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SetAoeData");

	FSetAoeData parms{};	
	parms.Radius = Radius;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::RemoveEffect(struct AActor* OutActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEffect");

	FRemoveEffect parms{};	
	parms.OutActor = OutActor;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::DestroyEvent(double DestroyDelayTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DestroyEvent");

	FDestroyEvent parms{};	
	parms.DestroyDelayTime = DestroyDelayTime;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEndOverlapActor");

	FRemoveEndOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_Earthquake_C::ExecuteUbergraph_BP_AOE_Earthquake(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.ExecuteUbergraph_BP_AOE_Earthquake");

	FExecuteUbergraph_BP_AOE_Earthquake parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

