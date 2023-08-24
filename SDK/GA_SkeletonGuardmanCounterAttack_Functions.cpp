#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanCounterAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanCounterAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanCounterAttack_C::ExecuteUbergraph_GA_SkeletonGuardmanCounterAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.ExecuteUbergraph_GA_SkeletonGuardmanCounterAttack");

	FExecuteUbergraph_GA_SkeletonGuardmanCounterAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

