#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanCombatState_C::EventReceived_0C67B7144907F5E3377B539ECF507E10(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.EventReceived_0C67B7144907F5E3377B539ECF507E10");

	FEventReceived_0C67B7144907F5E3377B539ECF507E10 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanCombatState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanCombatState_C::ExecuteUbergraph_GA_SkeletonGuardmanCombatState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.ExecuteUbergraph_GA_SkeletonGuardmanCombatState");

	FExecuteUbergraph_GA_SkeletonGuardmanCombatState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

