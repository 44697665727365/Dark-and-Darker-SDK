#include "pch.h"
#include "SDK.h"

void UGA_PowerofSacrifice_C::Cancelled_B9BF17034DF78B504CB93C89E45D98B3(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.Cancelled_B9BF17034DF78B504CB93C89E45D98B3");

	FCancelled_B9BF17034DF78B504CB93C89E45D98B3 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrifice_C::ValidData_B9BF17034DF78B504CB93C89E45D98B3(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ValidData_B9BF17034DF78B504CB93C89E45D98B3");

	FValidData_B9BF17034DF78B504CB93C89E45D98B3 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrifice_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrifice_C::OnCasted(struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.OnCasted");

	FOnCasted parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void UGA_PowerofSacrifice_C::ExecuteUbergraph_GA_PowerofSacrifice(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ExecuteUbergraph_GA_PowerofSacrifice");

	FExecuteUbergraph_GA_PowerofSacrifice parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

