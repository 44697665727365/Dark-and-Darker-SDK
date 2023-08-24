#include "pch.h"
#include "SDK.h"

void UGA_EarthquakeAttack_C::(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.");

	F parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_EarthquakeAttack_C::Removed_9E6658F8454852B6E36EE1B51E43362D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.Removed_9E6658F8454852B6E36EE1B51E43362D");

	FRemoved_9E6658F8454852B6E36EE1B51E43362D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_EarthquakeAttack_C::EventReceived_33FB7CA34B61D273DD00EB869E699495(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.EventReceived_33FB7CA34B61D273DD00EB869E699495");

	FEventReceived_33FB7CA34B61D273DD00EB869E699495 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_EarthquakeAttack_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_EarthquakeAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_EarthquakeAttack_C::ExecuteUbergraph_GA_EarthquakeAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.ExecuteUbergraph_GA_EarthquakeAttack");

	FExecuteUbergraph_GA_EarthquakeAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

