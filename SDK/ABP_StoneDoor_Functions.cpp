#include "pch.h"
#include "SDK.h"

void UABP_StoneDoor_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneDoor.ABP_StoneDoor_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_StoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneDoor_AnimGraphNode_TransitionResult_BC48A2E746D76B7C2C94DDABABCA05E5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneDoor.ABP_StoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneDoor_AnimGraphNode_TransitionResult_BC48A2E746D76B7C2C94DDABABCA05E5");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneDoor_AnimGraphNode_TransitionResult_BC48A2E746D76B7C2C94DDABABCA05E5 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_StoneDoor_C::ExecuteUbergraph_ABP_StoneDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneDoor.ABP_StoneDoor_C.ExecuteUbergraph_ABP_StoneDoor");

	FExecuteUbergraph_ABP_StoneDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

