#include "pch.h"
#include "SDK.h"

void UABP_RuinsGolem_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RuinsGolem.ABP_RuinsGolem_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_RuinsGolem_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RuinsGolem.ABP_RuinsGolem_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_RuinsGolem_C::ExecuteUbergraph_ABP_RuinsGolem(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RuinsGolem.ABP_RuinsGolem_C.ExecuteUbergraph_ABP_RuinsGolem");

	FExecuteUbergraph_ABP_RuinsGolem parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

