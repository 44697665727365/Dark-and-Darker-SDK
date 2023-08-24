#include "pch.h"
#include "SDK.h"

void UABP_Pavise_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Pavise.ABP_Pavise_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Pavise_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_18B44C47481507277DC4F3B67A53870E(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Pavise.ABP_Pavise_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_18B44C47481507277DC4F3B67A53870E");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_18B44C47481507277DC4F3B67A53870E parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Pavise_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_CDD760A74611E46BC9BCDFB09232F69A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Pavise.ABP_Pavise_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_CDD760A74611E46BC9BCDFB09232F69A");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_CDD760A74611E46BC9BCDFB09232F69A parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Pavise_C::OnItemDataUpdated_2(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Pavise.ABP_Pavise_C.OnItemDataUpdated_2");

	FOnItemDataUpdated_2 parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_Pavise_C::ExecuteUbergraph_ABP_Pavise(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Pavise.ABP_Pavise_C.ExecuteUbergraph_ABP_Pavise");

	FExecuteUbergraph_ABP_Pavise parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

