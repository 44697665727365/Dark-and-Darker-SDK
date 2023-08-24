#include "pch.h"
#include "SDK.h"

void UGA_LichCurseState_C::EventReceived_9212A9594B6FFC3702D584854BF20D3E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseState.GA_LichCurseState_C.EventReceived_9212A9594B6FFC3702D584854BF20D3E");

	FEventReceived_9212A9594B6FFC3702D584854BF20D3E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseState.GA_LichCurseState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseState_C::ExecuteUbergraph_GA_LichCurseState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseState.GA_LichCurseState_C.ExecuteUbergraph_GA_LichCurseState");

	FExecuteUbergraph_GA_LichCurseState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

