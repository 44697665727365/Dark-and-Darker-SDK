#include "pch.h"
#include "SDK.h"

void UGA_Chase_C::OnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Chase.GA_Chase_C.OnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C");

	FOnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UGA_Chase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Chase.GA_Chase_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Chase_C::EventFMsgAccountLinkAccountSessionDataResponse(struct FMsgAccountLinkAccountSessionDataResponse Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Chase.GA_Chase_C.EventFMsgAccountLinkAccountSessionDataResponse");

	FEventFMsgAccountLinkAccountSessionDataResponse parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void UGA_Chase_C::ExecuteUbergraph_GA_Chase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Chase.GA_Chase_C.ExecuteUbergraph_GA_Chase");

	FExecuteUbergraph_GA_Chase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

