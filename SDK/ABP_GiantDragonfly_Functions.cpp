#include "pch.h"
#include "SDK.h"

void UABP_GiantDragonfly_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantDragonfly.ABP_GiantDragonfly_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GiantDragonfly_C::ExecuteUbergraph_ABP_GiantDragonfly(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantDragonfly.ABP_GiantDragonfly_C.ExecuteUbergraph_ABP_GiantDragonfly");

	FExecuteUbergraph_ABP_GiantDragonfly parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

