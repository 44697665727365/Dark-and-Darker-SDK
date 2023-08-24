#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_Interaction2_C::EventReceived_5C57B40B4965DF1F9F96FCAB32D9F692(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.EventReceived_5C57B40B4965DF1F9F96FCAB32D9F692");

	FEventReceived_5C57B40B4965DF1F9F96FCAB32D9F692 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Interaction2_C::ExecuteUbergraph_GA_GoblinAxeman_Interaction2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Interaction2.GA_GoblinAxeman_Interaction2_C.ExecuteUbergraph_GA_GoblinAxeman_Interaction2");

	FExecuteUbergraph_GA_GoblinAxeman_Interaction2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

