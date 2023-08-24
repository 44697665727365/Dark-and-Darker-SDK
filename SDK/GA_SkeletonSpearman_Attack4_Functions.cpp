#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSpearman_Attack4_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack4.GA_SkeletonSpearman_Attack4_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_Attack4_C::ExecuteUbergraph_GA_SkeletonSpearman_Attack4(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack4.GA_SkeletonSpearman_Attack4_C.ExecuteUbergraph_GA_SkeletonSpearman_Attack4");

	FExecuteUbergraph_GA_SkeletonSpearman_Attack4 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

