#include "pch.h"
#include "SDK.h"

void UABP_Drum_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Drum.ABP_Drum_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Drum_C::ExecuteUbergraph_ABP_Drum(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Drum.ABP_Drum_C.ExecuteUbergraph_ABP_Drum");

	FExecuteUbergraph_ABP_Drum parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

