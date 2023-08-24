#include "pch.h"
#include "SDK.h"

void UABP_GoblinArcher_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinArcher.ABP_GoblinArcher_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinArcher_C::ExecuteUbergraph_ABP_GoblinArcher(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinArcher.ABP_GoblinArcher_C.ExecuteUbergraph_ABP_GoblinArcher");

	FExecuteUbergraph_ABP_GoblinArcher parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

