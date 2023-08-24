#include "pch.h"
#include "SDK.h"

void UGA_InvisibilityHideGranted_C::OnChange_C21C93F04394F1680C51A9B0A83B79E5(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.OnChange_C21C93F04394F1680C51A9B0A83B79E5");

	FOnChange_C21C93F04394F1680C51A9B0A83B79E5 parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityHideGranted_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityHideGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilityHideGranted_C::ExecuteUbergraph_GA_InvisibilityHideGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilityHideGranted.GA_InvisibilityHideGranted_C.ExecuteUbergraph_GA_InvisibilityHideGranted");

	FExecuteUbergraph_GA_InvisibilityHideGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

