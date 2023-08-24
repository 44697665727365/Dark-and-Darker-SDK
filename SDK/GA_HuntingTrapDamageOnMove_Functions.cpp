#include "pch.h"
#include "SDK.h"

void UGA_HuntingTrapDamageOnMove_C::EventReceived_9E74D6F347C54F8146C39898E5654F35(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.EventReceived_9E74D6F347C54F8146C39898E5654F35");

	FEventReceived_9E74D6F347C54F8146C39898E5654F35 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDamageOnMove_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDamageOnMove_C::ExecuteUbergraph_GA_HuntingTrapDamageOnMove(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.ExecuteUbergraph_GA_HuntingTrapDamageOnMove");

	FExecuteUbergraph_GA_HuntingTrapDamageOnMove parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

