#include "pch.h"
#include "SDK.h"

void UABP_DemonBerserker_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonBerserker.ABP_DemonBerserker_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DemonBerserker_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonBerserker.ABP_DemonBerserker_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_DemonBerserker_C::ExecuteUbergraph_ABP_DemonBerserker(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonBerserker.ABP_DemonBerserker_C.ExecuteUbergraph_ABP_DemonBerserker");

	FExecuteUbergraph_ABP_DemonBerserker parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

