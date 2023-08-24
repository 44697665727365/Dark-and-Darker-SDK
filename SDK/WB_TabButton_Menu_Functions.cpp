#include "pch.h"
#include "SDK.h"

void UWB_TabButton_Menu_C::Set Tab Text(struct FText DisplayTabText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabButton_Menu.WB_TabButton_Menu_C.Set Tab Text");

	FSet Tab Text parms{};	
	parms.DisplayTabText = DisplayTabText;

	ProcessEvent(fn, &parms);
}

void UWB_TabButton_Menu_C::PreConstruct(bool IsDesignTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabButton_Menu.WB_TabButton_Menu_C.PreConstruct");

	FPreConstruct parms{};	
	parms.IsDesignTime = IsDesignTime;

	ProcessEvent(fn, &parms);
}

void UWB_TabButton_Menu_C::ExecuteUbergraph_WB_TabButton_Menu(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabButton_Menu.WB_TabButton_Menu_C.ExecuteUbergraph_WB_TabButton_Menu");

	FExecuteUbergraph_WB_TabButton_Menu parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

