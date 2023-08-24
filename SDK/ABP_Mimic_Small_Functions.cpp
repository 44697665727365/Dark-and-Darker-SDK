#include "pch.h"
#include "SDK.h"

void UABP_Mimic_Small_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Small.ABP_Mimic_Small_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Mimic_Small_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Small.ABP_Mimic_Small_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_Mimic_Small_C::ExecuteUbergraph_ABP_Mimic_Small(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Small.ABP_Mimic_Small_C.ExecuteUbergraph_ABP_Mimic_Small");

	FExecuteUbergraph_ABP_Mimic_Small parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

