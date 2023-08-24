#include "pch.h"
#include "SDK.h"

void UWB_SelectedArrow_C::PreConstruct(bool IsDesignTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_SelectedArrow.WB_SelectedArrow_C.PreConstruct");

	FPreConstruct parms{};	
	parms.IsDesignTime = IsDesignTime;

	ProcessEvent(fn, &parms);
}

void UWB_SelectedArrow_C::ExecuteUbergraph_WB_SelectedArrow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_SelectedArrow.WB_SelectedArrow_C.ExecuteUbergraph_WB_SelectedArrow");

	FExecuteUbergraph_WB_SelectedArrow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

