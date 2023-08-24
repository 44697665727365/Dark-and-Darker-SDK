#include "pch.h"
#include "SDK.h"

void UABP_StoneTomb01_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneTomb01.ABP_StoneTomb01_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_StoneTomb01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_StoneTomb01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_StoneTomb01_C::ExecuteUbergraph_ABP_StoneTomb01(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_StoneTomb01.ABP_StoneTomb01_C.ExecuteUbergraph_ABP_StoneTomb01");

	FExecuteUbergraph_ABP_StoneTomb01 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

