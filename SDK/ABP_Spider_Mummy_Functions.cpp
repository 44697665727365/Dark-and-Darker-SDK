#include "pch.h"
#include "SDK.h"

void UABP_Spider_Mummy_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Spider_Mummy.ABP_Spider_Mummy_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Spider_Mummy_C::ExecuteUbergraph_ABP_Spider_Mummy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Spider_Mummy.ABP_Spider_Mummy_C.ExecuteUbergraph_ABP_Spider_Mummy");

	FExecuteUbergraph_ABP_Spider_Mummy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

