#include "pch.h"
#include "SDK.h"

void UGA_ChoraleOfClarityGranted_C::OnFinished_C8B6EBF246016F8671F1C59CA8233EB0(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnFinished_C8B6EBF246016F8671F1C59CA8233EB0");

	FOnFinished_C8B6EBF246016F8671F1C59CA8233EB0 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ChoraleOfClarityGranted_C::OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0");

	FOnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ChoraleOfClarityGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ChoraleOfClarityGranted_C::ExecuteUbergraph_GA_ChoraleOfClarityGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.ExecuteUbergraph_GA_ChoraleOfClarityGranted");

	FExecuteUbergraph_GA_ChoraleOfClarityGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

