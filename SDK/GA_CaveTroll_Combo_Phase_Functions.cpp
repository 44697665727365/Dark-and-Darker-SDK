#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Combo_Phase_C::EventReceived_EDCAA6E748675F038F1CECA004BA8FD1(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.EventReceived_EDCAA6E748675F038F1CECA004BA8FD1");

	FEventReceived_EDCAA6E748675F038F1CECA004BA8FD1 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Phase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Phase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Combo_Phase_C::ExecuteUbergraph_GA_CaveTroll_Combo_Phase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.ExecuteUbergraph_GA_CaveTroll_Combo_Phase");

	FExecuteUbergraph_GA_CaveTroll_Combo_Phase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

