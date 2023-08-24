#include "pch.h"
#include "SDK.h"

void UWB_CharacterSelectGroupMain_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectGroupMain_C::OnVisibilityChanged_Event(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.OnVisibilityChanged_Event");

	FOnVisibilityChanged_Event parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectGroupMain_C::ExecuteUbergraph_WB_CharacterSelectGroupMain(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.ExecuteUbergraph_WB_CharacterSelectGroupMain");

	FExecuteUbergraph_WB_CharacterSelectGroupMain parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

