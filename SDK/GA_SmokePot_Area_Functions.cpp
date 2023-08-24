#include "pch.h"
#include "SDK.h"

void UGA_SmokePot_Area_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SmokePot_Area.GA_SmokePot_Area_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SmokePot_Area_C::ExecuteUbergraph_GA_SmokePot_Area(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SmokePot_Area.GA_SmokePot_Area_C.ExecuteUbergraph_GA_SmokePot_Area");

	FExecuteUbergraph_GA_SmokePot_Area parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

