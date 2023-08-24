#include "pch.h"
#include "SDK.h"

void UGA_AchillesStrike_C::EventReceived_3A25ADA54377F6AF2E700A9293B8291B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AchillesStrike.GA_AchillesStrike_C.EventReceived_3A25ADA54377F6AF2E700A9293B8291B");

	FEventReceived_3A25ADA54377F6AF2E700A9293B8291B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_AchillesStrike_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AchillesStrike.GA_AchillesStrike_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_AchillesStrike_C::ExecuteUbergraph_GA_AchillesStrike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AchillesStrike.GA_AchillesStrike_C.ExecuteUbergraph_GA_AchillesStrike");

	FExecuteUbergraph_GA_AchillesStrike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

