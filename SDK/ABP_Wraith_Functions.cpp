#include "pch.h"
#include "SDK.h"

void UABP_Wraith_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Wraith.ABP_Wraith_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Wraith_C::ExecuteUbergraph_ABP_Wraith(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Wraith.ABP_Wraith_C.ExecuteUbergraph_ABP_Wraith");

	FExecuteUbergraph_ABP_Wraith parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

