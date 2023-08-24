#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Guard_On_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Guard_On.GA_UndeadKnight_Guard_On_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Guard_On_C::ExecuteUbergraph_GA_UndeadKnight_Guard_On(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Guard_On.GA_UndeadKnight_Guard_On_C.ExecuteUbergraph_GA_UndeadKnight_Guard_On");

	FExecuteUbergraph_GA_UndeadKnight_Guard_On parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

