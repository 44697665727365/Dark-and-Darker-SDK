#include "pch.h"
#include "SDK.h"

struct FEventReply UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnFocusReceived");

	FOnFocusReceived parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C::OnInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnInitialized");

	FOnInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C::OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnSelectedSlotIdx");

	FOnSelectedSlotIdx parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C::ExecuteUbergraph_WB_VideoOptionSlotAntiAliasingSuperResolutionSlot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.ExecuteUbergraph_WB_VideoOptionSlotAntiAliasingSuperResolutionSlot");

	FExecuteUbergraph_WB_VideoOptionSlotAntiAliasingSuperResolutionSlot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

