#include "pch.h"
#include "SDK.h"

void UGA_ThornyBrambleActivate_C::OnChange_737926B54B1EBE282AA4429E4294B8BF(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.OnChange_737926B54B1EBE282AA4429E4294B8BF");

	FOnChange_737926B54B1EBE282AA4429E4294B8BF parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_ThornyBrambleActivate_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ThornyBrambleActivate_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_ThornyBrambleActivate_C::ExecuteUbergraph_GA_ThornyBrambleActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.ExecuteUbergraph_GA_ThornyBrambleActivate");

	FExecuteUbergraph_GA_ThornyBrambleActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

