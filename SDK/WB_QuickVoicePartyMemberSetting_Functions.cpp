#include "pch.h"
#include "SDK.h"

void UWB_QuickVoicePartyMemberSetting_C::OnListItemObjectSet(struct UObject* ListItemObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.OnListItemObjectSet");

	FOnListItemObjectSet parms{};	
	parms.ListItemObject = ListItemObject;

	ProcessEvent(fn, &parms);
}

void UWB_QuickVoicePartyMemberSetting_C::ExecuteUbergraph_WB_QuickVoicePartyMemberSetting(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.ExecuteUbergraph_WB_QuickVoicePartyMemberSetting");

	FExecuteUbergraph_WB_QuickVoicePartyMemberSetting parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

