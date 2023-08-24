#include "pch.h"
#include "SDK.h"

void UGA_GoblinArcher_Interaction_2_C::EventReceived_11A4D24C45BA8ED71979EAA1CF36CF6C(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.EventReceived_11A4D24C45BA8ED71979EAA1CF36CF6C");

	FEventReceived_11A4D24C45BA8ED71979EAA1CF36CF6C parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_2_C::ExecuteUbergraph_GA_GoblinArcher_Interaction_3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_3.GA_GoblinArcher_Interaction_2_C.ExecuteUbergraph_GA_GoblinArcher_Interaction_3");

	FExecuteUbergraph_GA_GoblinArcher_Interaction_3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

