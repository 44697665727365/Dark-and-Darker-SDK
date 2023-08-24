#include "pch.h"
#include "SDK.h"

void UABP_Coffin_01_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_01.ABP_Coffin_01_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_853460EC41CFE88506E49083BB9438D4(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_01.ABP_Coffin_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_853460EC41CFE88506E49083BB9438D4");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_853460EC41CFE88506E49083BB9438D4 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_B80A3B9C47D222C306D1418869BEA612(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_01.ABP_Coffin_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_B80A3B9C47D222C306D1418869BEA612");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_01_AnimGraphNode_TransitionResult_B80A3B9C47D222C306D1418869BEA612 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_01_C::ExecuteUbergraph_ABP_Coffin_01(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_01.ABP_Coffin_01_C.ExecuteUbergraph_ABP_Coffin_01");

	FExecuteUbergraph_ABP_Coffin_01 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

