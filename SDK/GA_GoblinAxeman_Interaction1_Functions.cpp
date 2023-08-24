#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_Interaction1_C::EventReceived_A2FDCCA641BB06013521DBBF15F7CD6B(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction1.GA_GoblinAxeman_Interaction1_C.EventReceived_A2FDCCA641BB06013521DBBF15F7CD6B");

	FEventReceived_A2FDCCA641BB06013521DBBF15F7CD6B parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction1.GA_GoblinAxeman_Interaction1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction1.GA_GoblinAxeman_Interaction1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction1_C::ExecuteUbergraph_GA_GoblinAxeman_Interaction1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction1.GA_GoblinAxeman_Interaction1_C.ExecuteUbergraph_GA_GoblinAxeman_Interaction1");

	FExecuteUbergraph_GA_GoblinAxeman_Interaction1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

