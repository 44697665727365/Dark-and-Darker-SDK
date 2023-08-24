#include "pch.h"
#include "SDK.h"

void UGA_SkeletonFootmanCombatState_C::EventReceived_9E4607554C20A2BC634F6781302662F9(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.EventReceived_9E4607554C20A2BC634F6781302662F9");

	FEventReceived_9E4607554C20A2BC634F6781302662F9 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanCombatState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanCombatState_C::ExecuteUbergraph_GA_SkeletonFootmanCombatState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.ExecuteUbergraph_GA_SkeletonFootmanCombatState");

	FExecuteUbergraph_GA_SkeletonFootmanCombatState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

