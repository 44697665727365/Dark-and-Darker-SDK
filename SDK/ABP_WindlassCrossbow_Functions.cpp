#include "pch.h"
#include "SDK.h"

void UABP_WindlassCrossbow_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_CC2623C54F1A9C7ADB2B408DB902597D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_CC2623C54F1A9C7ADB2B408DB902597D");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_CC2623C54F1A9C7ADB2B408DB902597D parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_DD6AF515464116E11B2CE587A7D69082(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_DD6AF515464116E11B2CE587A7D69082");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WindlassCrossbow_AnimGraphNode_TransitionResult_DD6AF515464116E11B2CE587A7D69082 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::OnBlendingOut(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.OnBlendingOut");

	FOnBlendingOut parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_WindlassCrossbow_C::ExecuteUbergraph_ABP_WindlassCrossbow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_WindlassCrossbow.ABP_WindlassCrossbow_C.ExecuteUbergraph_ABP_WindlassCrossbow");

	FExecuteUbergraph_ABP_WindlassCrossbow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

