#include "pch.h"
#include "SDK.h"

void UGA_Wisp_Dispell_C::EventReceived_EECC35E14AC8B4DECCFAF39DB9078458(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.EventReceived_EECC35E14AC8B4DECCFAF39DB9078458");

	FEventReceived_EECC35E14AC8B4DECCFAF39DB9078458 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Wisp_Dispell_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Wisp_Dispell_C::ExecuteUbergraph_GA_Wisp_Dispell(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.ExecuteUbergraph_GA_Wisp_Dispell");

	FExecuteUbergraph_GA_Wisp_Dispell parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

