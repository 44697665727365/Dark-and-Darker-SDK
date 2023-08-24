#include "pch.h"
#include "SDK.h"

void UABP_SurgicalKit_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SurgicalKit.ABP_SurgicalKit_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SurgicalKit_C::ExecuteUbergraph_ABP_SurgicalKit(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SurgicalKit.ABP_SurgicalKit_C.ExecuteUbergraph_ABP_SurgicalKit");

	FExecuteUbergraph_ABP_SurgicalKit parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

