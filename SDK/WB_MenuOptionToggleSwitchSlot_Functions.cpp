#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionToggleSwitchSlot_C::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionToggleSwitchSlot_C::SetButtomText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetButtomText");

	FSetButtomText parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::ChangeButtonActivated(struct UWB_OptionCheckButton01_C* ActivateButton, struct UWB_OptionCheckButton01_C* DeactivateButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ChangeButtonActivated");

	FChangeButtonActivated parms{};	
	parms.ActivateButton = ActivateButton;
	parms.DeactivateButton = DeactivateButton;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::SetOptionButtonTile(struct UWB_OptionCheckButton01_C* OptionButton, struct FText InTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetOptionButtonTile");

	FSetOptionButtonTile parms{};	
	parms.OptionButton = OptionButton;
	parms.InTitle = InTitle;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::OnInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnInitialized");

	FOnInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::OnToggleSwitch(bool InSwitch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnToggleSwitch");

	FOnToggleSwitch parms{};	
	parms.InSwitch = InSwitch;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::UpdateButtonText(struct FText& LeftText, struct FText& RightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.UpdateButtonText");

	FUpdateButtonText parms{};	
	parms.LeftText = LeftText;
	parms.RightText = RightText;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionToggleSwitchSlot_C::ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot");

	FExecuteUbergraph_WB_MenuOptionToggleSwitchSlot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

