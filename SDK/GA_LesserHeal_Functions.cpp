#include "pch.h"
#include "SDK.h"

void UGA_LesserHeal_C::Cancelled_98070A464AAFF0123E9EB3AF70D9CE3E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LesserHeal.GA_LesserHeal_C.Cancelled_98070A464AAFF0123E9EB3AF70D9CE3E");

	FCancelled_98070A464AAFF0123E9EB3AF70D9CE3E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LesserHeal_C::ValidData_98070A464AAFF0123E9EB3AF70D9CE3E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LesserHeal.GA_LesserHeal_C.ValidData_98070A464AAFF0123E9EB3AF70D9CE3E");

	FValidData_98070A464AAFF0123E9EB3AF70D9CE3E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LesserHeal_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LesserHeal.GA_LesserHeal_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_LesserHeal_C::ExecuteUbergraph_GA_LesserHeal(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LesserHeal.GA_LesserHeal_C.ExecuteUbergraph_GA_LesserHeal");

	FExecuteUbergraph_GA_LesserHeal parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

