#include "pch.h"
#include "SDK.h"

void ABP_SkeletonAxeman_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonAxeman.BP_SkeletonAxeman_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonAxeman_C::ExecuteUbergraph_BP_SkeletonAxeman(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonAxeman.BP_SkeletonAxeman_C.ExecuteUbergraph_BP_SkeletonAxeman");

	FExecuteUbergraph_BP_SkeletonAxeman parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

