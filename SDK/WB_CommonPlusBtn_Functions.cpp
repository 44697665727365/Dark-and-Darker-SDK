#include "pch.h"
#include "SDK.h"

void UWB_CommonPlusBtn_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPlusBtn_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPlusBtn_C::BP_OnPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnPressed");

	FBP_OnPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPlusBtn_C::BP_OnReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnReleased");

	FBP_OnReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CommonPlusBtn_C::ExecuteUbergraph_WB_CommonPlusBtn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.ExecuteUbergraph_WB_CommonPlusBtn");

	FExecuteUbergraph_WB_CommonPlusBtn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

