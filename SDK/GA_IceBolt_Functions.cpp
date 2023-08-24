#include "pch.h"
#include "SDK.h"

void UGA_IceBolt_C::Cancelled_581501F64E87E564129EFA91E4613987(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceBolt.GA_IceBolt_C.Cancelled_581501F64E87E564129EFA91E4613987");

	FCancelled_581501F64E87E564129EFA91E4613987 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_IceBolt_C::ValidData_581501F64E87E564129EFA91E4613987(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceBolt.GA_IceBolt_C.ValidData_581501F64E87E564129EFA91E4613987");

	FValidData_581501F64E87E564129EFA91E4613987 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_IceBolt_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceBolt.GA_IceBolt_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_IceBolt_C::ExecuteUbergraph_GA_IceBolt(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceBolt.GA_IceBolt_C.ExecuteUbergraph_GA_IceBolt");

	FExecuteUbergraph_GA_IceBolt parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

