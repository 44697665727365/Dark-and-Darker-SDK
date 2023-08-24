#include "pch.h"
#include "SDK.h"

void UGA_GoblinBolasinger_Interaction1_C::EventReceived_D02F265B4536722E9A69F8B474E0FEE9(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.EventReceived_D02F265B4536722E9A69F8B474E0FEE9");

	FEventReceived_D02F265B4536722E9A69F8B474E0FEE9 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction1_C::ExecuteUbergraph_GA_GoblinBolasinger_Interaction1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.ExecuteUbergraph_GA_GoblinBolasinger_Interaction1");

	FExecuteUbergraph_GA_GoblinBolasinger_Interaction1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

