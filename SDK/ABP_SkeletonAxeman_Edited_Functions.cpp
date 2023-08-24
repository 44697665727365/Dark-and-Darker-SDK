#include "pch.h"
#include "SDK.h"

void UABP_SkeletonAxeman_Edited_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonAxeman_Edited.ABP_SkeletonAxeman_Edited_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonAxeman_Edited_C::ExecuteUbergraph_ABP_SkeletonAxeman_Edited(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonAxeman_Edited.ABP_SkeletonAxeman_Edited_C.ExecuteUbergraph_ABP_SkeletonAxeman_Edited");

	FExecuteUbergraph_ABP_SkeletonAxeman_Edited parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

