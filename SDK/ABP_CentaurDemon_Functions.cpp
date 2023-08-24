#include "pch.h"
#include "SDK.h"

void UABP_CentaurDemon_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CentaurDemon.ABP_CentaurDemon_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_CentaurDemon_C::ExecuteUbergraph_ABP_CentaurDemon(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CentaurDemon.ABP_CentaurDemon_C.ExecuteUbergraph_ABP_CentaurDemon");

	FExecuteUbergraph_ABP_CentaurDemon parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

