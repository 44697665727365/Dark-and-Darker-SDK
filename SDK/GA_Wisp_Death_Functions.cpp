#include "pch.h"
#include "SDK.h"

void UGA_Wisp_Death_C::EventReceived_A2C3D5EC4D6443972507938CFD3998CA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Death.GA_Wisp_Death_C.EventReceived_A2C3D5EC4D6443972507938CFD3998CA");

	FEventReceived_A2C3D5EC4D6443972507938CFD3998CA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Wisp_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Death.GA_Wisp_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Wisp_Death_C::ExecuteUbergraph_GA_Wisp_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Wisp_Death.GA_Wisp_Death_C.ExecuteUbergraph_GA_Wisp_Death");

	FExecuteUbergraph_GA_Wisp_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

