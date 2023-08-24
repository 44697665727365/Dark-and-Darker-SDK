#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionsInputBindSlot_C::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsInputBindSlot.WB_MenuOptionsInputBindSlot_C.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

