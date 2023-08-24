#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanFakeDeath_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanFakeDeath.GA_SkeletonGuardmanFakeDeath_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanFakeDeath_C::ExecuteUbergraph_GA_SkeletonGuardmanFakeDeath(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanFakeDeath.GA_SkeletonGuardmanFakeDeath_C.ExecuteUbergraph_GA_SkeletonGuardmanFakeDeath");

	FExecuteUbergraph_GA_SkeletonGuardmanFakeDeath parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

