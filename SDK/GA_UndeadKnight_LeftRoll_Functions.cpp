#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_LeftRoll_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeftRoll.GA_UndeadKnight_LeftRoll_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_LeftRoll_C::ExecuteUbergraph_GA_UndeadKnight_LeftRoll(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeftRoll.GA_UndeadKnight_LeftRoll_C.ExecuteUbergraph_GA_UndeadKnight_LeftRoll");

	FExecuteUbergraph_GA_UndeadKnight_LeftRoll parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

