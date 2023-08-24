#include "pch.h"
#include "SDK.h"

void ABP_WallSpike_C::SetAbilityTriggerTag(struct FGameplayTag New Tag, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.SetAbilityTriggerTag");

	FSetAbilityTriggerTag parms{};	
	parms.New Tag = New Tag;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::OnMessageReceived_55C0747248939B02403D89BE669E525B(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.OnMessageReceived_55C0747248939B02403D89BE669E525B");

	FOnMessageReceived_55C0747248939B02403D89BE669E525B parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_WallSpike_C::ExecuteUbergraph_BP_WallSpike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WallSpike.BP_WallSpike_C.ExecuteUbergraph_BP_WallSpike");

	FExecuteUbergraph_BP_WallSpike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

