#include "pch.h"
#include "SDK.h"

void UGA_PotionConsumeBase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_PotionConsumeBase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PotionConsumeBase_C::OnConsumeStartEventReceived(float ConsumeDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived");

	FOnConsumeStartEventReceived parms{};	
	parms.ConsumeDuration = ConsumeDuration;

	ProcessEvent(fn, &parms);
}

void UGA_PotionConsumeBase_C::OnConsumeEndEventReceived(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeEndEventReceived");

	FOnConsumeEndEventReceived parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PotionConsumeBase_C::ExecuteUbergraph_GA_PotionConsumeBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase");

	FExecuteUbergraph_GA_PotionConsumeBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

