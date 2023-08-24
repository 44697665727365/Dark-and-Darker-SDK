#include "pch.h"
#include "SDK.h"

void UGA_SpiderWebActivate_C::OnChange_99C7DE264BB694FE1F05E7934C39DE88(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnChange_99C7DE264BB694FE1F05E7934C39DE88");

	FOnChange_99C7DE264BB694FE1F05E7934C39DE88 parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebActivate_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebActivate_C::OnAuraOverlapBeginEvent(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnAuraOverlapBeginEvent");

	FOnAuraOverlapBeginEvent parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebActivate_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebActivate_C::ExecuteUbergraph_GA_SpiderWebActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.ExecuteUbergraph_GA_SpiderWebActivate");

	FExecuteUbergraph_GA_SpiderWebActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

