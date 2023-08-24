#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionPopup_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionPopup_C::RefreshDetailText(int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText");

	FRefreshDetailText parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionPopup_C::UpdateDetailText(struct FText& InDetailText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText");

	FUpdateDetailText parms{};	
	parms.InDetailText = InDetailText;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionPopup_C::UpdateButtonText(struct FText& InLeftText, struct FText& InRightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText");

	FUpdateButtonText parms{};	
	parms.InLeftText = InLeftText;
	parms.InRightText = InRightText;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionPopup_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionPopup_C::OnVisibilityChanged_Event(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.OnVisibilityChanged_Event");

	FOnVisibilityChanged_Event parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionPopup_C::ExecuteUbergraph_WB_MenuOptionPopup(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup");

	FExecuteUbergraph_WB_MenuOptionPopup parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

