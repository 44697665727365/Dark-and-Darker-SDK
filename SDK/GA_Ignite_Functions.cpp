#include "pch.h"
#include "SDK.h"

void UGA_Ignite_C::Cancelled_7B308F884F7D295326C8F096A391101B(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ignite.GA_Ignite_C.Cancelled_7B308F884F7D295326C8F096A391101B");

	FCancelled_7B308F884F7D295326C8F096A391101B parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Ignite_C::ValidData_7B308F884F7D295326C8F096A391101B(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ignite.GA_Ignite_C.ValidData_7B308F884F7D295326C8F096A391101B");

	FValidData_7B308F884F7D295326C8F096A391101B parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Ignite_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ignite.GA_Ignite_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Ignite_C::OnCasted(struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ignite.GA_Ignite_C.OnCasted");

	FOnCasted parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void UGA_Ignite_C::ExecuteUbergraph_GA_Ignite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ignite.GA_Ignite_C.ExecuteUbergraph_GA_Ignite");

	FExecuteUbergraph_GA_Ignite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

