#include "pch.h"
#include "SDK.h"

void UABP_GhostKing_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GhostKing.ABP_GhostKing_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GhostKing_C::BlueprintBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GhostKing.ABP_GhostKing_C.BlueprintBeginPlay");

	FBlueprintBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_GhostKing_C::ExecuteUbergraph_ABP_GhostKing(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GhostKing.ABP_GhostKing_C.ExecuteUbergraph_ABP_GhostKing");

	FExecuteUbergraph_ABP_GhostKing parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

