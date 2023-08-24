#include "pch.h"
#include "SDK.h"

void UGA_HolyLight_C::Cancelled_00A49EE84F13A4C22850B1B2A2CDC0F0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyLight.GA_HolyLight_C.Cancelled_00A49EE84F13A4C22850B1B2A2CDC0F0");

	FCancelled_00A49EE84F13A4C22850B1B2A2CDC0F0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_HolyLight_C::ValidData_00A49EE84F13A4C22850B1B2A2CDC0F0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyLight.GA_HolyLight_C.ValidData_00A49EE84F13A4C22850B1B2A2CDC0F0");

	FValidData_00A49EE84F13A4C22850B1B2A2CDC0F0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_HolyLight_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyLight.GA_HolyLight_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_HolyLight_C::ExecuteUbergraph_GA_HolyLight(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyLight.GA_HolyLight_C.ExecuteUbergraph_GA_HolyLight");

	FExecuteUbergraph_GA_HolyLight parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

