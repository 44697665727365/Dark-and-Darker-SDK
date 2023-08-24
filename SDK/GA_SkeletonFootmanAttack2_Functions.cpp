#include "pch.h"
#include "SDK.h"

void UGA_SkeletonFootmanAttack2_C::EventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.EventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0");

	FEventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanAttack2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanAttack2_C::ExecuteUbergraph_GA_SkeletonFootmanAttack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.ExecuteUbergraph_GA_SkeletonFootmanAttack2");

	FExecuteUbergraph_GA_SkeletonFootmanAttack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

