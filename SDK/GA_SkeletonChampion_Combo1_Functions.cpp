#include "pch.h"
#include "SDK.h"

void UGA_SkeletonChampion_Combo1_C::EventReceived_B21BD62548561364FE7B6899C3B7D333(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.EventReceived_B21BD62548561364FE7B6899C3B7D333");

	FEventReceived_B21BD62548561364FE7B6899C3B7D333 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_Combo1_C::ExecuteUbergraph_GA_SkeletonChampion_Combo1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.ExecuteUbergraph_GA_SkeletonChampion_Combo1");

	FExecuteUbergraph_GA_SkeletonChampion_Combo1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

