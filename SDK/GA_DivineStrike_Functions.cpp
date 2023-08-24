#include "pch.h"
#include "SDK.h"

void UGA_DivineStrike_C::Cancelled_2B68FF8B419907B9CD8B50B7178829B0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DivineStrike.GA_DivineStrike_C.Cancelled_2B68FF8B419907B9CD8B50B7178829B0");

	FCancelled_2B68FF8B419907B9CD8B50B7178829B0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_DivineStrike_C::ValidData_2B68FF8B419907B9CD8B50B7178829B0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DivineStrike.GA_DivineStrike_C.ValidData_2B68FF8B419907B9CD8B50B7178829B0");

	FValidData_2B68FF8B419907B9CD8B50B7178829B0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_DivineStrike_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DivineStrike.GA_DivineStrike_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_DivineStrike_C::ExecuteUbergraph_GA_DivineStrike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DivineStrike.GA_DivineStrike_C.ExecuteUbergraph_GA_DivineStrike");

	FExecuteUbergraph_GA_DivineStrike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

