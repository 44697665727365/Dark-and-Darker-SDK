#include "pch.h"
#include "SDK.h"

void UGA_Bless_C::Cancelled_580E61EB4A9B6818DF7F7F869317C560(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Bless.GA_Bless_C.Cancelled_580E61EB4A9B6818DF7F7F869317C560");

	FCancelled_580E61EB4A9B6818DF7F7F869317C560 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Bless_C::ValidData_580E61EB4A9B6818DF7F7F869317C560(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Bless.GA_Bless_C.ValidData_580E61EB4A9B6818DF7F7F869317C560");

	FValidData_580E61EB4A9B6818DF7F7F869317C560 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Bless_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Bless.GA_Bless_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Bless_C::ExecuteUbergraph_GA_Bless(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Bless.GA_Bless_C.ExecuteUbergraph_GA_Bless");

	FExecuteUbergraph_GA_Bless parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

