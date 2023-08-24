#include "pch.h"
#include "SDK.h"

void UGA_MummySpawn3_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn3.GA_MummySpawn3_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MummySpawn3_C::ExecuteUbergraph_GA_MummySpawn3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummySpawn3.GA_MummySpawn3_C.ExecuteUbergraph_GA_MummySpawn3");

	FExecuteUbergraph_GA_MummySpawn3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

