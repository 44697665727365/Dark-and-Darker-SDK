#include "pch.h"
#include "SDK.h"

void ABP_SkeletonArcher_Summoned_Arrow_Frenzy_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned_Arrow_Frenzy.BP_SkeletonArcher_Summoned_Arrow_Frenzy_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_Arrow_Frenzy_C::ExecuteUbergraph_BP_SkeletonArcher_Summoned_Arrow_Frenzy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned_Arrow_Frenzy.BP_SkeletonArcher_Summoned_Arrow_Frenzy_C.ExecuteUbergraph_BP_SkeletonArcher_Summoned_Arrow_Frenzy");

	FExecuteUbergraph_BP_SkeletonArcher_Summoned_Arrow_Frenzy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

