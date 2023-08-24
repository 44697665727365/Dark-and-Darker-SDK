#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack1_C::EventReceived_564F5B6C4DB573D61F1A8AA04342AF7C(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.EventReceived_564F5B6C4DB573D61F1A8AA04342AF7C");

	FEventReceived_564F5B6C4DB573D61F1A8AA04342AF7C parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack1_C::ExecuteUbergraph_GA_DemonBerserker_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.ExecuteUbergraph_GA_DemonBerserker_Attack1");

	FExecuteUbergraph_GA_DemonBerserker_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

