#include "pch.h"
#include "SDK.h"

uint8_t UWB_CharacterCreate_ClassPortraitItem_C::GetWorkinprogressVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetWorkinprogressVisibility");

	FGetWorkinprogressVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterCreate_ClassPortraitItem_C::GetLockedVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetLockedVisibility");

	FGetLockedVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterCreate_ClassPortraitItem_C::GetVisibilityByClassCreatable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetVisibilityByClassCreatable");

	FGetVisibilityByClassCreatable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterCreate_ClassPortraitItem_C::GetClassAvailableVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetClassAvailableVisibility");

	FGetClassAvailableVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterCreate_ClassPortraitItem_C::IsVisibleIfSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.IsVisibleIfSelected");

	FIsVisibleIfSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

