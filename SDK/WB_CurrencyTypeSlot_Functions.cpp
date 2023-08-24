#include "pch.h"
#include "SDK.h"

uint8_t UWB_CurrencyTypeSlot_C::Get_Currency_Redstone_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Redstone_Visibility");

	FGet_Currency_Redstone_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CurrencyTypeSlot_C::Get_Currency_Bluestone_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Bluestone_Visibility");

	FGet_Currency_Bluestone_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CurrencyTypeSlot_C::Get_OverlayCurrencyTypeSlot_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_OverlayCurrencyTypeSlot_Visibility");

	FGet_OverlayCurrencyTypeSlot_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

