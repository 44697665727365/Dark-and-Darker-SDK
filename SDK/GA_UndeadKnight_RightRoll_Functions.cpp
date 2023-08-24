#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_RightRoll_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_RightRoll.GA_UndeadKnight_RightRoll_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_RightRoll_C::ExecuteUbergraph_GA_UndeadKnight_RightRoll(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_RightRoll.GA_UndeadKnight_RightRoll_C.ExecuteUbergraph_GA_UndeadKnight_RightRoll");

	FExecuteUbergraph_GA_UndeadKnight_RightRoll parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

