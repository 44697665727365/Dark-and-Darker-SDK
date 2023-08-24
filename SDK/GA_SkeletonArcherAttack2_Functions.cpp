#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcherAttack2_C::EventReceived_A128DB6B484E5F3D046609B4A8E609A0(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.EventReceived_A128DB6B484E5F3D046609B4A8E609A0");

	FEventReceived_A128DB6B484E5F3D046609B4A8E609A0 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttack2_C::ExecuteUbergraph_GA_SkeletonArcherAttack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.ExecuteUbergraph_GA_SkeletonArcherAttack2");

	FExecuteUbergraph_GA_SkeletonArcherAttack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

