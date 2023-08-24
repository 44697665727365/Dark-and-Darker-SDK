#include "pch.h"
#include "SDK.h"

void UABP_Lift_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lift.ABP_Lift_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Lift_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B39E3CFC432F22ED6E19BCB5AB9B3D21(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lift.ABP_Lift_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B39E3CFC432F22ED6E19BCB5AB9B3D21");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B39E3CFC432F22ED6E19BCB5AB9B3D21 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lift_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B31835984FE3E520D8025D94EBFF8369(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lift.ABP_Lift_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B31835984FE3E520D8025D94EBFF8369");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lift_AnimGraphNode_TransitionResult_B31835984FE3E520D8025D94EBFF8369 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lift_C::ExecuteUbergraph_ABP_Lift(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lift.ABP_Lift_C.ExecuteUbergraph_ABP_Lift");

	FExecuteUbergraph_ABP_Lift parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

