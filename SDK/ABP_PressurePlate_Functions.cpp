#include "pch.h"
#include "SDK.h"

void UABP_PressurePlate_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PressurePlate.ABP_PressurePlate_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_PressurePlate_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_D2D974D44B853FF46297D4876C0D1D83(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PressurePlate.ABP_PressurePlate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_D2D974D44B853FF46297D4876C0D1D83");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_D2D974D44B853FF46297D4876C0D1D83 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_PressurePlate_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_CE68B73C4A382C8933677991583A2114(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PressurePlate.ABP_PressurePlate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_CE68B73C4A382C8933677991583A2114");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PressurePlate_AnimGraphNode_TransitionResult_CE68B73C4A382C8933677991583A2114 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_PressurePlate_C::ExecuteUbergraph_ABP_PressurePlate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PressurePlate.ABP_PressurePlate_C.ExecuteUbergraph_ABP_PressurePlate");

	FExecuteUbergraph_ABP_PressurePlate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

