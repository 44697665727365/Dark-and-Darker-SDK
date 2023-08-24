#include "pch.h"
#include "SDK.h"

void UABP_UndeadKnight_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_UndeadKnight.ABP_UndeadKnight_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_UndeadKnight_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_UndeadKnight.ABP_UndeadKnight_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_UndeadKnight_C::ExecuteUbergraph_ABP_UndeadKnight(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_UndeadKnight.ABP_UndeadKnight_C.ExecuteUbergraph_ABP_UndeadKnight");

	FExecuteUbergraph_ABP_UndeadKnight parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

