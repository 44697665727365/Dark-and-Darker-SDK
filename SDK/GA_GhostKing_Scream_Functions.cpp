#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_Scream_C::EventReceived_EF2338D248B93425A4E548942DF6FAB7(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.EventReceived_EF2338D248B93425A4E548942DF6FAB7");

	FEventReceived_EF2338D248B93425A4E548942DF6FAB7 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Scream_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Scream_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Scream_C::ExecuteUbergraph_GA_GhostKing_Scream(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.ExecuteUbergraph_GA_GhostKing_Scream");

	FExecuteUbergraph_GA_GhostKing_Scream parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

