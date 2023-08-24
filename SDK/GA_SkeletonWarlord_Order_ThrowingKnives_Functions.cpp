#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Order_ThrowingKnives_C::EventReceived_4779E9A8467D8891C1C2CDBF27B92EC1(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.EventReceived_4779E9A8467D8891C1C2CDBF27B92EC1");

	FEventReceived_4779E9A8467D8891C1C2CDBF27B92EC1 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_ThrowingKnives_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_ThrowingKnives_C::ExecuteUbergraph_GA_SkeletonWarlord_Order_ThrowingKnives(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_ThrowingKnives.GA_SkeletonWarlord_Order_ThrowingKnives_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_ThrowingKnives");

	FExecuteUbergraph_GA_SkeletonWarlord_Order_ThrowingKnives parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

