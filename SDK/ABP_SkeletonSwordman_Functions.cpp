#include "pch.h"
#include "SDK.h"

void UABP_SkeletonSwordman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonSwordman.ABP_SkeletonSwordman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonSwordman_C::ExecuteUbergraph_ABP_SkeletonSwordman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonSwordman.ABP_SkeletonSwordman_C.ExecuteUbergraph_ABP_SkeletonSwordman");

	FExecuteUbergraph_ABP_SkeletonSwordman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

