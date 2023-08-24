#include "pch.h"
#include "SDK.h"

void UABP_DeathSkull_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DeathSkull.ABP_DeathSkull_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DeathSkull_C::ExecuteUbergraph_ABP_DeathSkull(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DeathSkull.ABP_DeathSkull_C.ExecuteUbergraph_ABP_DeathSkull");

	FExecuteUbergraph_ABP_DeathSkull parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

