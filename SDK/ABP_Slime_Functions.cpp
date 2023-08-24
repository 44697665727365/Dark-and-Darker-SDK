#include "pch.h"
#include "SDK.h"

void UABP_Slime_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Slime.ABP_Slime_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Slime_C::ExecuteUbergraph_ABP_Slime(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Slime.ABP_Slime_C.ExecuteUbergraph_ABP_Slime");

	FExecuteUbergraph_ABP_Slime parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

