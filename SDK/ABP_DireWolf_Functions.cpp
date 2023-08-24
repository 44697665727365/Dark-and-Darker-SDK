#include "pch.h"
#include "SDK.h"

void UABP_DireWolf_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DireWolf_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

bool UABP_DireWolf_C::TraceFloor(struct FName InSocketName, struct FVector& Location, float& Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.TraceFloor");

	FTraceFloor parms{};	
	parms.InSocketName = InSocketName;
	parms.Location = Location;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UABP_DireWolf_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_DireWolf_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_DireWolf_C::ExecuteUbergraph_ABP_DireWolf(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DireWolf.ABP_DireWolf_C.ExecuteUbergraph_ABP_DireWolf");

	FExecuteUbergraph_ABP_DireWolf parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

