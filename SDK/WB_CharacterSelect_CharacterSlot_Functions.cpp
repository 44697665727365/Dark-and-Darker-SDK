#include "pch.h"
#include "SDK.h"

uint8_t UWB_CharacterSelect_CharacterSlot_C::GetCannotSelectableVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.GetCannotSelectableVisibility");

	FGetCannotSelectableVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CharacterSelect_CharacterSlot_C::OnCharacterSlot(struct FCharacterSlot& NewValue, struct FCharacterSlot& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnCharacterSlot");

	FOnCharacterSlot parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterSlot_C::OnLoadArtData(struct UObject* InObjectLoaded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnLoadArtData");

	FOnLoadArtData parms{};	
	parms.InObjectLoaded = InObjectLoaded;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterSlot_C::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterSlot_C::ExecuteUbergraph_WB_CharacterSelect_CharacterSlot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.ExecuteUbergraph_WB_CharacterSelect_CharacterSlot");

	FExecuteUbergraph_WB_CharacterSelect_CharacterSlot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

