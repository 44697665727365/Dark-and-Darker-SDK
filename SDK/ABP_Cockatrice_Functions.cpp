#include "pch.h"
#include "SDK.h"

void UABP_Cockatrice_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Cockatrice.ABP_Cockatrice_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Cockatrice_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Cockatrice.ABP_Cockatrice_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_Cockatrice_C::ExecuteUbergraph_ABP_Cockatrice(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Cockatrice.ABP_Cockatrice_C.ExecuteUbergraph_ABP_Cockatrice");

	FExecuteUbergraph_ABP_Cockatrice parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

