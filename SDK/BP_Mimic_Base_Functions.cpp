#include "pch.h"
#include "SDK.h"

void ABP_Mimic_Base_C::Apply Mimic Attribute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.Apply Mimic Attribute");

	FApply Mimic Attribute parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::SetRotationZero(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.SetRotationZero");

	FSetRotationZero parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::InteractTargetInfoName(struct FText& Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.InteractTargetInfoName");

	FInteractTargetInfoName parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::EventReceived_E61C493B48AD715A2EB816B4A4A8550A(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.EventReceived_E61C493B48AD715A2EB816B4A4A8550A");

	FEventReceived_E61C493B48AD715A2EB816B4A4A8550A parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::OnMessageReceived_0C3900FE47946FCE8C6258BAB1382319(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_0C3900FE47946FCE8C6258BAB1382319");

	FOnMessageReceived_0C3900FE47946FCE8C6258BAB1382319 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::OnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599");

	FOnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::ReceivePossessed(struct AController* NewController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.ReceivePossessed");

	FReceivePossessed parms{};	
	parms.NewController = NewController;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::EventFMsgInteractStarted(struct FMsgInteractStarted Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractStarted");

	FEventFMsgInteractStarted parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::OnTimerExpired(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.OnTimerExpired");

	FOnTimerExpired parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::EventFMsgInteractFailed(struct FMsgInteractFailed Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractFailed");

	FEventFMsgInteractFailed parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::BndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.BndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature");

	FBndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::CheckStanceOne(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.CheckStanceOne");

	FCheckStanceOne parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Base_C::ExecuteUbergraph_BP_Mimic_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Base.BP_Mimic_Base_C.ExecuteUbergraph_BP_Mimic_Base");

	FExecuteUbergraph_BP_Mimic_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

