#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Medium_Block_C::EventReceived_A9DA7C014F460F86E96E0591DAE16358(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.EventReceived_A9DA7C014F460F86E96E0591DAE16358");

	FEventReceived_A9DA7C014F460F86E96E0591DAE16358 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Medium_Block_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Medium_Block_C::ExecuteUbergraph_GA_Mimic_Medium_Block(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C.ExecuteUbergraph_GA_Mimic_Medium_Block");

	FExecuteUbergraph_GA_Mimic_Medium_Block parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

