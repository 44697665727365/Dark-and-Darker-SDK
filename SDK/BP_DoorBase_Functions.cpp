#include "pch.h"
#include "SDK.h"

void ABP_DoorBase_C::IsInteracterForward(struct AActor* Interacter, bool& IsForward){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.IsInteracterForward");

	FIsInteracterForward parms{};	
	parms.Interacter = Interacter;
	parms.IsForward = IsForward;

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::OnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.OnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2");

	FOnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_DoorBase_C::ExecuteUbergraph_BP_DoorBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoorBase.BP_DoorBase_C.ExecuteUbergraph_BP_DoorBase");

	FExecuteUbergraph_BP_DoorBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

