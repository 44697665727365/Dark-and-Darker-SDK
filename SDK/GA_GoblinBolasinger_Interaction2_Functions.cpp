#include "pch.h"
#include "SDK.h"

void UGA_GoblinBolasinger_Interaction2_C::EventReceived_23899DCC4322BC3EB4D525A66DC0F535(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.EventReceived_23899DCC4322BC3EB4D525A66DC0F535");

	FEventReceived_23899DCC4322BC3EB4D525A66DC0F535 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Interaction2_C::ExecuteUbergraph_GA_GoblinBolasinger_Interaction2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.ExecuteUbergraph_GA_GoblinBolasinger_Interaction2");

	FExecuteUbergraph_GA_GoblinBolasinger_Interaction2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

