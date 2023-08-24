#include "pch.h"
#include "SDK.h"

void UABP_SkeletonWarlord_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonWarlord.ABP_SkeletonWarlord_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonWarlord_C::ExecuteUbergraph_ABP_SkeletonWarlord(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonWarlord.ABP_SkeletonWarlord_C.ExecuteUbergraph_ABP_SkeletonWarlord");

	FExecuteUbergraph_ABP_SkeletonWarlord parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

