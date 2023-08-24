#include "pch.h"
#include "SDK.h"

void UABP_DemonDog_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonDog.ABP_DemonDog_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_DemonDog_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonDog.ABP_DemonDog_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_DemonDog_C::ExecuteUbergraph_ABP_DemonDog(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_DemonDog.ABP_DemonDog_C.ExecuteUbergraph_ABP_DemonDog");

	FExecuteUbergraph_ABP_DemonDog parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

