#include "pch.h"
#include "SDK.h"

void UGA_FlameSpoutActivate_C::OnFinish_92AC14EB40A137DBD4635DB2EE8F6A04(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.OnFinish_92AC14EB40A137DBD4635DB2EE8F6A04");

	FOnFinish_92AC14EB40A137DBD4635DB2EE8F6A04 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutActivate_C::EventReceived_F6A1B4B944BDF21421359F943320AAF7(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.EventReceived_F6A1B4B944BDF21421359F943320AAF7");

	FEventReceived_F6A1B4B944BDF21421359F943320AAF7 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutActivate_C::OnAuraOverlapBeginEvent(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.OnAuraOverlapBeginEvent");

	FOnAuraOverlapBeginEvent parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutActivate_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutActivate_C::ExecuteUbergraph_GA_FlameSpoutActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.ExecuteUbergraph_GA_FlameSpoutActivate");

	FExecuteUbergraph_GA_FlameSpoutActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

