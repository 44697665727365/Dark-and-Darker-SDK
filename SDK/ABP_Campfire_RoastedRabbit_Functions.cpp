#include "pch.h"
#include "SDK.h"

void UABP_Campfire_RoastedRabbit_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_RoastedRabbit.ABP_Campfire_RoastedRabbit_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_RoastedRabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_7F31320449686B1E2AF9FF81C004C789(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_RoastedRabbit.ABP_Campfire_RoastedRabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_7F31320449686B1E2AF9FF81C004C789");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_7F31320449686B1E2AF9FF81C004C789 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_RoastedRabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_FEDCEDEA443B7C825E555BB7B783E00B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_RoastedRabbit.ABP_Campfire_RoastedRabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_FEDCEDEA443B7C825E555BB7B783E00B");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_RoastedRabbit_AnimGraphNode_TransitionResult_FEDCEDEA443B7C825E555BB7B783E00B parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_RoastedRabbit_C::ExecuteUbergraph_ABP_Campfire_RoastedRabbit(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_RoastedRabbit.ABP_Campfire_RoastedRabbit_C.ExecuteUbergraph_ABP_Campfire_RoastedRabbit");

	FExecuteUbergraph_ABP_Campfire_RoastedRabbit parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

