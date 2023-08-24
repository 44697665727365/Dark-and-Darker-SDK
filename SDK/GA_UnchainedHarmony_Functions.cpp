#include "pch.h"
#include "SDK.h"

void UGA_UnchainedHarmony_C::OnApplied(struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.OnApplied");

	FOnApplied parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void UGA_UnchainedHarmony_C::ExecuteUbergraph_GA_UnchainedHarmony(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.ExecuteUbergraph_GA_UnchainedHarmony");

	FExecuteUbergraph_GA_UnchainedHarmony parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

