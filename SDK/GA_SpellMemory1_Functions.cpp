#include "pch.h"
#include "SDK.h"

void UGA_SpellMemory1_C::EventReceived_A23D97E7401DDAFC80A365BBF71FED80(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory1.GA_SpellMemory1_C.EventReceived_A23D97E7401DDAFC80A365BBF71FED80");

	FEventReceived_A23D97E7401DDAFC80A365BBF71FED80 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory1_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory1.GA_SpellMemory1_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory1.GA_SpellMemory1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory1_C::ExecuteUbergraph_GA_SpellMemory1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory1.GA_SpellMemory1_C.ExecuteUbergraph_GA_SpellMemory1");

	FExecuteUbergraph_GA_SpellMemory1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

