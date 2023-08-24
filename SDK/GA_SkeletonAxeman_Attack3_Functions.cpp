#include "pch.h"
#include "SDK.h"

void UGA_SkeletonAxeman_Attack3_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack3.GA_SkeletonAxeman_Attack3_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonAxeman_Attack3_C::ExecuteUbergraph_GA_SkeletonAxeman_Attack3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack3.GA_SkeletonAxeman_Attack3_C.ExecuteUbergraph_GA_SkeletonAxeman_Attack3");

	FExecuteUbergraph_GA_SkeletonAxeman_Attack3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}
