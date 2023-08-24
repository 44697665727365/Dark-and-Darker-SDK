#include "pch.h"
#include "SDK.h"

void UABP_SkeletonSpearman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonSpearman.ABP_SkeletonSpearman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonSpearman_C::ExecuteUbergraph_ABP_SkeletonSpearman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonSpearman.ABP_SkeletonSpearman_C.ExecuteUbergraph_ABP_SkeletonSpearman");

	FExecuteUbergraph_ABP_SkeletonSpearman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

