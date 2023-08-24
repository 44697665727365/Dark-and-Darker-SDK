#include "pch.h"
#include "SDK.h"

void UABP_SingleStoneDoor_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SingleStoneDoor.ABP_SingleStoneDoor_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SingleStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_533C4959463986BE442FA7B7B514D2E6(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SingleStoneDoor.ABP_SingleStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_533C4959463986BE442FA7B7B514D2E6");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_533C4959463986BE442FA7B7B514D2E6 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SingleStoneDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_6326E26743AD03389637CDAA084FDBB9(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SingleStoneDoor.ABP_SingleStoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_6326E26743AD03389637CDAA084FDBB9");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SingleStoneDoor_AnimGraphNode_TransitionResult_6326E26743AD03389637CDAA084FDBB9 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SingleStoneDoor_C::ExecuteUbergraph_ABP_SingleStoneDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SingleStoneDoor.ABP_SingleStoneDoor_C.ExecuteUbergraph_ABP_SingleStoneDoor");

	FExecuteUbergraph_ABP_SingleStoneDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

