#include "pch.h"
#include "SDK.h"

void UGA_PerkGranted_C::Removed_99BC46A248ED96A63B3A4E913BC31F32(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerkGranted.GA_PerkGranted_C.Removed_99BC46A248ED96A63B3A4E913BC31F32");

	FRemoved_99BC46A248ED96A63B3A4E913BC31F32 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PerkGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerkGranted.GA_PerkGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PerkGranted_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerkGranted.GA_PerkGranted_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_PerkGranted_C::ExecuteUbergraph_GA_PerkGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerkGranted.GA_PerkGranted_C.ExecuteUbergraph_GA_PerkGranted");

	FExecuteUbergraph_GA_PerkGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

