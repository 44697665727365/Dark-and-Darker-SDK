#include "pch.h"
#include "SDK.h"

void UABP_DeathBeetle_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DeathBeetle.ABP_DeathBeetle_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DeathBeetle_C::ExecuteUbergraph_ABP_DeathBeetle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DeathBeetle.ABP_DeathBeetle_C.ExecuteUbergraph_ABP_DeathBeetle");

	FExecuteUbergraph_ABP_DeathBeetle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

