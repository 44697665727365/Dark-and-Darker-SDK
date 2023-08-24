#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_Interaction_1_C::EventReceived_BAE2DE4C416E879118E9B584F73D3DFF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_2.GA_GoblinWarrior_Interaction_1_C.EventReceived_BAE2DE4C416E879118E9B584F73D3DFF");

	FEventReceived_BAE2DE4C416E879118E9B584F73D3DFF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_2.GA_GoblinWarrior_Interaction_1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_2.GA_GoblinWarrior_Interaction_1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_1_C::ExecuteUbergraph_GA_GoblinWarrior_Interaction_2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_2.GA_GoblinWarrior_Interaction_1_C.ExecuteUbergraph_GA_GoblinWarrior_Interaction_2");

	FExecuteUbergraph_GA_GoblinWarrior_Interaction_2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

