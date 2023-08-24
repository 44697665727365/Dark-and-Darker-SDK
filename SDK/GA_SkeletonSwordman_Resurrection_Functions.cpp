#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSwordman_Resurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Resurrection.GA_SkeletonSwordman_Resurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Resurrection_C::ExecuteUbergraph_GA_SkeletonSwordman_Resurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Resurrection.GA_SkeletonSwordman_Resurrection_C.ExecuteUbergraph_GA_SkeletonSwordman_Resurrection");

	FExecuteUbergraph_GA_SkeletonSwordman_Resurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

