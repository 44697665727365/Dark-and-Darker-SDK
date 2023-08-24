#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Shield_C::EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA");

	FEventReceived_D0F3E8C442BCE9CD937A26A35A4808DA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Shield_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Shield_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Shield_C::ExecuteUbergraph_GA_SkeletonWarlord_Shield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.ExecuteUbergraph_GA_SkeletonWarlord_Shield");

	FExecuteUbergraph_GA_SkeletonWarlord_Shield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

