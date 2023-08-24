#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_CurseOfChilling_C::EventReceived_B21121F24B04A09AF14AECB1E6F15BF4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.EventReceived_B21121F24B04A09AF14AECB1E6F15BF4");

	FEventReceived_B21121F24B04A09AF14AECB1E6F15BF4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_CurseOfChilling_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_CurseOfChilling_C::Apply Effect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.Apply Effect");

	FApply Effect parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_CurseOfChilling_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_CurseOfChilling_C::ExecuteUbergraph_GA_GhostKing_CurseOfChilling(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.ExecuteUbergraph_GA_GhostKing_CurseOfChilling");

	FExecuteUbergraph_GA_GhostKing_CurseOfChilling parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

