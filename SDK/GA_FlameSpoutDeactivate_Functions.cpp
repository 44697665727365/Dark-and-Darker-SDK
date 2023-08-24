#include "pch.h"
#include "SDK.h"

void UGA_FlameSpoutDeactivate_C::OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2");

	FOnFinish_8AD04CB04396038F0C5A4B832DCEC3A2 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutDeactivate_C::EventReceived_BAE8241E4992256FE025C3B5840FF2DD(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.EventReceived_BAE8241E4992256FE025C3B5840FF2DD");

	FEventReceived_BAE8241E4992256FE025C3B5840FF2DD parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutDeactivate_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutDeactivate_C::ExecuteUbergraph_GA_FlameSpoutDeactivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.ExecuteUbergraph_GA_FlameSpoutDeactivate");

	FExecuteUbergraph_GA_FlameSpoutDeactivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

