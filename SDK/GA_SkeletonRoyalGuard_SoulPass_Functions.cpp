#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_SoulPass_C::OnSuccess_9EBD3ADF4752405F227DB8A792D798D8(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.OnSuccess_9EBD3ADF4752405F227DB8A792D798D8");

	FOnSuccess_9EBD3ADF4752405F227DB8A792D798D8 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_SoulPass_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_SoulPass_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_SoulPass_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

