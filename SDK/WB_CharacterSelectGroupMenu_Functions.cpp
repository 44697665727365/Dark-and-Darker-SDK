#include "pch.h"
#include "SDK.h"

void UWB_CharacterSelectGroupMenu_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectGroupMenu_C::OnVisibilityChanged_Event(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.OnVisibilityChanged_Event");

	FOnVisibilityChanged_Event parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectGroupMenu_C::ExecuteUbergraph_WB_CharacterSelectGroupMenu(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.ExecuteUbergraph_WB_CharacterSelectGroupMenu");

	FExecuteUbergraph_WB_CharacterSelectGroupMenu parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

