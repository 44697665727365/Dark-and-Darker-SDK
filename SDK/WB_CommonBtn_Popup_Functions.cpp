#include "pch.h"
#include "SDK.h"

struct FEventReply UWB_CommonBtn_Popup_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.OnFocusReceived");

	FOnFocusReceived parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CommonBtn_Popup_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_Popup_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_Popup_C::BP_OnPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnPressed");

	FBP_OnPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_Popup_C::BP_OnReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnReleased");

	FBP_OnReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_Popup_C::ExecuteUbergraph_WB_CommonBtn_Popup(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.ExecuteUbergraph_WB_CommonBtn_Popup");

	FExecuteUbergraph_WB_CommonBtn_Popup parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

