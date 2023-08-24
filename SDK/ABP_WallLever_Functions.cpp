#include "pch.h"
#include "SDK.h"

void UABP_WallLever_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WallLever.ABP_WallLever_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_WallLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_02435B3C4D2521316988339DAEC29A4C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WallLever.ABP_WallLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_02435B3C4D2521316988339DAEC29A4C");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_02435B3C4D2521316988339DAEC29A4C parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_WallLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_B1B0DE78447F873DAE104CB34A59F484(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WallLever.ABP_WallLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_B1B0DE78447F873DAE104CB34A59F484");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallLever_AnimGraphNode_TransitionResult_B1B0DE78447F873DAE104CB34A59F484 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_WallLever_C::ExecuteUbergraph_ABP_WallLever(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WallLever.ABP_WallLever_C.ExecuteUbergraph_ABP_WallLever");

	FExecuteUbergraph_ABP_WallLever parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

