#include "pch.h"
#include "SDK.h"

void ABP_DeathSwarm_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSwarm.BP_DeathSwarm_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSwarm_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSwarm.BP_DeathSwarm_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSwarm_C::ExecuteUbergraph_BP_DeathSwarm(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSwarm.BP_DeathSwarm_C.ExecuteUbergraph_BP_DeathSwarm");

	FExecuteUbergraph_BP_DeathSwarm parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

