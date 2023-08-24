#include "pch.h"
#include "SDK.h"

void UABP_Campfire_Kettle_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_Kettle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_32C6727148679332779745921B5BD2E7(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_32C6727148679332779745921B5BD2E7");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_32C6727148679332779745921B5BD2E7 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_Kettle_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_7EB26F0D4CCC28CB5D6F94B567CE5A9E(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_7EB26F0D4CCC28CB5D6F94B567CE5A9E");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Campfire_Kettle_AnimGraphNode_TransitionResult_7EB26F0D4CCC28CB5D6F94B567CE5A9E parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Campfire_Kettle_C::ExecuteUbergraph_ABP_Campfire_Kettle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.ExecuteUbergraph_ABP_Campfire_Kettle");

	FExecuteUbergraph_ABP_Campfire_Kettle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

