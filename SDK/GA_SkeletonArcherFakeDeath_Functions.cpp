#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcherFakeDeath_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherFakeDeath.GA_SkeletonArcherFakeDeath_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherFakeDeath_C::ExecuteUbergraph_GA_SkeletonArcherFakeDeath(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherFakeDeath.GA_SkeletonArcherFakeDeath_C.ExecuteUbergraph_GA_SkeletonArcherFakeDeath");

	FExecuteUbergraph_GA_SkeletonArcherFakeDeath parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

