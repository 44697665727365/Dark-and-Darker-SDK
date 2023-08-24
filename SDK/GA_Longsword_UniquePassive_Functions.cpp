#include "pch.h"
#include "SDK.h"

void UGA_Longsword_UniquePassive_C::OnHit(struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Longsword_UniquePassive.GA_Longsword_UniquePassive_C.OnHit");

	FOnHit parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Longsword_UniquePassive_C::ExecuteUbergraph_GA_Longsword_UniquePassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Longsword_UniquePassive.GA_Longsword_UniquePassive_C.ExecuteUbergraph_GA_Longsword_UniquePassive");

	FExecuteUbergraph_GA_Longsword_UniquePassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

