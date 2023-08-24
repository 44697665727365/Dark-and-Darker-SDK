#include "pch.h"
#include "SDK.h"

void UABP_SkeletonArcher_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher.ABP_SkeletonArcher_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_C::ExecuteUbergraph_ABP_SkeletonArcher(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher.ABP_SkeletonArcher_C.ExecuteUbergraph_ABP_SkeletonArcher");

	FExecuteUbergraph_ABP_SkeletonArcher parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

