#include "pch.h"
#include "SDK.h"

void UABP_OldRustyKey_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_OldRustyKey.ABP_OldRustyKey_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_OldRustyKey_C::ExecuteUbergraph_ABP_OldRustyKey(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_OldRustyKey.ABP_OldRustyKey_C.ExecuteUbergraph_ABP_OldRustyKey");

	FExecuteUbergraph_ABP_OldRustyKey parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

