#include "pch.h"
#include "SDK.h"

void UGA_SkeletonChampion_ComboPhase_C::EventReceived_2DC189A44E754DEE908D7CBD489F9CF8(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.EventReceived_2DC189A44E754DEE908D7CBD489F9CF8");

	FEventReceived_2DC189A44E754DEE908D7CBD489F9CF8 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_ComboPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_ComboPhase_C::ExecuteUbergraph_GA_SkeletonChampion_ComboPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_ComboPhase.GA_SkeletonChampion_ComboPhase_C.ExecuteUbergraph_GA_SkeletonChampion_ComboPhase");

	FExecuteUbergraph_GA_SkeletonChampion_ComboPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

