#include "pch.h"
#include "SDK.h"

void UABP_MetalGobletLever_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_MetalGobletLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_EE179D46406D4F3DF707E6A49A2D167B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_EE179D46406D4F3DF707E6A49A2D167B");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_EE179D46406D4F3DF707E6A49A2D167B parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_MetalGobletLever_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_FE38D6064F7327DE34238DAC7728BAF2(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_FE38D6064F7327DE34238DAC7728BAF2");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_FE38D6064F7327DE34238DAC7728BAF2 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_MetalGobletLever_C::ExecuteUbergraph_ABP_MetalGobletLever(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.ExecuteUbergraph_ABP_MetalGobletLever");

	FExecuteUbergraph_ABP_MetalGobletLever parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

