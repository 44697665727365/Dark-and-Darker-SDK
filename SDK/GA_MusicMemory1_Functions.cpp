#include "pch.h"
#include "SDK.h"

void UGA_MusicMemory1_C::EventReceived_F517DE854D98432C98CF55B4AE2C227E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory1.GA_MusicMemory1_C.EventReceived_F517DE854D98432C98CF55B4AE2C227E");

	FEventReceived_F517DE854D98432C98CF55B4AE2C227E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory1_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory1.GA_MusicMemory1_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory1.GA_MusicMemory1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory1_C::ExecuteUbergraph_GA_MusicMemory1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory1.GA_MusicMemory1_C.ExecuteUbergraph_GA_MusicMemory1");

	FExecuteUbergraph_GA_MusicMemory1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

