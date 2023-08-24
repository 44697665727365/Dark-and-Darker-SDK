#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Attack_SpinningPhase_C::EventReceived_5E2CE7824445841FB45C2FA20500B434(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.EventReceived_5E2CE7824445841FB45C2FA20500B434");

	FEventReceived_5E2CE7824445841FB45C2FA20500B434 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhase_C::ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase");

	FExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

