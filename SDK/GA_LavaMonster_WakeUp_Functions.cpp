#include "pch.h"
#include "SDK.h"

void UGA_LavaMonster_WakeUp_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_WakeUp.GA_LavaMonster_WakeUp_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_WakeUp_C::ExecuteUbergraph_GA_LavaMonster_WakeUp(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_WakeUp.GA_LavaMonster_WakeUp_C.ExecuteUbergraph_GA_LavaMonster_WakeUp");

	FExecuteUbergraph_GA_LavaMonster_WakeUp parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

