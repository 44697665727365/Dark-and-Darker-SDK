#include "pch.h"
#include "SDK.h"

void UGA_Longbow_UniquePassive_C::OnHit(struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Longbow_UniquePassive.GA_Longbow_UniquePassive_C.OnHit");

	FOnHit parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

