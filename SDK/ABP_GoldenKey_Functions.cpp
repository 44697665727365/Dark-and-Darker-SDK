#include "pch.h"
#include "SDK.h"

void UABP_GoldenKey_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoldenKey.ABP_GoldenKey_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoldenKey_C::ExecuteUbergraph_ABP_GoldenKey(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoldenKey.ABP_GoldenKey_C.ExecuteUbergraph_ABP_GoldenKey");

	FExecuteUbergraph_ABP_GoldenKey parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

