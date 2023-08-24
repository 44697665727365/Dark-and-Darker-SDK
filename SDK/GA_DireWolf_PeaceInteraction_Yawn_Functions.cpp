#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_PeaceInteraction_Yawn_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Yawn.GA_DireWolf_PeaceInteraction_Yawn_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_PeaceInteraction_Yawn_C::ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Yawn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_PeaceInteraction_Yawn.GA_DireWolf_PeaceInteraction_Yawn_C.ExecuteUbergraph_GA_DireWolf_PeaceInteraction_Yawn");

	FExecuteUbergraph_GA_DireWolf_PeaceInteraction_Yawn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

