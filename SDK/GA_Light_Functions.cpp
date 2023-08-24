#include "pch.h"
#include "SDK.h"

void UGA_Light_C::Cancelled_5941290D49EFDA57A6C2A1B9C1DAC65E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Light.GA_Light_C.Cancelled_5941290D49EFDA57A6C2A1B9C1DAC65E");

	FCancelled_5941290D49EFDA57A6C2A1B9C1DAC65E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Light_C::ValidData_5941290D49EFDA57A6C2A1B9C1DAC65E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Light.GA_Light_C.ValidData_5941290D49EFDA57A6C2A1B9C1DAC65E");

	FValidData_5941290D49EFDA57A6C2A1B9C1DAC65E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Light_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Light.GA_Light_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Light_C::ExecuteUbergraph_GA_Light(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Light.GA_Light_C.ExecuteUbergraph_GA_Light");

	FExecuteUbergraph_GA_Light parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

