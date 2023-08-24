#include "pch.h"
#include "SDK.h"

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget");

	FIsCursorOverInteractableWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(struct APlayerController* PC){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor");

	FEnableVirtualCursor parms{};	
	parms.PC = PC;

	ProcessEvent(fn, &parms);
}

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(struct APlayerController* PC){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor");

	FDisableVirtualCursor parms{};	
	parms.PC = PC;

	ProcessEvent(fn, &parms);
}

