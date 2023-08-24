#include "pch.h"
#include "SDK.h"

void UGA_Zap_C::Cancelled_710514F84C5B9A85D254718B0950D361(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Zap.GA_Zap_C.Cancelled_710514F84C5B9A85D254718B0950D361");

	FCancelled_710514F84C5B9A85D254718B0950D361 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Zap_C::ValidData_710514F84C5B9A85D254718B0950D361(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Zap.GA_Zap_C.ValidData_710514F84C5B9A85D254718B0950D361");

	FValidData_710514F84C5B9A85D254718B0950D361 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Zap_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Zap.GA_Zap_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Zap_C::ExecuteUbergraph_GA_Zap(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Zap.GA_Zap_C.ExecuteUbergraph_GA_Zap");

	FExecuteUbergraph_GA_Zap parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

