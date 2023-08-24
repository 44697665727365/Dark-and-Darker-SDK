#include "pch.h"
#include "SDK.h"

void UGA_ExplosionBottleActivateOnEquip_C::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottleActivateOnEquip.GA_ExplosionBottleActivateOnEquip_C.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ExplosionBottleActivateOnEquip_C::ExecuteUbergraph_GA_ExplosionBottleActivateOnEquip(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottleActivateOnEquip.GA_ExplosionBottleActivateOnEquip_C.ExecuteUbergraph_GA_ExplosionBottleActivateOnEquip");

	FExecuteUbergraph_GA_ExplosionBottleActivateOnEquip parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

