#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSpearman_Attack3_C::EventReceived_175188354EEA60D137DEA1B109D779BC(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.EventReceived_175188354EEA60D137DEA1B109D779BC");

	FEventReceived_175188354EEA60D137DEA1B109D779BC parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_Attack3_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_Attack3_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSpearman_Attack3_C::ExecuteUbergraph_GA_SkeletonSpearman_Attack3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.ExecuteUbergraph_GA_SkeletonSpearman_Attack3");

	FExecuteUbergraph_GA_SkeletonSpearman_Attack3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

