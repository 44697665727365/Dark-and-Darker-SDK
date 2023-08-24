#include "pch.h"
#include "SDK.h"

void UABP_Coffin_04_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_04.ABP_Coffin_04_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_04_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_4A625A0F4CDEB54DB59CF691484FC0F3(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_04.ABP_Coffin_04_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_4A625A0F4CDEB54DB59CF691484FC0F3");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_4A625A0F4CDEB54DB59CF691484FC0F3 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_04_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_86C5D60D4DBA421EDB6EE58AAAEB34EC(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_04.ABP_Coffin_04_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_86C5D60D4DBA421EDB6EE58AAAEB34EC");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_04_AnimGraphNode_TransitionResult_86C5D60D4DBA421EDB6EE58AAAEB34EC parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_04_C::ExecuteUbergraph_ABP_Coffin_04(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_04.ABP_Coffin_04_C.ExecuteUbergraph_ABP_Coffin_04");

	FExecuteUbergraph_ABP_Coffin_04 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

