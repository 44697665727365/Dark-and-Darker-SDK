#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Combo_LeftToRight_C::EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71");

	FEventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_LeftToRight_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_LeftToRight_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_LeftToRight_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_LeftToRight_C::ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight");

	FExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

