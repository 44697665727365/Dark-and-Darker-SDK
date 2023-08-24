#include "pch.h"
#include "SDK.h"

void UGA_DemonDog_Death_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Death.GA_DemonDog_Death_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_Death_C::ExecuteUbergraph_GA_DemonDog_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Death.GA_DemonDog_Death_C.ExecuteUbergraph_GA_DemonDog_Death");

	FExecuteUbergraph_GA_DemonDog_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

