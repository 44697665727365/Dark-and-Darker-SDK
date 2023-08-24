#include "pch.h"
#include "SDK.h"

void UGA_CurseofWeakness_C::Cancelled_E0DFF2094ED6EA9BC449339A474F2CAA(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofWeakness.GA_CurseofWeakness_C.Cancelled_E0DFF2094ED6EA9BC449339A474F2CAA");

	FCancelled_E0DFF2094ED6EA9BC449339A474F2CAA parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofWeakness_C::ValidData_E0DFF2094ED6EA9BC449339A474F2CAA(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofWeakness.GA_CurseofWeakness_C.ValidData_E0DFF2094ED6EA9BC449339A474F2CAA");

	FValidData_E0DFF2094ED6EA9BC449339A474F2CAA parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofWeakness_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofWeakness.GA_CurseofWeakness_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofWeakness_C::ExecuteUbergraph_GA_CurseofWeakness(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofWeakness.GA_CurseofWeakness_C.ExecuteUbergraph_GA_CurseofWeakness");

	FExecuteUbergraph_GA_CurseofWeakness parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

