#include "pch.h"
#include "SDK.h"

void UWB_CharacterCreateGroupMain_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateGroupMain_C::OnVisibilityChanged_Event(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.OnVisibilityChanged_Event");

	FOnVisibilityChanged_Event parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateGroupMain_C::ExecuteUbergraph_WB_CharacterCreateGroupMain(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.ExecuteUbergraph_WB_CharacterCreateGroupMain");

	FExecuteUbergraph_WB_CharacterCreateGroupMain parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

