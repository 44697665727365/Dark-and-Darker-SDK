#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSpearman_AttackPhase_C::EventReceived_FEFD9C5A49C735D59CBA058127C754E3(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.EventReceived_FEFD9C5A49C735D59CBA058127C754E3");

	FEventReceived_FEFD9C5A49C735D59CBA058127C754E3 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_AttackPhase_C::ExecuteUbergraph_GA_SkeletonSpearman_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.ExecuteUbergraph_GA_SkeletonSpearman_AttackPhase");

	FExecuteUbergraph_GA_SkeletonSpearman_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

