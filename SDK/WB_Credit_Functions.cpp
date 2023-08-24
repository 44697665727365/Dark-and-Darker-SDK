#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_Credit_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Credit.WB_Credit_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_Credit_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Credit.WB_Credit_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Credit_C::CreditButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Credit.WB_Credit_C.CreditButtonClicked");

	FCreditButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_Credit_C::(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Credit.WB_Credit_C.");

	F parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_Credit_C::ExecuteUbergraph_WB_Credit(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Credit.WB_Credit_C.ExecuteUbergraph_WB_Credit");

	FExecuteUbergraph_WB_Credit parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

