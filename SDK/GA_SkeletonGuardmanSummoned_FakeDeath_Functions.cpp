#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanSummoned_FakeDeath_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_FakeDeath.GA_SkeletonGuardmanSummoned_FakeDeath_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_FakeDeath_C::ExecuteUbergraph_GA_SkeletonGuardmanSummoned_FakeDeath(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_FakeDeath.GA_SkeletonGuardmanSummoned_FakeDeath_C.ExecuteUbergraph_GA_SkeletonGuardmanSummoned_FakeDeath");

	FExecuteUbergraph_GA_SkeletonGuardmanSummoned_FakeDeath parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

