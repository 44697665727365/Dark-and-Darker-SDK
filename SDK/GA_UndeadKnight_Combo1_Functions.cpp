#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Combo1_C::EventReceived_B1C357A44753DEDA6E4606999AAC67F5(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.EventReceived_B1C357A44753DEDA6E4606999AAC67F5");

	FEventReceived_B1C357A44753DEDA6E4606999AAC67F5 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Combo1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Combo1_C::ExecuteUbergraph_GA_UndeadKnight_Combo1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.ExecuteUbergraph_GA_UndeadKnight_Combo1");

	FExecuteUbergraph_GA_UndeadKnight_Combo1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

