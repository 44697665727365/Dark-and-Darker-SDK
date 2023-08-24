#include "pch.h"
#include "SDK.h"

void ABP_RuinsGolem_C::EventReceived_A38344B64752875B4AF8BCB9F35613E5(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem.BP_RuinsGolem_C.EventReceived_A38344B64752875B4AF8BCB9F35613E5");

	FEventReceived_A38344B64752875B4AF8BCB9F35613E5 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void ABP_RuinsGolem_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem.BP_RuinsGolem_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_RuinsGolem_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem.BP_RuinsGolem_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_RuinsGolem_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem.BP_RuinsGolem_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_RuinsGolem_C::ExecuteUbergraph_BP_RuinsGolem(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem.BP_RuinsGolem_C.ExecuteUbergraph_BP_RuinsGolem");

	FExecuteUbergraph_BP_RuinsGolem parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

