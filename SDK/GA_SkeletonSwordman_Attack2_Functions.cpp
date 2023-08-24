#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSwordman_Attack2_C::EventReceived_960A9BE24EC84F75B50310891C6A8EF2(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.EventReceived_960A9BE24EC84F75B50310891C6A8EF2");

	FEventReceived_960A9BE24EC84F75B50310891C6A8EF2 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Attack2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Attack2_C::ExecuteUbergraph_GA_SkeletonSwordman_Attack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack2.GA_SkeletonSwordman_Attack2_C.ExecuteUbergraph_GA_SkeletonSwordman_Attack2");

	FExecuteUbergraph_GA_SkeletonSwordman_Attack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

