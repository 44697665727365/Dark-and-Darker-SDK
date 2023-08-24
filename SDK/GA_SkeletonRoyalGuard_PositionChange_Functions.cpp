#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_PositionChange_C::EventReceived_6877487E47E72A10EB05558A26A404D4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_PositionChange.GA_SkeletonRoyalGuard_PositionChange_C.EventReceived_6877487E47E72A10EB05558A26A404D4");

	FEventReceived_6877487E47E72A10EB05558A26A404D4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_PositionChange_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_PositionChange.GA_SkeletonRoyalGuard_PositionChange_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_PositionChange_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_PositionChange(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_PositionChange.GA_SkeletonRoyalGuard_PositionChange_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_PositionChange");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_PositionChange parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

