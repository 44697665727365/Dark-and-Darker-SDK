#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_PeaceInteraction_Eat_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Eat.GA_DireWolf_PeaceInteraction_Eat_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_PeaceInteraction_Eat_C::ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Eat(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Eat.GA_DireWolf_PeaceInteraction_Eat_C.ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Eat");

	FExecuteUbergraph_GA_DireWolf_PeaceInteraction_Eat parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

