#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Combo2_C::EventReceived_A367AFE44A060C9CD080E48A46EBB492(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo2.GA_UndeadKnight_Combo2_C.EventReceived_A367AFE44A060C9CD080E48A46EBB492");

	FEventReceived_A367AFE44A060C9CD080E48A46EBB492 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Combo2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo2.GA_UndeadKnight_Combo2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Combo2_C::ExecuteUbergraph_GA_UndeadKnight_Combo2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo2.GA_UndeadKnight_Combo2_C.ExecuteUbergraph_GA_UndeadKnight_Combo2");

	FExecuteUbergraph_GA_UndeadKnight_Combo2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

