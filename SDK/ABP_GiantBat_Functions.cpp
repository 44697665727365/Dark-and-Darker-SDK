#include "pch.h"
#include "SDK.h"

void UABP_GiantBat_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantBat.ABP_GiantBat_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GiantBat_C::ExecuteUbergraph_ABP_GiantBat(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantBat.ABP_GiantBat_C.ExecuteUbergraph_ABP_GiantBat");

	FExecuteUbergraph_ABP_GiantBat parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

