#include "pch.h"
#include "SDK.h"

void UGA_MonsterStanceChange_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterStanceChange_C::ExecuteUbergraph_GA_MonsterStanceChange(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.ExecuteUbergraph_GA_MonsterStanceChange");

	FExecuteUbergraph_GA_MonsterStanceChange parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

