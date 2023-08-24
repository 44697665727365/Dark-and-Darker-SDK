#include "pch.h"
#include "SDK.h"

void UABP_HandCrossbow_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_CEB1B05C481938C809C8AB84410CC348(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_CEB1B05C481938C809C8AB84410CC348");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_CEB1B05C481938C809C8AB84410CC348 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_74C3D1F84FE5FD4C5443D88DEC972BD7(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_74C3D1F84FE5FD4C5443D88DEC972BD7");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HandCrossbow_AnimGraphNode_TransitionResult_74C3D1F84FE5FD4C5443D88DEC972BD7 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::OnBlendingOut(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.OnBlendingOut");

	FOnBlendingOut parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_HandCrossbow_C::ExecuteUbergraph_ABP_HandCrossbow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_HandCrossbow.ABP_HandCrossbow_C.ExecuteUbergraph_ABP_HandCrossbow");

	FExecuteUbergraph_ABP_HandCrossbow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

