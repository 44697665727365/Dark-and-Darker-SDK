#include "pch.h"
#include "SDK.h"

void UGA_MummySpawn1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn1.GA_MummySpawn1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MummySpawn1_C::ExecuteUbergraph_GA_MummySpawn1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn1.GA_MummySpawn1_C.ExecuteUbergraph_GA_MummySpawn1");

	FExecuteUbergraph_GA_MummySpawn1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

