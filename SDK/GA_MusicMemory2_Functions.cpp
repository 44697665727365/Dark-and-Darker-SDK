#include "pch.h"
#include "SDK.h"

void UGA_MusicMemory2_C::EventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory2.GA_MusicMemory2_C.EventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C");

	FEventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory2_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory2.GA_MusicMemory2_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory2.GA_MusicMemory2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MusicMemory2_C::ExecuteUbergraph_GA_MusicMemory2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicMemory2.GA_MusicMemory2_C.ExecuteUbergraph_GA_MusicMemory2");

	FExecuteUbergraph_GA_MusicMemory2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

