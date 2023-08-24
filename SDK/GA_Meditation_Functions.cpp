#include "pch.h"
#include "SDK.h"

void UGA_Meditation_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Meditation.GA_Meditation_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Meditation_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Meditation.GA_Meditation_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Meditation_C::ServerOnChannelingAction_BP(struct FGameplayEventData EventData, struct FGameplayCueParameters CueParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Meditation.GA_Meditation_C.ServerOnChannelingAction_BP");

	FServerOnChannelingAction_BP parms{};	
	parms.EventData = EventData;
	parms.CueParams = CueParams;

	ProcessEvent(fn, &parms);
}

void UGA_Meditation_C::ExecuteUbergraph_GA_Meditation(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Meditation.GA_Meditation_C.ExecuteUbergraph_GA_Meditation");

	FExecuteUbergraph_GA_Meditation parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

