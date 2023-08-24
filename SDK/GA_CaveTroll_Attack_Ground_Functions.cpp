#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Attack_Ground_C::EventReceived_7D8A119E4E75043F1B7FD8A78249FE61(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.EventReceived_7D8A119E4E75043F1B7FD8A78249FE61");

	FEventReceived_7D8A119E4E75043F1B7FD8A78249FE61 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_Ground_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_Ground_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_Ground_C::ExecuteUbergraph_GA_CaveTroll_Attack_Ground(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.ExecuteUbergraph_GA_CaveTroll_Attack_Ground");

	FExecuteUbergraph_GA_CaveTroll_Attack_Ground parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

