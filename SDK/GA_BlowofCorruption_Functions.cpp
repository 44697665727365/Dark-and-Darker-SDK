#include "pch.h"
#include "SDK.h"

void UGA_BlowofCorruption_C::EventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BlowofCorruption.GA_BlowofCorruption_C.EventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488");

	FEventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_BlowofCorruption_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BlowofCorruption.GA_BlowofCorruption_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_BlowofCorruption_C::ExecuteUbergraph_GA_BlowofCorruption(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BlowofCorruption.GA_BlowofCorruption_C.ExecuteUbergraph_GA_BlowofCorruption");

	FExecuteUbergraph_GA_BlowofCorruption parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

