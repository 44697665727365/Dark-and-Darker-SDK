#include "pch.h"
#include "SDK.h"

void UABP_SecretWallDoor_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SecretWallDoor.ABP_SecretWallDoor_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SecretWallDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_7DEC159C4A12A10DF57346ACFAA9ABEA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SecretWallDoor.ABP_SecretWallDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_7DEC159C4A12A10DF57346ACFAA9ABEA");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_7DEC159C4A12A10DF57346ACFAA9ABEA parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SecretWallDoor_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_6BC3C7894F63F3F45482D1AAFC66EF90(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SecretWallDoor.ABP_SecretWallDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_6BC3C7894F63F3F45482D1AAFC66EF90");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SecretWallDoor_AnimGraphNode_TransitionResult_6BC3C7894F63F3F45482D1AAFC66EF90 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SecretWallDoor_C::ExecuteUbergraph_ABP_SecretWallDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SecretWallDoor.ABP_SecretWallDoor_C.ExecuteUbergraph_ABP_SecretWallDoor");

	FExecuteUbergraph_ABP_SecretWallDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

