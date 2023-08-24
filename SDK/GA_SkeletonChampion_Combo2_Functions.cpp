#include "pch.h"
#include "SDK.h"

void UGA_SkeletonChampion_Combo2_C::EventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.EventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9");

	FEventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo2_C::ExecuteUbergraph_GA_SkeletonChampion_Combo2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.ExecuteUbergraph_GA_SkeletonChampion_Combo2");

	FExecuteUbergraph_GA_SkeletonChampion_Combo2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

