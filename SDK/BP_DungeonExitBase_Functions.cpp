#include "pch.h"
#include "SDK.h"

void ABP_DungeonExitBase_C::OnDungeonExitOverlapped(struct ADCPlayerCharacterBase* PlayerCharacter, bool& bResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnDungeonExitOverlapped");

	FOnDungeonExitOverlapped parms{};	
	parms.PlayerCharacter = PlayerCharacter;
	parms.bResult = bResult;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::OnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE");

	FOnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::OnMessageReceived_40B3AB014AC456228E29568172E97769(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_40B3AB014AC456228E29568172E97769");

	FOnMessageReceived_40B3AB014AC456228E29568172E97769 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::BndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.BndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::EventOnFMsgDungeonInfoNotify(struct FMsgDungeonInfoNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgDungeonInfoNotify");

	FEventOnFMsgDungeonInfoNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::EventOnFMsgGameFloorRuleNotify(struct FMsgGameFloorRuleNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgGameFloorRuleNotify");

	FEventOnFMsgGameFloorRuleNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::OpenExit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.OpenExit");

	FOpenExit parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DungeonExitBase_C::ExecuteUbergraph_BP_DungeonExitBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonExitBase.BP_DungeonExitBase_C.ExecuteUbergraph_BP_DungeonExitBase");

	FExecuteUbergraph_BP_DungeonExitBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

