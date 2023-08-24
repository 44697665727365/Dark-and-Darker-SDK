#include "pch.h"
#include "SDK.h"

void UABP_GiantCentipede_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantCentipede.ABP_GiantCentipede_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GiantCentipede_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantCentipede.ABP_GiantCentipede_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_GiantCentipede_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantCentipede.ABP_GiantCentipede_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_GiantCentipede_C::ExecuteUbergraph_ABP_GiantCentipede(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantCentipede.ABP_GiantCentipede_C.ExecuteUbergraph_ABP_GiantCentipede");

	FExecuteUbergraph_ABP_GiantCentipede parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

