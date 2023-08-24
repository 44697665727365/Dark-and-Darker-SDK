#include "pch.h"
#include "SDK.h"

void UGA_Mimic_AttackState_C::EventReceived_A41C06D64BC5222CED392AA8C7A52DD2(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.EventReceived_A41C06D64BC5222CED392AA8C7A52DD2");

	FEventReceived_A41C06D64BC5222CED392AA8C7A52DD2 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_AttackState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_AttackState_C::ExecuteUbergraph_GA_Mimic_AttackState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.ExecuteUbergraph_GA_Mimic_AttackState");

	FExecuteUbergraph_GA_Mimic_AttackState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

