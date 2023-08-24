#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Order_BackStep_C::EventReceived_156B8D0D48D777076A1A77AE8F63574F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.EventReceived_156B8D0D48D777076A1A77AE8F63574F");

	FEventReceived_156B8D0D48D777076A1A77AE8F63574F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_BackStep_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_BackStep_C::ExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_BackStep.GA_SkeletonWarlord_Order_BackStep_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep");

	FExecuteUbergraph_GA_SkeletonWarlord_Order_BackStep parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

