#include "pch.h"
#include "SDK.h"

void UGA_Stealth_C::OnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5(struct FAbilityEndedData& AbilityEndedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.OnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5");

	FOnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5 parms{};	
	parms.AbilityEndedData = AbilityEndedData;

	ProcessEvent(fn, &parms);
}

void UGA_Stealth_C::OnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.OnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5");

	FOnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5 parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

void UGA_Stealth_C::EventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.EventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4");

	FEventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Stealth_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Stealth_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Stealth_C::ExecuteUbergraph_GA_Stealth(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Stealth.GA_Stealth_C.ExecuteUbergraph_GA_Stealth");

	FExecuteUbergraph_GA_Stealth parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

