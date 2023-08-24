#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_BonePrison_C::EventReceived_D2CC5BCE4261685F5F94E29E8E5F42BF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.EventReceived_D2CC5BCE4261685F5F94E29E8E5F42BF");

	FEventReceived_D2CC5BCE4261685F5F94E29E8E5F42BF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_BonePrison_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_BonePrison_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_BonePrison_C::Apply Effect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.Apply Effect");

	FApply Effect parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_BonePrison_C::ExecuteUbergraph_GA_SkeletonWarlord_BonePrison(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_BonePrison.GA_SkeletonWarlord_BonePrison_C.ExecuteUbergraph_GA_SkeletonWarlord_BonePrison");

	FExecuteUbergraph_GA_SkeletonWarlord_BonePrison parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

