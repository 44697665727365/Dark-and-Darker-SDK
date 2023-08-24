#include "pch.h"
#include "SDK.h"

void UGA_Mummy_Attack5_Middle_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack5_Middle.GA_Mummy_Attack5_Middle_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack5_Middle_C::ExecuteUbergraph_GA_Mummy_Attack5_Middle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack5_Middle.GA_Mummy_Attack5_Middle_C.ExecuteUbergraph_GA_Mummy_Attack5_Middle");

	FExecuteUbergraph_GA_Mummy_Attack5_Middle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

