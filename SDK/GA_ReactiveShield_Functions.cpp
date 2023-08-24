#include "pch.h"
#include "SDK.h"

void UGA_ReactiveShield_C::OnChange_C36BDEA94E9C5D5E269839B204C448A7(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReactiveShield.GA_ReactiveShield_C.OnChange_C36BDEA94E9C5D5E269839B204C448A7");

	FOnChange_C36BDEA94E9C5D5E269839B204C448A7 parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_ReactiveShield_C::Removed_AC9FF3EC477FA93879FC0391E1AF21A8(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReactiveShield.GA_ReactiveShield_C.Removed_AC9FF3EC477FA93879FC0391E1AF21A8");

	FRemoved_AC9FF3EC477FA93879FC0391E1AF21A8 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ReactiveShield_C::OnFinish_D6415A7D4062DC4F005826BB6EAC703A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReactiveShield.GA_ReactiveShield_C.OnFinish_D6415A7D4062DC4F005826BB6EAC703A");

	FOnFinish_D6415A7D4062DC4F005826BB6EAC703A parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ReactiveShield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReactiveShield.GA_ReactiveShield_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReactiveShield_C::ExecuteUbergraph_GA_ReactiveShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReactiveShield.GA_ReactiveShield_C.ExecuteUbergraph_GA_ReactiveShield");

	FExecuteUbergraph_GA_ReactiveShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

