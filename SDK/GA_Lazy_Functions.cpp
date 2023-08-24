#include "pch.h"
#include "SDK.h"

void UGA_Lazy_C::Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lazy.GA_Lazy_C.Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19");

	FCancelled_A2900AB4447D2FBA3BEEDFB1A199FD19 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Lazy_C::ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lazy.GA_Lazy_C.ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19");

	FValidData_A2900AB4447D2FBA3BEEDFB1A199FD19 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Lazy_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lazy.GA_Lazy_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Lazy_C::ExecuteUbergraph_GA_Lazy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lazy.GA_Lazy_C.ExecuteUbergraph_GA_Lazy");

	FExecuteUbergraph_GA_Lazy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

