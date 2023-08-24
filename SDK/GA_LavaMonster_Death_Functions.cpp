#include "pch.h"
#include "SDK.h"

void UGA_LavaMonster_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_Death.GA_LavaMonster_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_Death_C::ExecuteUbergraph_GA_LavaMonster_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_Death.GA_LavaMonster_Death_C.ExecuteUbergraph_GA_LavaMonster_Death");

	FExecuteUbergraph_GA_LavaMonster_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

