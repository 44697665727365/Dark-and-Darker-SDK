#include "pch.h"
#include "SDK.h"

void UABP_PlayerCharacter_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacter.ABP_PlayerCharacter_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacter_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacter.ABP_PlayerCharacter_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacter_C::ExecuteUbergraph_ABP_PlayerCharacter(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacter.ABP_PlayerCharacter_C.ExecuteUbergraph_ABP_PlayerCharacter");

	FExecuteUbergraph_ABP_PlayerCharacter parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

