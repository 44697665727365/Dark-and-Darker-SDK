#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanPeaceState_C::EventReceived_65335E5D47BEC26A55C3A882CB0116EF(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.EventReceived_65335E5D47BEC26A55C3A882CB0116EF");

	FEventReceived_65335E5D47BEC26A55C3A882CB0116EF parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanPeaceState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanPeaceState_C::ExecuteUbergraph_GA_SkeletonGuardmanPeaceState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanPeaceState.GA_SkeletonGuardmanPeaceState_C.ExecuteUbergraph_GA_SkeletonGuardmanPeaceState");

	FExecuteUbergraph_GA_SkeletonGuardmanPeaceState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

