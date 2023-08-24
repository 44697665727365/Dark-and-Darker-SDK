#include "pch.h"
#include "SDK.h"

void UGA_GoblinArcher_AttackState_C::EventReceived_BB92ACDF454879A28FDB38B442C5740F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.EventReceived_BB92ACDF454879A28FDB38B442C5740F");

	FEventReceived_BB92ACDF454879A28FDB38B442C5740F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_AttackState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_AttackState_C::ExecuteUbergraph_GA_GoblinArcher_AttackState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.ExecuteUbergraph_GA_GoblinArcher_AttackState");

	FExecuteUbergraph_GA_GoblinArcher_AttackState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

