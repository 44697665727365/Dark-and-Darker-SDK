#include "pch.h"
#include "SDK.h"

void UNavigationBarAction_C::UpdateSyleOnInputMethod(uint8_t InputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.UpdateSyleOnInputMethod");

	FUpdateSyleOnInputMethod parms{};	
	parms.InputType = InputType;

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::EventInputMethodChanged(uint8_t bNewInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.EventInputMethodChanged");

	FEventInputMethodChanged parms{};	
	parms.bNewInputType = bNewInputType;

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::BP_OnPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.BP_OnPressed");

	FBP_OnPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::BP_OnReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.BP_OnReleased");

	FBP_OnReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationBarAction_C::ExecuteUbergraph_NavigationBarAction(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationBarAction.NavigationBarAction_C.ExecuteUbergraph_NavigationBarAction");

	FExecuteUbergraph_NavigationBarAction parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

