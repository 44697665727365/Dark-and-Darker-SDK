#include "pch.h"
#include "SDK.h"

void ABP_TrollBlood_C::Calculate Liquid Amount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrollBlood.BP_TrollBlood_C.Calculate Liquid Amount");

	FCalculate Liquid Amount parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrollBlood_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrollBlood.BP_TrollBlood_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

