#include "pch.h"
#include "SDK.h"

void UABP_PlayerCharacterResurrection_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacterResurrection_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacterResurrection_C::ExecuteUbergraph_ABP_PlayerCharacterResurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.ExecuteUbergraph_ABP_PlayerCharacterResurrection");

	FExecuteUbergraph_ABP_PlayerCharacterResurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

