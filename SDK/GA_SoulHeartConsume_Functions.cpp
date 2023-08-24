#include "pch.h"
#include "SDK.h"

void UGA_SoulHeartConsume_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SoulHeartConsume_C::ExecuteUbergraph_GA_SoulHeartConsume(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.ExecuteUbergraph_GA_SoulHeartConsume");

	FExecuteUbergraph_GA_SoulHeartConsume parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

