#include "pch.h"
#include "SDK.h"

void UGA_Hellfire_C::DestroyHellfireActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.DestroyHellfireActor");

	FDestroyHellfireActor parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Hellfire_C::Cancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.Cancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF");

	FCancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Hellfire_C::ValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.ValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF");

	FValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Hellfire_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Hellfire_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Hellfire_C::ExecuteUbergraph_GA_Hellfire(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hellfire.GA_Hellfire_C.ExecuteUbergraph_GA_Hellfire");

	FExecuteUbergraph_GA_Hellfire parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

