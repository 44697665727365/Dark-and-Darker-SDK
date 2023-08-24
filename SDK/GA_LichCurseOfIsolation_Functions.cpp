#include "pch.h"
#include "SDK.h"

void UGA_LichCurseOfIsolation_C::EventReceived_F6D7C7644E62BFAC1BCCE88C0EA9CFFA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.EventReceived_F6D7C7644E62BFAC1BCCE88C0EA9CFFA");

	FEventReceived_F6D7C7644E62BFAC1BCCE88C0EA9CFFA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfIsolation_C::EventReceived_4946331145B17BC0E77DBD86D5E564EA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.EventReceived_4946331145B17BC0E77DBD86D5E564EA");

	FEventReceived_4946331145B17BC0E77DBD86D5E564EA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfIsolation_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfIsolation_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfIsolation_C::ExecuteUbergraph_GA_LichCurseOfIsolation(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.ExecuteUbergraph_GA_LichCurseOfIsolation");

	FExecuteUbergraph_GA_LichCurseOfIsolation parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

