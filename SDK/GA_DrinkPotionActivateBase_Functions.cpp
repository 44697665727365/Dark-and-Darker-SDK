#include "pch.h"
#include "SDK.h"

void UGA_DrinkPotionActivateBase_C::OnFinish_17D93366455B3BE35432FCBE8DFC6E4D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.OnFinish_17D93366455B3BE35432FCBE8DFC6E4D");

	FOnFinish_17D93366455B3BE35432FCBE8DFC6E4D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DrinkPotionActivateBase_C::Removed_B01C8A3D4B24EB4F232029A52296F212(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.Removed_B01C8A3D4B24EB4F232029A52296F212");

	FRemoved_B01C8A3D4B24EB4F232029A52296F212 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DrinkPotionActivateBase_C::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DrinkPotionActivateBase_C::ExecuteUbergraph_GA_DrinkPotionActivateBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.ExecuteUbergraph_GA_DrinkPotionActivateBase");

	FExecuteUbergraph_GA_DrinkPotionActivateBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

