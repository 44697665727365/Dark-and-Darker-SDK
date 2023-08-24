#include "pch.h"
#include "SDK.h"

void UABP_SkeletonArcher_Summoned_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_Summoned_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_Summoned_C::Removed_799E048149A10F6A8843F08FC7FB08A4(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.Removed_799E048149A10F6A8843F08FC7FB08A4");

	FRemoved_799E048149A10F6A8843F08FC7FB08A4 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_Summoned_C::Added_1F07E6964CA9FB2D9F6166AB57B55DF3(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.Added_1F07E6964CA9FB2D9F6166AB57B55DF3");

	FAdded_1F07E6964CA9FB2D9F6166AB57B55DF3 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_Summoned_C::BlueprintBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.BlueprintBeginPlay");

	FBlueprintBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonArcher_Summoned_C::ExecuteUbergraph_ABP_SkeletonArcher_Summoned(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.ExecuteUbergraph_ABP_SkeletonArcher_Summoned");

	FExecuteUbergraph_ABP_SkeletonArcher_Summoned parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

