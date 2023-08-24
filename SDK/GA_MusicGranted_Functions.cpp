#include "pch.h"
#include "SDK.h"

void UGA_MusicGranted_C::Removed_80134EFF47A63FEC32078584C2E78FA3(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted.GA_MusicGranted_C.Removed_80134EFF47A63FEC32078584C2E78FA3");

	FRemoved_80134EFF47A63FEC32078584C2E78FA3 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted.GA_MusicGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted.GA_MusicGranted_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_C::ExecuteUbergraph_GA_MusicGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted.GA_MusicGranted_C.ExecuteUbergraph_GA_MusicGranted");

	FExecuteUbergraph_GA_MusicGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

