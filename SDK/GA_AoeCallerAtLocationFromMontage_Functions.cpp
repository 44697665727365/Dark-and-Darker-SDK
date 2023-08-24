#include "pch.h"
#include "SDK.h"

void UGA_AoeCallerAtLocationFromMontage_C::SpawnAoe(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.SpawnAoe");

	FSpawnAoe parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocationFromMontage_C::EventReceived_A2FB813847C970E0B81B0E8D2934AE40(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.EventReceived_A2FB813847C970E0B81B0E8D2934AE40");

	FEventReceived_A2FB813847C970E0B81B0E8D2934AE40 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocationFromMontage_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocationFromMontage_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocationFromMontage_C::SpawnAoeTimerLoop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.SpawnAoeTimerLoop");

	FSpawnAoeTimerLoop parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocationFromMontage_C::ExecuteUbergraph_GA_AoeCallerAtLocationFromMontage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.ExecuteUbergraph_GA_AoeCallerAtLocationFromMontage");

	FExecuteUbergraph_GA_AoeCallerAtLocationFromMontage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

