#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcherSummoned_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherSummoned_Death.GA_SkeletonArcherSummoned_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherSummoned_Death_C::ExecuteUbergraph_GA_SkeletonArcherSummoned_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherSummoned_Death.GA_SkeletonArcherSummoned_Death_C.ExecuteUbergraph_GA_SkeletonArcherSummoned_Death");

	FExecuteUbergraph_GA_SkeletonArcherSummoned_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

