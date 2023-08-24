#include "pch.h"
#include "SDK.h"

void UABP_SkeletonMage_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonMage.ABP_SkeletonMage_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonMage_C::ExecuteUbergraph_ABP_SkeletonMage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonMage.ABP_SkeletonMage_C.ExecuteUbergraph_ABP_SkeletonMage");

	FExecuteUbergraph_ABP_SkeletonMage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

