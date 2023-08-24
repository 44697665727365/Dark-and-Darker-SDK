#include "pch.h"
#include "SDK.h"

void UABP_SkeletonChampion_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonChampion.ABP_SkeletonChampion_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonChampion_C::ExecuteUbergraph_ABP_SkeletonChampion(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonChampion.ABP_SkeletonChampion_C.ExecuteUbergraph_ABP_SkeletonChampion");

	FExecuteUbergraph_ABP_SkeletonChampion parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

