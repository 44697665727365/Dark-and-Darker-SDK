#include "pch.h"
#include "SDK.h"

void UGA_Cleanse_C::Cancelled_A84C9B3A43E68BC562A2E987CE628179(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cleanse.GA_Cleanse_C.Cancelled_A84C9B3A43E68BC562A2E987CE628179");

	FCancelled_A84C9B3A43E68BC562A2E987CE628179 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Cleanse_C::ValidData_A84C9B3A43E68BC562A2E987CE628179(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cleanse.GA_Cleanse_C.ValidData_A84C9B3A43E68BC562A2E987CE628179");

	FValidData_A84C9B3A43E68BC562A2E987CE628179 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Cleanse_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cleanse.GA_Cleanse_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Cleanse_C::ExecuteUbergraph_GA_Cleanse(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cleanse.GA_Cleanse_C.ExecuteUbergraph_GA_Cleanse");

	FExecuteUbergraph_GA_Cleanse parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

