#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcherAttack1_C::EventReceived_E33B9B8A42178D92C49CB99DCCDDC66D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.EventReceived_E33B9B8A42178D92C49CB99DCCDDC66D");

	FEventReceived_E33B9B8A42178D92C49CB99DCCDDC66D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack1_C::ExecuteUbergraph_GA_SkeletonArcherAttack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.ExecuteUbergraph_GA_SkeletonArcherAttack1");

	FExecuteUbergraph_GA_SkeletonArcherAttack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

