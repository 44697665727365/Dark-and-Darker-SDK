#include "pch.h"
#include "SDK.h"

void UGA_InvisibilityPotionGranted_C::OnChange_2A946EE74ABF944157D8C4A9D3B54AD9(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnChange_2A946EE74ABF944157D8C4A9D3B54AD9");

	FOnChange_2A946EE74ABF944157D8C4A9D3B54AD9 parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityPotionGranted_C::OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73");

	FOnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityPotionGranted_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityPotionGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityPotionGranted_C::ExecuteUbergraph_GA_InvisibilityPotionGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.ExecuteUbergraph_GA_InvisibilityPotionGranted");

	FExecuteUbergraph_GA_InvisibilityPotionGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

