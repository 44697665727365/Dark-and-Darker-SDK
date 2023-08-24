#include "pch.h"
#include "SDK.h"

void UABP_SkullKey_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullKey.ABP_SkullKey_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkullKey_C::ExecuteUbergraph_ABP_SkullKey(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullKey.ABP_SkullKey_C.ExecuteUbergraph_ABP_SkullKey");

	FExecuteUbergraph_ABP_SkullKey parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

