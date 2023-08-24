#include "pch.h"
#include "SDK.h"

void ABP_HealingPotion_C::Calculate Liquid Amount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HealingPotion.BP_HealingPotion_C.Calculate Liquid Amount");

	FCalculate Liquid Amount parms{};	

	ProcessEvent(fn, &parms);
}

