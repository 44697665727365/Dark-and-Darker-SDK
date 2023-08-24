#include "pch.h"
#include "SDK.h"

void UGA_LichCurseOfGathering_C::EventReceived_1026E4324493175E89D29889FC250FBF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.EventReceived_1026E4324493175E89D29889FC250FBF");

	FEventReceived_1026E4324493175E89D29889FC250FBF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfGathering_C::EventReceived_49194393483D7B030ED871BDFB878B0B(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.EventReceived_49194393483D7B030ED871BDFB878B0B");

	FEventReceived_49194393483D7B030ED871BDFB878B0B parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfGathering_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfGathering_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LichCurseOfGathering_C::ExecuteUbergraph_GA_LichCurseOfGathering(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCurseOfGathering.GA_LichCurseOfGathering_C.ExecuteUbergraph_GA_LichCurseOfGathering");

	FExecuteUbergraph_GA_LichCurseOfGathering parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

