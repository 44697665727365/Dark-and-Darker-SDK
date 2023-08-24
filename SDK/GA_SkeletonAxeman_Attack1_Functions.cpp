#include "pch.h"
#include "SDK.h"

void UGA_SkeletonAxeman_Attack1_C::EventReceived_14666380446D55B58D0721B32C91ABD3(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_14666380446D55B58D0721B32C91ABD3");

	FEventReceived_14666380446D55B58D0721B32C91ABD3 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonAxeman_Attack1_C::EventReceived_46D29C724C0705ED9484D1BA19D06997(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.EventReceived_46D29C724C0705ED9484D1BA19D06997");

	FEventReceived_46D29C724C0705ED9484D1BA19D06997 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonAxeman_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonAxeman_Attack1_C::ExecuteUbergraph_GA_SkeletonAxeman_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonAxeman_Attack1.GA_SkeletonAxeman_Attack1_C.ExecuteUbergraph_GA_SkeletonAxeman_Attack1");

	FExecuteUbergraph_GA_SkeletonAxeman_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

