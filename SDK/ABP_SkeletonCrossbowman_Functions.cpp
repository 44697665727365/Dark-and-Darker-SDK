#include "pch.h"
#include "SDK.h"

void UABP_SkeletonCrossbowman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCrossbowman.ABP_SkeletonCrossbowman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCrossbowman_C::ExecuteUbergraph_ABP_SkeletonCrossbowman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCrossbowman.ABP_SkeletonCrossbowman_C.ExecuteUbergraph_ABP_SkeletonCrossbowman");

	FExecuteUbergraph_ABP_SkeletonCrossbowman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

