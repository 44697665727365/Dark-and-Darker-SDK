#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_Spawn_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_Spawn_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_Spawn_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

