#include "pch.h"
#include "SDK.h"

void UGA_AddWearableWeaponPerkBase_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AddWearableWeaponPerkBase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_AddWearableWeaponPerkBase_C::ExecuteUbergraph_GA_AddWearableWeaponPerkBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.ExecuteUbergraph_GA_AddWearableWeaponPerkBase");

	FExecuteUbergraph_GA_AddWearableWeaponPerkBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

