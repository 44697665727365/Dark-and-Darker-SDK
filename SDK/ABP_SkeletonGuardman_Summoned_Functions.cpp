#include "pch.h"
#include "SDK.h"

void UABP_SkeletonGuardman_Summoned_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_Summoned_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_Summoned_C::Removed_4707F7A046566CED8E583AAA644151A5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.Removed_4707F7A046566CED8E583AAA644151A5");

	FRemoved_4707F7A046566CED8E583AAA644151A5 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_Summoned_C::Added_C7B155A1483852911613FAB0B54028B3(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.Added_C7B155A1483852911613FAB0B54028B3");

	FAdded_C7B155A1483852911613FAB0B54028B3 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_Summoned_C::BlueprintBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.BlueprintBeginPlay");

	FBlueprintBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonGuardman_Summoned_C::ExecuteUbergraph_ABP_SkeletonGuardman_Summoned(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.ExecuteUbergraph_ABP_SkeletonGuardman_Summoned");

	FExecuteUbergraph_ABP_SkeletonGuardman_Summoned parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

