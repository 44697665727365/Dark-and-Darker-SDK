#include "pch.h"
#include "SDK.h"

void UGA_SkeletonMage_Attack_C::EventReceived_E91096D849488AA98C851F90548DF633(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.EventReceived_E91096D849488AA98C851F90548DF633");

	FEventReceived_E91096D849488AA98C851F90548DF633 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonMage_Attack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonMage_Attack_C::ExecuteUbergraph_GA_SkeletonMage_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Attack.GA_SkeletonMage_Attack_C.ExecuteUbergraph_GA_SkeletonMage_Attack");

	FExecuteUbergraph_GA_SkeletonMage_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

