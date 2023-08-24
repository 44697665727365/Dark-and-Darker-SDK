#include "pch.h"
#include "SDK.h"

void UGA_ForcefulShot_C::On Launch Character(struct AActor* TargetActor, struct FVector HitDirection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ForcefulShot.GA_ForcefulShot_C.On Launch Character");

	FOn Launch Character parms{};	
	parms.TargetActor = TargetActor;
	parms.HitDirection = HitDirection;

	ProcessEvent(fn, &parms);
}

void UGA_ForcefulShot_C::EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ForcefulShot.GA_ForcefulShot_C.EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E");

	FEventReceived_71BD8AA2429E3C9F1C2813B20526FB8E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ForcefulShot_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ForcefulShot.GA_ForcefulShot_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ForcefulShot_C::ExecuteUbergraph_GA_ForcefulShot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ForcefulShot.GA_ForcefulShot_C.ExecuteUbergraph_GA_ForcefulShot");

	FExecuteUbergraph_GA_ForcefulShot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

