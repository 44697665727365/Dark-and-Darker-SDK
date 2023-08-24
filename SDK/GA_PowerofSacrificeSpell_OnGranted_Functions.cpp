#include "pch.h"
#include "SDK.h"

void UGA_PowerofSacrificeSpell_OnGranted_C::Removed_2EA363F149D0E4E7E8F1E6948FBAD6DE(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.Removed_2EA363F149D0E4E7E8F1E6948FBAD6DE");

	FRemoved_2EA363F149D0E4E7E8F1E6948FBAD6DE parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrificeSpell_OnGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrificeSpell_OnGranted_C::ExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.ExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted");

	FExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

