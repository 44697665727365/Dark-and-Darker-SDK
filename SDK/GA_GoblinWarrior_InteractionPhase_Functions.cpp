#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_InteractionPhase_C::EventReceived_4679351142DCCF208D3681994BB1BDC1(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.EventReceived_4679351142DCCF208D3681994BB1BDC1");

	FEventReceived_4679351142DCCF208D3681994BB1BDC1 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_InteractionPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_InteractionPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_InteractionPhase_C::ExecuteUbergraph_GA_GoblinWarrior_InteractionPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.ExecuteUbergraph_GA_GoblinWarrior_InteractionPhase");

	FExecuteUbergraph_GA_GoblinWarrior_InteractionPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

