#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSwordman_Attack1_C::EventReceived_B9451CAD42065F4E84D7C5B432AF4101(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.EventReceived_B9451CAD42065F4E84D7C5B432AF4101");

	FEventReceived_B9451CAD42065F4E84D7C5B432AF4101 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Attack1_C::ExecuteUbergraph_GA_SkeletonSwordman_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.ExecuteUbergraph_GA_SkeletonSwordman_Attack1");

	FExecuteUbergraph_GA_SkeletonSwordman_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

