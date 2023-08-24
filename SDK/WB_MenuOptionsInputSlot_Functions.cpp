#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionsInputSlot_C::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsInputSlot.WB_MenuOptionsInputSlot_C.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

