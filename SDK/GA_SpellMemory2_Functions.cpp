#include "pch.h"
#include "SDK.h"

void UGA_SpellMemory2_C::EventReceived_B9E22EE640370E33E9B77B8AF925FD82(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory2.GA_SpellMemory2_C.EventReceived_B9E22EE640370E33E9B77B8AF925FD82");

	FEventReceived_B9E22EE640370E33E9B77B8AF925FD82 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory2_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory2.GA_SpellMemory2_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory2.GA_SpellMemory2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SpellMemory2_C::ExecuteUbergraph_GA_SpellMemory2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpellMemory2.GA_SpellMemory2_C.ExecuteUbergraph_GA_SpellMemory2");

	FExecuteUbergraph_GA_SpellMemory2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

