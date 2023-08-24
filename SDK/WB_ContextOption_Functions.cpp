#include "pch.h"
#include "SDK.h"

void UWB_ContextOption_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextOption.WB_ContextOption_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_ContextOption_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextOption.WB_ContextOption_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_ContextOption_C::ExecuteUbergraph_WB_ContextOption(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextOption.WB_ContextOption_C.ExecuteUbergraph_WB_ContextOption");

	FExecuteUbergraph_WB_ContextOption parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

