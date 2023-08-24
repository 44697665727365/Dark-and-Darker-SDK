#include "pch.h"
#include "SDK.h"

void ABP_SkeletonArcher_Arrow_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Arrow_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Arrow_C::ExecuteUbergraph_BP_SkeletonArcher_Arrow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Arrow.BP_SkeletonArcher_Arrow_C.ExecuteUbergraph_BP_SkeletonArcher_Arrow");

	FExecuteUbergraph_BP_SkeletonArcher_Arrow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

