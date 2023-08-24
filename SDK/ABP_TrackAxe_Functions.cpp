#include "pch.h"
#include "SDK.h"

void UABP_TrackAxe_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_TrackAxe.ABP_TrackAxe_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_TrackAxe_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_E5C7721444F8936E71B1E08DA845F9BD(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_TrackAxe.ABP_TrackAxe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_E5C7721444F8936E71B1E08DA845F9BD");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_E5C7721444F8936E71B1E08DA845F9BD parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_TrackAxe_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_2846F5BE486A653F072C8E965E600EFE(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_TrackAxe.ABP_TrackAxe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_2846F5BE486A653F072C8E965E600EFE");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrackAxe_AnimGraphNode_TransitionResult_2846F5BE486A653F072C8E965E600EFE parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_TrackAxe_C::ExecuteUbergraph_ABP_TrackAxe(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_TrackAxe.ABP_TrackAxe_C.ExecuteUbergraph_ABP_TrackAxe");

	FExecuteUbergraph_ABP_TrackAxe parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

