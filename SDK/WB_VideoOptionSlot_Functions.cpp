#include "pch.h"
#include "SDK.h"

struct FEventReply UWB_VideoOptionSlot_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnFocusReceived");

	FOnFocusReceived parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_VideoOptionSlot_C::OnVideoSettingChanged(int32_t QualitySetting){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnVideoSettingChanged");

	FOnVideoSettingChanged parms{};	
	parms.QualitySetting = QualitySetting;

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlot_C::OnInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnInitialized");

	FOnInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlot_C::OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnSelectedSlotIdx");

	FOnSelectedSlotIdx parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlot_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlot_C::ExecuteUbergraph_WB_VideoOptionSlot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.ExecuteUbergraph_WB_VideoOptionSlot");

	FExecuteUbergraph_WB_VideoOptionSlot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

