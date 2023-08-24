#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_AttackPhase_C::EventReceived_C02C1D3A4BD8CCC6936B0BA2AF3A53AA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.EventReceived_C02C1D3A4BD8CCC6936B0BA2AF3A53AA");

	FEventReceived_C02C1D3A4BD8CCC6936B0BA2AF3A53AA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_AttackPhase_C::ExecuteUbergraph_GA_DireWolf_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.ExecuteUbergraph_GA_DireWolf_AttackPhase");

	FExecuteUbergraph_GA_DireWolf_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

