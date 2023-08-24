#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_Bombing_C::EventReceived_6AB16E6E4F035D73025811A8F542C6D3(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.EventReceived_6AB16E6E4F035D73025811A8F542C6D3");

	FEventReceived_6AB16E6E4F035D73025811A8F542C6D3 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_Bombing_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_Bombing_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_Bombing_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

