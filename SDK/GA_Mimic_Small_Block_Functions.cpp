#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Small_Block_C::EventReceived_44A1C966492FEBCDC0A8A380F779EA5E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.EventReceived_44A1C966492FEBCDC0A8A380F779EA5E");

	FEventReceived_44A1C966492FEBCDC0A8A380F779EA5E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Small_Block_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Small_Block_C::ExecuteUbergraph_GA_Mimic_Small_Block(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_Block.GA_Mimic_Small_Block_C.ExecuteUbergraph_GA_Mimic_Small_Block");

	FExecuteUbergraph_GA_Mimic_Small_Block parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

