#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack2FromIdle_C::EventReceived_17805B8345D124FA6FAF2CB3E2C10054(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.EventReceived_17805B8345D124FA6FAF2CB3E2C10054");

	FEventReceived_17805B8345D124FA6FAF2CB3E2C10054 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2FromIdle_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2FromIdle_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack2FromIdle_C::ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle");

	FExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

