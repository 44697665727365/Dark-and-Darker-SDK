#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Combo_Slap_C::EventReceived_9B98491D4F6285BB63D3F2B5127EFF0E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.EventReceived_9B98491D4F6285BB63D3F2B5127EFF0E");

	FEventReceived_9B98491D4F6285BB63D3F2B5127EFF0E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Slap_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Slap_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Slap_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Slap_C::ExecuteUbergraph_GA_CaveTroll_Combo_Slap(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ExecuteUbergraph_GA_CaveTroll_Combo_Slap");

	FExecuteUbergraph_GA_CaveTroll_Combo_Slap parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

