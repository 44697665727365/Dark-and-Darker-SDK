#include "pch.h"
#include "SDK.h"

void UABP_SkeletonFootman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonFootman.ABP_SkeletonFootman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonFootman_C::ExecuteUbergraph_ABP_SkeletonFootman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonFootman.ABP_SkeletonFootman_C.ExecuteUbergraph_ABP_SkeletonFootman");

	FExecuteUbergraph_ABP_SkeletonFootman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

