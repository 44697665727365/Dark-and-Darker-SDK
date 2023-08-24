#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_EarthQuake_C::EventReceived_A76EDFB5460926AE7B38D69A78D29398(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A76EDFB5460926AE7B38D69A78D29398");

	FEventReceived_A76EDFB5460926AE7B38D69A78D29398 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuake_C::EventReceived_A902270D42A9465CE85A55A3BFA70716(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A902270D42A9465CE85A55A3BFA70716");

	FEventReceived_A902270D42A9465CE85A55A3BFA70716 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuake_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuake_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuake_C::ExecuteUbergraph_GA_GhostKing_EarthQuake(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.ExecuteUbergraph_GA_GhostKing_EarthQuake");

	FExecuteUbergraph_GA_GhostKing_EarthQuake parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

