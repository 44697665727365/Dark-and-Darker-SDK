#include "pch.h"
#include "SDK.h"

void UGA_GoblinBolasinger_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Death.GA_GoblinBolasinger_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Death_C::ExecuteUbergraph_GA_GoblinBolasinger_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Death.GA_GoblinBolasinger_Death_C.ExecuteUbergraph_GA_GoblinBolasinger_Death");

	FExecuteUbergraph_GA_GoblinBolasinger_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

