#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_EarthQuakePhase_C::EventReceived_EE80568D434BF7B5B708B888F1081D7D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.EventReceived_EE80568D434BF7B5B708B888F1081D7D");

	FEventReceived_EE80568D434BF7B5B708B888F1081D7D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuakePhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuakePhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EarthQuakePhase_C::ExecuteUbergraph_GA_GhostKing_EarthQuakePhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.ExecuteUbergraph_GA_GhostKing_EarthQuakePhase");

	FExecuteUbergraph_GA_GhostKing_EarthQuakePhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

