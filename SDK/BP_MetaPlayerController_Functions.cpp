#include "pch.h"
#include "SDK.h"

void ABP_MetaPlayerController_C::OnLoadSoundData(struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData");

	FOnLoadSoundData parms{};	
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2");

	FOnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::EventFMsgSucceedWidgetMoveItem(struct FMsgSucceedWidgetMoveItem Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem");

	FEventFMsgSucceedWidgetMoveItem parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::UpdateGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState");

	FUpdateGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::BindMouse(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.BindMouse");

	FBindMouse parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::FreeMouse(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.FreeMouse");

	FFreeMouse parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature");

	FBndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_MetaPlayerController_C::ExecuteUbergraph_BP_MetaPlayerController(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController");

	FExecuteUbergraph_BP_MetaPlayerController parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

