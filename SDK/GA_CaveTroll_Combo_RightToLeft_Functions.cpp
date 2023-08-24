#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Combo_RightToLeft_C::EventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.EventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4");

	FEventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_RightToLeft_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_RightToLeft_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_RightToLeft_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_RightToLeft_C::ExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft");

	FExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

