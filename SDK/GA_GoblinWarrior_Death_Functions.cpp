#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Death.GA_GoblinWarrior_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Death_C::ExecuteUbergraph_GA_GoblinWarrior_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Death.GA_GoblinWarrior_Death_C.ExecuteUbergraph_GA_GoblinWarrior_Death");

	FExecuteUbergraph_GA_GoblinWarrior_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

