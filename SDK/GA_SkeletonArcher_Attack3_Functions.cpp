#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcher_Attack3_C::EventReceived_8FB9027344203331AB7216B23DB68538(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.EventReceived_8FB9027344203331AB7216B23DB68538");

	FEventReceived_8FB9027344203331AB7216B23DB68538 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Attack3_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Attack3_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Attack3_C::ExecuteUbergraph_GA_SkeletonArcher_Attack3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.ExecuteUbergraph_GA_SkeletonArcher_Attack3");

	FExecuteUbergraph_GA_SkeletonArcher_Attack3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

