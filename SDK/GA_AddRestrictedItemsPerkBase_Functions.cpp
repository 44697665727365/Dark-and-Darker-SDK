#include "pch.h"
#include "SDK.h"

void UGA_AddRestrictedItemsPerkBase_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddRestrictedItemsPerkBase.GA_AddRestrictedItemsPerkBase_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AddRestrictedItemsPerkBase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddRestrictedItemsPerkBase.GA_AddRestrictedItemsPerkBase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_AddRestrictedItemsPerkBase_C::ExecuteUbergraph_GA_AddRestrictedItemsPerkBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddRestrictedItemsPerkBase.GA_AddRestrictedItemsPerkBase_C.ExecuteUbergraph_GA_AddRestrictedItemsPerkBase");

	FExecuteUbergraph_GA_AddRestrictedItemsPerkBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

