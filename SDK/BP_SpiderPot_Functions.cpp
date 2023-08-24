#include "pch.h"
#include "SDK.h"

void ABP_SpiderPot_C::OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderPot.BP_SpiderPot_C.OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F");

	FOnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderPot_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderPot.BP_SpiderPot_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SpiderPot_C::Spawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderPot.BP_SpiderPot_C.Spawn");

	FSpawn parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SpiderPot_C::OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderPot.BP_SpiderPot_C.OnImpactEnduranceExhausted");

	FOnImpactEnduranceExhausted parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderPot_C::ExecuteUbergraph_BP_SpiderPot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderPot.BP_SpiderPot_C.ExecuteUbergraph_BP_SpiderPot");

	FExecuteUbergraph_BP_SpiderPot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

