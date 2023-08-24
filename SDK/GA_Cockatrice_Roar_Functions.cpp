#include "pch.h"
#include "SDK.h"

void UGA_Cockatrice_Roar_C::EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9");

	FEventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_Roar_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_Roar_C::ExecuteUbergraph_GA_Cockatrice_Roar(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.ExecuteUbergraph_GA_Cockatrice_Roar");

	FExecuteUbergraph_GA_Cockatrice_Roar parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

