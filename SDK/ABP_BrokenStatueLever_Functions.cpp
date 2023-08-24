#include "pch.h"
#include "SDK.h"

void UABP_BrokenStatueLever_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_BrokenStatueLever.ABP_BrokenStatueLever_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_BrokenStatueLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_BC95AE4A4BA1A5BF437CAA9EB72B078E(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_BrokenStatueLever.ABP_BrokenStatueLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_BC95AE4A4BA1A5BF437CAA9EB72B078E");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_BC95AE4A4BA1A5BF437CAA9EB72B078E parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_BrokenStatueLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_B6331E5A40657ECCEC125E8639A4411E(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_BrokenStatueLever.ABP_BrokenStatueLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_B6331E5A40657ECCEC125E8639A4411E");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BrokenStatueLever_AnimGraphNode_TransitionResult_B6331E5A40657ECCEC125E8639A4411E parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_BrokenStatueLever_C::ExecuteUbergraph_ABP_BrokenStatueLever(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_BrokenStatueLever.ABP_BrokenStatueLever_C.ExecuteUbergraph_ABP_BrokenStatueLever");

	FExecuteUbergraph_ABP_BrokenStatueLever parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

