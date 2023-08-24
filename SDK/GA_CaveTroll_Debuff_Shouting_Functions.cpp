#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Debuff_Shouting_C::EventReceived_2C61A1944EB3F1A04EBCEBBEE236433B(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_2C61A1944EB3F1A04EBCEBBEE236433B");

	FEventReceived_2C61A1944EB3F1A04EBCEBBEE236433B parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Debuff_Shouting_C::EventReceived_9F4198A841DE8D176747EAA1345AC0FC(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_9F4198A841DE8D176747EAA1345AC0FC");

	FEventReceived_9F4198A841DE8D176747EAA1345AC0FC parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Debuff_Shouting_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Debuff_Shouting_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Debuff_Shouting_C::ExecuteUbergraph_GA_CaveTroll_Debuff_Shouting(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.ExecuteUbergraph_GA_CaveTroll_Debuff_Shouting");

	FExecuteUbergraph_GA_CaveTroll_Debuff_Shouting parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

