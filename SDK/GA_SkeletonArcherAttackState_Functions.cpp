#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcherAttackState_C::EventReceived_A7C930B945E5C257182D509E8F4803E0(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.EventReceived_A7C930B945E5C257182D509E8F4803E0");

	FEventReceived_A7C930B945E5C257182D509E8F4803E0 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttackState_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcherAttackState_C::ExecuteUbergraph_GA_SkeletonArcherAttackState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcherAttackState.GA_SkeletonArcherAttackState_C.ExecuteUbergraph_GA_SkeletonArcherAttackState");

	FExecuteUbergraph_GA_SkeletonArcherAttackState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

