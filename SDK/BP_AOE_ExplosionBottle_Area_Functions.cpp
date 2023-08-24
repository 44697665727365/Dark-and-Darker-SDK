#include "pch.h"
#include "SDK.h"

void ABP_AOE_ExplosionBottle_Area_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_ExplosionBottle_Area_C::Spawing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.Spawing");

	FSpawing parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AOE_ExplosionBottle_Area_C::ExecuteUbergraph_BP_AOE_ExplosionBottle_Area(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.ExecuteUbergraph_BP_AOE_ExplosionBottle_Area");

	FExecuteUbergraph_BP_AOE_ExplosionBottle_Area parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

