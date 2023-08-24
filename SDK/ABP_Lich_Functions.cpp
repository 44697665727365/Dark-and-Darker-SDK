#include "pch.h"
#include "SDK.h"

void UABP_Lich_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lich.ABP_Lich_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Lich_C::ExecuteUbergraph_ABP_Lich(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lich.ABP_Lich_C.ExecuteUbergraph_ABP_Lich");

	FExecuteUbergraph_ABP_Lich parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

