#include "pch.h"
#include "SDK.h"

void UABP_Portcullis_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Portcullis.ABP_Portcullis_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Portcullis_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_8B88A0F64ED298D4BEE1DBBBDB046A58(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Portcullis.ABP_Portcullis_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_8B88A0F64ED298D4BEE1DBBBDB046A58");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_8B88A0F64ED298D4BEE1DBBBDB046A58 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Portcullis_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_47A216B6467995BB000E69BEC20D9E8F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Portcullis.ABP_Portcullis_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_47A216B6467995BB000E69BEC20D9E8F");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Portcullis_AnimGraphNode_TransitionResult_47A216B6467995BB000E69BEC20D9E8F parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Portcullis_C::ExecuteUbergraph_ABP_Portcullis(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Portcullis.ABP_Portcullis_C.ExecuteUbergraph_ABP_Portcullis");

	FExecuteUbergraph_ABP_Portcullis parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

