#include "pch.h"
#include "SDK.h"

void UGA_SmallGhost_Death_C::EventReceived_905269414E38620A7B4BD9BD4DE20C6B(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.EventReceived_905269414E38620A7B4BD9BD4DE20C6B");

	FEventReceived_905269414E38620A7B4BD9BD4DE20C6B parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SmallGhost_Death_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SmallGhost_Death_C::ExecuteUbergraph_GA_SmallGhost_Death(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SmallGhost_Death.GA_SmallGhost_Death_C.ExecuteUbergraph_GA_SmallGhost_Death");

	FExecuteUbergraph_GA_SmallGhost_Death parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

