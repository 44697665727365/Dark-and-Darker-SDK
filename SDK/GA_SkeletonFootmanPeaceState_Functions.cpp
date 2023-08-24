#include "pch.h"
#include "SDK.h"

void UGA_SkeletonFootmanPeaceState_C::EventReceived_25EE265A422B5C79E3CBBF8E0732F638(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.EventReceived_25EE265A422B5C79E3CBBF8E0732F638");

	FEventReceived_25EE265A422B5C79E3CBBF8E0732F638 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanPeaceState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanPeaceState_C::ExecuteUbergraph_GA_SkeletonFootmanPeaceState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.ExecuteUbergraph_GA_SkeletonFootmanPeaceState");

	FExecuteUbergraph_GA_SkeletonFootmanPeaceState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

