#include "pch.h"
#include "SDK.h"

void UGA_TrapDetection_C::OnMessageReceived_AB747E83435B04EED3CD2F9F715D5068(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TrapDetection.GA_TrapDetection_C.OnMessageReceived_AB747E83435B04EED3CD2F9F715D5068");

	FOnMessageReceived_AB747E83435B04EED3CD2F9F715D5068 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UGA_TrapDetection_C::EventFMsgAccountLinkAccountSessionDataResponse(struct FMsgAccountLinkAccountSessionDataResponse Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TrapDetection.GA_TrapDetection_C.EventFMsgAccountLinkAccountSessionDataResponse");

	FEventFMsgAccountLinkAccountSessionDataResponse parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void UGA_TrapDetection_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TrapDetection.GA_TrapDetection_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_TrapDetection_C::ExecuteUbergraph_GA_TrapDetection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TrapDetection.GA_TrapDetection_C.ExecuteUbergraph_GA_TrapDetection");

	FExecuteUbergraph_GA_TrapDetection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

