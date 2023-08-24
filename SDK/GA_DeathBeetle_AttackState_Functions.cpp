#include "pch.h"
#include "SDK.h"

void UGA_DeathBeetle_AttackState_C::EventReceived_39775F904A1DD664E264DAA8ECD95886(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.EventReceived_39775F904A1DD664E264DAA8ECD95886");

	FEventReceived_39775F904A1DD664E264DAA8ECD95886 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_AttackState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_AttackState_C::ExecuteUbergraph_GA_DeathBeetle_AttackState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.ExecuteUbergraph_GA_DeathBeetle_AttackState");

	FExecuteUbergraph_GA_DeathBeetle_AttackState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

