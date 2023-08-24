#include "pch.h"
#include "SDK.h"

void UABP_SkullStoneDoor_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullStoneDoor.ABP_SkullStoneDoor_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkullStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_13AD1575467DF9B73E523D9EF01DCA3F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullStoneDoor.ABP_SkullStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_13AD1575467DF9B73E523D9EF01DCA3F");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_13AD1575467DF9B73E523D9EF01DCA3F parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkullStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_E4CBC6C1483FCBF20F05B78AC5C2AA78(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullStoneDoor.ABP_SkullStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_E4CBC6C1483FCBF20F05B78AC5C2AA78");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkullStoneDoor_AnimGraphNode_TransitionResult_E4CBC6C1483FCBF20F05B78AC5C2AA78 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkullStoneDoor_C::ExecuteUbergraph_ABP_SkullStoneDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkullStoneDoor.ABP_SkullStoneDoor_C.ExecuteUbergraph_ABP_SkullStoneDoor");

	FExecuteUbergraph_ABP_SkullStoneDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

