#include "pch.h"
#include "SDK.h"

void UGA_AoeCallerAtLocation_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocation_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocation_C::SpawnAoe(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.SpawnAoe");

	FSpawnAoe parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocation_C::Expire(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.Expire");

	FExpire parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerAtLocation_C::ExecuteUbergraph_GA_AoeCallerAtLocation(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.ExecuteUbergraph_GA_AoeCallerAtLocation");

	FExecuteUbergraph_GA_AoeCallerAtLocation parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

