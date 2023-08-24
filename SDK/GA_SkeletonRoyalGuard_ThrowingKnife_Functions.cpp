#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_ThrowingKnife_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_ThrowingKnife.GA_SkeletonRoyalGuard_ThrowingKnife_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_ThrowingKnife_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_ThrowingKnife(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_ThrowingKnife.GA_SkeletonRoyalGuard_ThrowingKnife_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_ThrowingKnife");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_ThrowingKnife parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

