#include "pch.h"
#include "SDK.h"

void ABP_AOE_SmokePot_C::DespawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.DespawnFiringFX");

	FDespawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_SmokePot_C::ProcessDespawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ProcessDespawn");

	FProcessDespawn parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_SmokePot_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_SmokePot_C::AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.AddBeginOverlapActor");

	FAddBeginOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void ABP_AOE_SmokePot_C::ExecuteUbergraph_BP_AOE_SmokePot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ExecuteUbergraph_BP_AOE_SmokePot");

	FExecuteUbergraph_BP_AOE_SmokePot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

