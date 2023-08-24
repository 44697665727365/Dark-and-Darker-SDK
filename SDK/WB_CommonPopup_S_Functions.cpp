#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_CommonPopup_S_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CommonPopup_S_C::OnRemovePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnRemovePopup");

	FOnRemovePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPopup_S_C::OnCreatePopup(struct FPopupSWidgetData& PopupSWidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnCreatePopup");

	FOnCreatePopup parms{};	
	parms.PopupSWidgetData = PopupSWidgetData;

	ProcessEvent(fn, &parms);
}

void UWB_CommonPopup_S_C::BP_OnDeactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_OnDeactivated");

	FBP_OnDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPopup_S_C::BP_OnActivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_OnActivated");

	FBP_OnActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPopup_S_C::ExecuteUbergraph_WB_CommonPopup_S(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.ExecuteUbergraph_WB_CommonPopup_S");

	FExecuteUbergraph_WB_CommonPopup_S parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

