#include "pch.h"
#include "SDK.h"

void UABP_SkeletonGuardman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman.ABP_SkeletonGuardman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_C::ExecuteUbergraph_ABP_SkeletonGuardman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman.ABP_SkeletonGuardman_C.ExecuteUbergraph_ABP_SkeletonGuardman");

	FExecuteUbergraph_ABP_SkeletonGuardman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

