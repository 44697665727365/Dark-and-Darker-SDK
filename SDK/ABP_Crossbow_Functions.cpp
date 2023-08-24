#include "pch.h"
#include "SDK.h"

void UABP_Crossbow_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Crossbow.ABP_Crossbow_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Crossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_A198D84A471518187E7C65B383F4BDD4(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Crossbow.ABP_Crossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_A198D84A471518187E7C65B383F4BDD4");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_A198D84A471518187E7C65B383F4BDD4 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Crossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_EC386F7947887E1AD71AF5B26189C1F7(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Crossbow.ABP_Crossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_EC386F7947887E1AD71AF5B26189C1F7");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_EC386F7947887E1AD71AF5B26189C1F7 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Crossbow_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Crossbow.ABP_Crossbow_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_Crossbow_C::ExecuteUbergraph_ABP_Crossbow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Crossbow.ABP_Crossbow_C.ExecuteUbergraph_ABP_Crossbow");

	FExecuteUbergraph_ABP_Crossbow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

