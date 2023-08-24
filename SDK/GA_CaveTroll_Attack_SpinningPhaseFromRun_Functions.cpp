#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::Set Variables(struct FGameplayEventData Event Data, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.Set Variables");

	FSet Variables parms{};	
	parms.Event Data = Event Data;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::EventReceived_34B70C134EA550599237CAA54022F76D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.EventReceived_34B70C134EA550599237CAA54022F76D");

	FEventReceived_34B70C134EA550599237CAA54022F76D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::MoveTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.MoveTimer");

	FMoveTimer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::Add Input Movement(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.Add Input Movement");

	FAdd Input Movement parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningPhaseFromRun_C::ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningPhaseFromRun.GA_CaveTroll_Attack_SpinningPhaseFromRun_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun");

	FExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhaseFromRun parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

