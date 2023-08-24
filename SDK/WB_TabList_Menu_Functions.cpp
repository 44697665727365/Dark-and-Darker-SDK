#include "pch.h"
#include "SDK.h"

void UWB_TabList_Menu_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabList_Menu.WB_TabList_Menu_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_TabList_Menu_C::EventOnTabSelected(struct FName TabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabList_Menu.WB_TabList_Menu_C.EventOnTabSelected");

	FEventOnTabSelected parms{};	
	parms.TabId = TabId;

	ProcessEvent(fn, &parms);
}

void UWB_TabList_Menu_C::ExecuteUbergraph_WB_TabList_Menu(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_TabList_Menu.WB_TabList_Menu_C.ExecuteUbergraph_WB_TabList_Menu");

	FExecuteUbergraph_WB_TabList_Menu parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

