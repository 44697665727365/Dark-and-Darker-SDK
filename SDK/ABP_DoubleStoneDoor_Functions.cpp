#include "pch.h"
#include "SDK.h"

void UABP_DoubleStoneDoor_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DoubleStoneDoor.ABP_DoubleStoneDoor_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DoubleStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_CB824BCB45905A35F94CB683403FF3E9(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DoubleStoneDoor.ABP_DoubleStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_CB824BCB45905A35F94CB683403FF3E9");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_CB824BCB45905A35F94CB683403FF3E9 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_DoubleStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_B7EEFA8F41719402647EDDBD6581A857(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DoubleStoneDoor.ABP_DoubleStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_B7EEFA8F41719402647EDDBD6581A857");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DoubleStoneDoor_AnimGraphNode_TransitionResult_B7EEFA8F41719402647EDDBD6581A857 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_DoubleStoneDoor_C::ExecuteUbergraph_ABP_DoubleStoneDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DoubleStoneDoor.ABP_DoubleStoneDoor_C.ExecuteUbergraph_ABP_DoubleStoneDoor");

	FExecuteUbergraph_ABP_DoubleStoneDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

