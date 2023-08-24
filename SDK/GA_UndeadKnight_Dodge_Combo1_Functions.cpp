#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Dodge_Combo1_C::EventReceived_79EC7A844F6968EDFF5B84B265136436(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.EventReceived_79EC7A844F6968EDFF5B84B265136436");

	FEventReceived_79EC7A844F6968EDFF5B84B265136436 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Dodge_Combo1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Dodge_Combo1_C::ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge_Combo1.GA_UndeadKnight_Dodge_Combo1_C.ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo1");

	FExecuteUbergraph_GA_UndeadKnight_Dodge_Combo1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

