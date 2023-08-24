#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Combo3_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo3.GA_UndeadKnight_Combo3_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Combo3_C::ExecuteUbergraph_GA_UndeadKnight_Combo3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo3.GA_UndeadKnight_Combo3_C.ExecuteUbergraph_GA_UndeadKnight_Combo3");

	FExecuteUbergraph_GA_UndeadKnight_Combo3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

