#include "pch.h"
#include "SDK.h"

void UGA_GoblinArcher_Interaction_1_C::EventReceived_090DB0CE459F2E2DA5129AA346CDACE5(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.EventReceived_090DB0CE459F2E2DA5129AA346CDACE5");

	FEventReceived_090DB0CE459F2E2DA5129AA346CDACE5 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Interaction_1_C::ExecuteUbergraph_GA_GoblinArcher_Interaction_2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.ExecuteUbergraph_GA_GoblinArcher_Interaction_2");

	FExecuteUbergraph_GA_GoblinArcher_Interaction_2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

