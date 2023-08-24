#include "pch.h"
#include "SDK.h"

void UABP_Coffin_03_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_03.ABP_Coffin_03_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_0308FF074F3E11C7631DD69A1F3B16D5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_03.ABP_Coffin_03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_0308FF074F3E11C7631DD69A1F3B16D5");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_0308FF074F3E11C7631DD69A1F3B16D5 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_56BA409B4F61D07DA7FA7996151A57D0(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_03.ABP_Coffin_03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_56BA409B4F61D07DA7FA7996151A57D0");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_03_AnimGraphNode_TransitionResult_56BA409B4F61D07DA7FA7996151A57D0 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_03_C::ExecuteUbergraph_ABP_Coffin_03(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_03.ABP_Coffin_03_C.ExecuteUbergraph_ABP_Coffin_03");

	FExecuteUbergraph_ABP_Coffin_03 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

