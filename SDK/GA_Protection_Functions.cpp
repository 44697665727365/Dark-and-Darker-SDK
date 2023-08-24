#include "pch.h"
#include "SDK.h"

void UGA_Protection_C::Cancelled_8882E75F477F364791CC55BAAF1CBC01(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Protection.GA_Protection_C.Cancelled_8882E75F477F364791CC55BAAF1CBC01");

	FCancelled_8882E75F477F364791CC55BAAF1CBC01 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Protection_C::ValidData_8882E75F477F364791CC55BAAF1CBC01(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Protection.GA_Protection_C.ValidData_8882E75F477F364791CC55BAAF1CBC01");

	FValidData_8882E75F477F364791CC55BAAF1CBC01 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Protection_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Protection.GA_Protection_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Protection_C::ExecuteUbergraph_GA_Protection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Protection.GA_Protection_C.ExecuteUbergraph_GA_Protection");

	FExecuteUbergraph_GA_Protection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

