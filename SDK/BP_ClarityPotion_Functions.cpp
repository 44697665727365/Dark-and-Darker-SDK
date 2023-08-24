#include "pch.h"
#include "SDK.h"

void ABP_ClarityPotion_C::Calculate Liquid Amount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ClarityPotion.BP_ClarityPotion_C.Calculate Liquid Amount");

	FCalculate Liquid Amount parms{};	

	ProcessEvent(fn, &parms);
}

