#include "pch.h"
#include "SDK.h"

void UABP_GiantSpider_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantSpider.ABP_GiantSpider_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GiantSpider_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantSpider.ABP_GiantSpider_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_GiantSpider_C::ExecuteUbergraph_ABP_GiantSpider(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GiantSpider.ABP_GiantSpider_C.ExecuteUbergraph_ABP_GiantSpider");

	FExecuteUbergraph_ABP_GiantSpider parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

