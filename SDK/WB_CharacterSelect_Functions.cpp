#include "pch.h"
#include "SDK.h"

void UWB_CharacterSelect_C::OnMessageReceived_DB58151943EC564859806EB851DC5E04(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect.WB_CharacterSelect_C.OnMessageReceived_DB58151943EC564859806EB851DC5E04");

	FOnMessageReceived_DB58151943EC564859806EB851DC5E04 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect.WB_CharacterSelect_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_C::EventFMsgWidgetCreateCharacterErrorMessageNotify(struct FMsgWidgetCreateCharacterErrorMessageNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect.WB_CharacterSelect_C.EventFMsgWidgetCreateCharacterErrorMessageNotify");

	FEventFMsgWidgetCreateCharacterErrorMessageNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_C::ExecuteUbergraph_WB_CharacterSelect(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect.WB_CharacterSelect_C.ExecuteUbergraph_WB_CharacterSelect");

	FExecuteUbergraph_WB_CharacterSelect parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

