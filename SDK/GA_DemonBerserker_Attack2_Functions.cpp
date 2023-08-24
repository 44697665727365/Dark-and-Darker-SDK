#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack2_C::EventReceived_080BA9904AD813B5DBEEC49CA29DCA43(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2.GA_DemonBerserker_Attack2_C.EventReceived_080BA9904AD813B5DBEEC49CA29DCA43");

	FEventReceived_080BA9904AD813B5DBEEC49CA29DCA43 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2.GA_DemonBerserker_Attack2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2.GA_DemonBerserker_Attack2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2_C::ExecuteUbergraph_GA_DemonBerserker_Attack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2.GA_DemonBerserker_Attack2_C.ExecuteUbergraph_GA_DemonBerserker_Attack2");

	FExecuteUbergraph_GA_DemonBerserker_Attack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

