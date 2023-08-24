#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_PeaceInteractionBase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteractionBase.GA_DireWolf_PeaceInteractionBase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_PeaceInteractionBase_C::ExecuteUbergraph_GA_DireWolf_PeaceInteractionBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteractionBase.GA_DireWolf_PeaceInteractionBase_C.ExecuteUbergraph_GA_DireWolf_PeaceInteractionBase");

	FExecuteUbergraph_GA_DireWolf_PeaceInteractionBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

