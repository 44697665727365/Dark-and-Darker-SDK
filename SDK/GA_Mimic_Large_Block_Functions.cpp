#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Large_Block_C::EventReceived_99461E984568D2BD0C202A96BB8C59B4(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.EventReceived_99461E984568D2BD0C202A96BB8C59B4");

	FEventReceived_99461E984568D2BD0C202A96BB8C59B4 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Large_Block_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Large_Block_C::ExecuteUbergraph_GA_Mimic_Large_Block(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Block.GA_Mimic_Large_Block_C.ExecuteUbergraph_GA_Mimic_Large_Block");

	FExecuteUbergraph_GA_Mimic_Large_Block parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

