#include "pch.h"
#include "SDK.h"

void UWB_GameSystemMessageGroup_C::SetNextIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex");

	FSetNextIndex parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessageGroup_C::OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816");

	FOnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessageGroup_C::OnInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnInitialized");

	FOnInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessageGroup_C::EventFMsgSystemMessageNotify(struct FMsgSystemMessageNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify");

	FEventFMsgSystemMessageNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessageGroup_C::ExecuteUbergraph_WB_GameSystemMessageGroup(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup");

	FExecuteUbergraph_WB_GameSystemMessageGroup parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

