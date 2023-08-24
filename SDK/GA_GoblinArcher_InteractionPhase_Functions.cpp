#include "pch.h"
#include "SDK.h"

void UGA_GoblinArcher_InteractionPhase_C::EventReceived_CC01263B4FD69AF23B615D9494EBCC97(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.EventReceived_CC01263B4FD69AF23B615D9494EBCC97");

	FEventReceived_CC01263B4FD69AF23B615D9494EBCC97 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_InteractionPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_InteractionPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_InteractionPhase_C::ExecuteUbergraph_GA_GoblinArcher_InteractionPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.ExecuteUbergraph_GA_GoblinArcher_InteractionPhase");

	FExecuteUbergraph_GA_GoblinArcher_InteractionPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

