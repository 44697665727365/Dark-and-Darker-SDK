#include "pch.h"
#include "SDK.h"

void UGA_IntenseFocus_C::EventReceived_BCE4DF5A4536514977F0C6B37DBA206E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IntenseFocus.GA_IntenseFocus_C.EventReceived_BCE4DF5A4536514977F0C6B37DBA206E");

	FEventReceived_BCE4DF5A4536514977F0C6B37DBA206E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_IntenseFocus_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IntenseFocus.GA_IntenseFocus_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_IntenseFocus_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IntenseFocus.GA_IntenseFocus_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_IntenseFocus_C::ExecuteUbergraph_GA_IntenseFocus(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IntenseFocus.GA_IntenseFocus_C.ExecuteUbergraph_GA_IntenseFocus");

	FExecuteUbergraph_GA_IntenseFocus parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

