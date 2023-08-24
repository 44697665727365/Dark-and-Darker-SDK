#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Combo1_C::EventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.EventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E");

	FEventReceived_CF85DD6A410D7338CFDCF9B068F7EE7E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo1_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo1.GA_SkeletonWarlord_Combo1_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo1");

	FExecuteUbergraph_GA_SkeletonWarlord_Combo1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

