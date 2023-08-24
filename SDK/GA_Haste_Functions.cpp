#include "pch.h"
#include "SDK.h"

void UGA_Haste_C::Cancelled_E5F983944B6E985D08FAE6BB77A690D7(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Haste.GA_Haste_C.Cancelled_E5F983944B6E985D08FAE6BB77A690D7");

	FCancelled_E5F983944B6E985D08FAE6BB77A690D7 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Haste_C::ValidData_E5F983944B6E985D08FAE6BB77A690D7(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Haste.GA_Haste_C.ValidData_E5F983944B6E985D08FAE6BB77A690D7");

	FValidData_E5F983944B6E985D08FAE6BB77A690D7 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Haste_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Haste.GA_Haste_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Haste_C::ExecuteUbergraph_GA_Haste(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Haste.GA_Haste_C.ExecuteUbergraph_GA_Haste");

	FExecuteUbergraph_GA_Haste parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

