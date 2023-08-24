#include "pch.h"
#include "SDK.h"

void ABP_PropsActorBase_C::FindNavModifier(struct TArray<struct UNavModifierComponent*>& Results){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.FindNavModifier");

	FFindNavModifier parms{};	
	parms.Results = Results;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::DisableAllMeshs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.DisableAllMeshs");

	FDisableAllMeshs parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::FindGeometryCollectionDefault(struct UGeometryCollectionComponent*& GeometryCollection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.FindGeometryCollectionDefault");

	FFindGeometryCollectionDefault parms{};	
	parms.GeometryCollection = GeometryCollection;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::OnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.OnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E");

	FOnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::EventFMsgGASAttributeNotify(struct FMsgGASAttributeNotify InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.EventFMsgGASAttributeNotify");

	FEventFMsgGASAttributeNotify parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.OnImpactEnduranceExhausted");

	FOnImpactEnduranceExhausted parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::DestructClient(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.DestructClient");

	FDestructClient parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PropsActorBase_C::ExecuteUbergraph_BP_PropsActorBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsActorBase.BP_PropsActorBase_C.ExecuteUbergraph_BP_PropsActorBase");

	FExecuteUbergraph_BP_PropsActorBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

