#include "pch.h"
#include "SDK.h"

void UABP_Coffin_05_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_05.ABP_Coffin_05_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_05_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_8B47FC284E917D0B344600BFB7F1FE51(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_05.ABP_Coffin_05_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_8B47FC284E917D0B344600BFB7F1FE51");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_8B47FC284E917D0B344600BFB7F1FE51 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_05_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_58257B534098EC309483D49BD308AE06(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_05.ABP_Coffin_05_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_58257B534098EC309483D49BD308AE06");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_58257B534098EC309483D49BD308AE06 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_05_C::ExecuteUbergraph_ABP_Coffin_05(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_05.ABP_Coffin_05_C.ExecuteUbergraph_ABP_Coffin_05");

	FExecuteUbergraph_ABP_Coffin_05 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

