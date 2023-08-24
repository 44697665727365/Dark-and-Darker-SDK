#include "pch.h"
#include "SDK.h"

void UABP_SkeletonRoyalGuard_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonRoyalGuard.ABP_SkeletonRoyalGuard_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonRoyalGuard_C::ExecuteUbergraph_ABP_SkeletonRoyalGuard(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonRoyalGuard.ABP_SkeletonRoyalGuard_C.ExecuteUbergraph_ABP_SkeletonRoyalGuard");

	FExecuteUbergraph_ABP_SkeletonRoyalGuard parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

