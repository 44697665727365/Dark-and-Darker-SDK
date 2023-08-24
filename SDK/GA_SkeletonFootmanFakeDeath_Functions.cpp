#include "pch.h"
#include "SDK.h"

void UGA_SkeletonFootmanFakeDeath_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanFakeDeath.GA_SkeletonFootmanFakeDeath_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanFakeDeath_C::ExecuteUbergraph_GA_SkeletonFootmanFakeDeath(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanFakeDeath.GA_SkeletonFootmanFakeDeath_C.ExecuteUbergraph_GA_SkeletonFootmanFakeDeath");

	FExecuteUbergraph_GA_SkeletonFootmanFakeDeath parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

