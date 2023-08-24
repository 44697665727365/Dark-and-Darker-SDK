#include "pch.h"
#include "SDK.h"

void UGA_Wraith_AttackState_C::EventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.EventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10");

	FEventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Wraith_AttackState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Wraith_AttackState_C::ExecuteUbergraph_GA_Wraith_AttackState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.ExecuteUbergraph_GA_Wraith_AttackState");

	FExecuteUbergraph_GA_Wraith_AttackState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

