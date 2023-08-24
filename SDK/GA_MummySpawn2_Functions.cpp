#include "pch.h"
#include "SDK.h"

void UGA_MummySpawn2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn2.GA_MummySpawn2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MummySpawn2_C::ExecuteUbergraph_GA_MummySpawn2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn2.GA_MummySpawn2_C.ExecuteUbergraph_GA_MummySpawn2");

	FExecuteUbergraph_GA_MummySpawn2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

