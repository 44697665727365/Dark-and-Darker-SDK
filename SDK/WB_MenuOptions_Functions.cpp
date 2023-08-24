#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptions_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_MenuOptions_C::Get_ControlsCheckBox_CheckedState_1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.Get_ControlsCheckBox_CheckedState_1");

	FGet_ControlsCheckBox_CheckedState_1 parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptions_C::BP_OnActivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.BP_OnActivated");

	FBP_OnActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptions_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptions_C::(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.");

	F parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptions_C::BP_OnDeactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.BP_OnDeactivated");

	FBP_OnDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptions_C::ExecuteUbergraph_WB_MenuOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptions.WB_MenuOptions_C.ExecuteUbergraph_WB_MenuOptions");

	FExecuteUbergraph_WB_MenuOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

