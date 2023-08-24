#include "pch.h"
#include "SDK.h"

struct FEventReply UWB_CommonBtn_L_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.OnFocusReceived");

	FOnFocusReceived parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CommonBtn_L_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_L_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_L_C::BP_OnPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnPressed");

	FBP_OnPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_L_C::BP_OnReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnReleased");

	FBP_OnReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonBtn_L_C::ExecuteUbergraph_WB_CommonBtn_L(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonBtn_L.WB_CommonBtn_L_C.ExecuteUbergraph_WB_CommonBtn_L");

	FExecuteUbergraph_WB_CommonBtn_L parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

