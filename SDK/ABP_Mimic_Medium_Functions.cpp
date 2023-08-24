#include "pch.h"
#include "SDK.h"

void UABP_Mimic_Medium_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Mimic_Medium_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_Mimic_Medium_C::ExecuteUbergraph_ABP_Mimic_Medium(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.ExecuteUbergraph_ABP_Mimic_Medium");

	FExecuteUbergraph_ABP_Mimic_Medium parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

