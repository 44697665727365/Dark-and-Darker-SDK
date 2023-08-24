#include "pch.h"
#include "SDK.h"

void UGA_LichResurrectionSummonee_C::EventReceived_58B125304190401C7A5614A1C0047ACB(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.EventReceived_58B125304190401C7A5614A1C0047ACB");

	FEventReceived_58B125304190401C7A5614A1C0047ACB parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichResurrectionSummonee_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichResurrectionSummonee_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LichResurrectionSummonee_C::ExecuteUbergraph_GA_LichResurrectionSummonee(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.ExecuteUbergraph_GA_LichResurrectionSummonee");

	FExecuteUbergraph_GA_LichResurrectionSummonee parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

