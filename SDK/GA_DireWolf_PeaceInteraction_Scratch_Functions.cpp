#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_PeaceInteraction_Scratch_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Scratch.GA_DireWolf_PeaceInteraction_Scratch_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_PeaceInteraction_Scratch_C::ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Scratch(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Scratch.GA_DireWolf_PeaceInteraction_Scratch_C.ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Scratch");

	FExecuteUbergraph_GA_DireWolf_PeaceInteraction_Scratch parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

