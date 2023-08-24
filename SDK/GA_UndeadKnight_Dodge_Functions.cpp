#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_Dodge_C::EventReceived_1963BD844B63C23F28070F8DAA3AB658(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.EventReceived_1963BD844B63C23F28070F8DAA3AB658");

	FEventReceived_1963BD844B63C23F28070F8DAA3AB658 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Dodge_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_Dodge_C::ExecuteUbergraph_GA_UndeadKnight_Dodge(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.ExecuteUbergraph_GA_UndeadKnight_Dodge");

	FExecuteUbergraph_GA_UndeadKnight_Dodge parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

