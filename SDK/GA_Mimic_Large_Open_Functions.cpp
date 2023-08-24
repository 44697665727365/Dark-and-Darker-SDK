#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Large_Open_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Open.GA_Mimic_Large_Open_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Large_Open_C::ExecuteUbergraph_GA_Mimic_Large_Open(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Open.GA_Mimic_Large_Open_C.ExecuteUbergraph_GA_Mimic_Large_Open");

	FExecuteUbergraph_GA_Mimic_Large_Open parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

