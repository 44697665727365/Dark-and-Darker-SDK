#include "pch.h"
#include "SDK.h"

void UGA_BindEvil_C::Cancelled_80FB05884552A474DEFC9D9E3F66AD3C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BindEvil.GA_BindEvil_C.Cancelled_80FB05884552A474DEFC9D9E3F66AD3C");

	FCancelled_80FB05884552A474DEFC9D9E3F66AD3C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_BindEvil_C::ValidData_80FB05884552A474DEFC9D9E3F66AD3C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BindEvil.GA_BindEvil_C.ValidData_80FB05884552A474DEFC9D9E3F66AD3C");

	FValidData_80FB05884552A474DEFC9D9E3F66AD3C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_BindEvil_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BindEvil.GA_BindEvil_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_BindEvil_C::ExecuteUbergraph_GA_BindEvil(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BindEvil.GA_BindEvil_C.ExecuteUbergraph_GA_BindEvil");

	FExecuteUbergraph_GA_BindEvil parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

