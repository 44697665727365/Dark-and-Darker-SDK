#include "pch.h"
#include "SDK.h"

void UGA_IgniteSpell_OnGranted_C::EventReceived_DCE28BCC4B5EB2B17582A798A5CA2926(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.EventReceived_DCE28BCC4B5EB2B17582A798A5CA2926");

	FEventReceived_DCE28BCC4B5EB2B17582A798A5CA2926 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_IgniteSpell_OnGranted_C::Removed_7DCD86AB42B4B0AFC1643EBF44511259(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.Removed_7DCD86AB42B4B0AFC1643EBF44511259");

	FRemoved_7DCD86AB42B4B0AFC1643EBF44511259 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_IgniteSpell_OnGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_IgniteSpell_OnGranted_C::ExecuteUbergraph_GA_IgniteSpell_OnGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.ExecuteUbergraph_GA_IgniteSpell_OnGranted");

	FExecuteUbergraph_GA_IgniteSpell_OnGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

