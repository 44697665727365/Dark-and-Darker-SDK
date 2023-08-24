#include "pch.h"
#include "SDK.h"

void ABP_LuckPotion_C::Calculate Liquid Amount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LuckPotion.BP_LuckPotion_C.Calculate Liquid Amount");

	FCalculate Liquid Amount parms{};	

	ProcessEvent(fn, &parms);
}

