#include "pch.h"
#include "SDK.h"

void UABP_Mummy_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mummy.ABP_Mummy_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Mummy_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mummy.ABP_Mummy_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Mummy_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mummy.ABP_Mummy_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_Mummy_C::ExecuteUbergraph_ABP_Mummy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Mummy.ABP_Mummy_C.ExecuteUbergraph_ABP_Mummy");

	FExecuteUbergraph_ABP_Mummy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

