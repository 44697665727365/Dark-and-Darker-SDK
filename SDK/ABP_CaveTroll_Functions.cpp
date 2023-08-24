#include "pch.h"
#include "SDK.h"

void UABP_CaveTroll_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CaveTroll.ABP_CaveTroll_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_CaveTroll_C::ExecuteUbergraph_ABP_CaveTroll(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CaveTroll.ABP_CaveTroll_C.ExecuteUbergraph_ABP_CaveTroll");

	FExecuteUbergraph_ABP_CaveTroll parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

