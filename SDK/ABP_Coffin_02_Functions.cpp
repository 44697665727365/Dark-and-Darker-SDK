#include "pch.h"
#include "SDK.h"

void UABP_Coffin_02_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_02.ABP_Coffin_02_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_576C991145BED7383A3106BE038A5572(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_02.ABP_Coffin_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_576C991145BED7383A3106BE038A5572");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_576C991145BED7383A3106BE038A5572 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_78951F094C44155E92408CA1732B28CA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_02.ABP_Coffin_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_78951F094C44155E92408CA1732B28CA");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_02_AnimGraphNode_TransitionResult_78951F094C44155E92408CA1732B28CA parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Coffin_02_C::ExecuteUbergraph_ABP_Coffin_02(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Coffin_02.ABP_Coffin_02_C.ExecuteUbergraph_ABP_Coffin_02");

	FExecuteUbergraph_ABP_Coffin_02 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

