#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack1FromIdle_C::EventReceived_C72931E7494CC472072042A62E726BE3(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1FromIdle.GA_DemonBerserker_Attack1FromIdle_C.EventReceived_C72931E7494CC472072042A62E726BE3");

	FEventReceived_C72931E7494CC472072042A62E726BE3 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1FromIdle_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1FromIdle.GA_DemonBerserker_Attack1FromIdle_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1FromIdle_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1FromIdle.GA_DemonBerserker_Attack1FromIdle_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1FromIdle_C::ExecuteUbergraph_GA_DemonBerserker_Attack1FromIdle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1FromIdle.GA_DemonBerserker_Attack1FromIdle_C.ExecuteUbergraph_GA_DemonBerserker_Attack1FromIdle");

	FExecuteUbergraph_GA_DemonBerserker_Attack1FromIdle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

