#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSpearman_Attack2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack2.GA_SkeletonSpearman_Attack2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_Attack2_C::ExecuteUbergraph_GA_SkeletonSpearman_Attack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack2.GA_SkeletonSpearman_Attack2_C.ExecuteUbergraph_GA_SkeletonSpearman_Attack2");

	FExecuteUbergraph_GA_SkeletonSpearman_Attack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

