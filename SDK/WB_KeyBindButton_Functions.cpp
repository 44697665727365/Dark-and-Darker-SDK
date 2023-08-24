#include "pch.h"
#include "SDK.h"

void UWB_KeyBindButton_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_KeyBindButton.WB_KeyBindButton_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_KeyBindButton_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_KeyBindButton.WB_KeyBindButton_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_KeyBindButton_C::ExecuteUbergraph_WB_KeyBindButton(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_KeyBindButton.WB_KeyBindButton_C.ExecuteUbergraph_WB_KeyBindButton");

	FExecuteUbergraph_WB_KeyBindButton parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

