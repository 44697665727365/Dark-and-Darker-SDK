#include "pch.h"
#include "SDK.h"

void UABP_GoblinAxeman_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinAxeman_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinAxeman_C::ExecuteUbergraph_ABP_GoblinAxeman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.ExecuteUbergraph_ABP_GoblinAxeman");

	FExecuteUbergraph_ABP_GoblinAxeman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

