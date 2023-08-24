#include "pch.h"
#include "SDK.h"

void UABP_GoblinBolaslinger_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinBolaslinger_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinBolaslinger_C::ExecuteUbergraph_ABP_GoblinBolaslinger(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.ExecuteUbergraph_ABP_GoblinBolaslinger");

	FExecuteUbergraph_ABP_GoblinBolaslinger parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

