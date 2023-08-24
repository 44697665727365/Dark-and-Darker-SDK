#include "pch.h"
#include "SDK.h"

void UGA_VictoryStrike_C::EventReceived_4152A666499A52F3576D7DA76244168D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4152A666499A52F3576D7DA76244168D");

	FEventReceived_4152A666499A52F3576D7DA76244168D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_VictoryStrike_C::EventReceived_4550563E45E7099E87C701BAF081F1C4(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4550563E45E7099E87C701BAF081F1C4");

	FEventReceived_4550563E45E7099E87C701BAF081F1C4 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_VictoryStrike_C::EventReceived_E82B711947DCAFA3711E85BF6CDB03F0(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_E82B711947DCAFA3711E85BF6CDB03F0");

	FEventReceived_E82B711947DCAFA3711E85BF6CDB03F0 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_VictoryStrike_C::ClientOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.ClientOnSkillActivate");

	FClientOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_VictoryStrike_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_VictoryStrike_C::ExecuteUbergraph_GA_VictoryStrike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_VictoryStrike.GA_VictoryStrike_C.ExecuteUbergraph_GA_VictoryStrike");

	FExecuteUbergraph_GA_VictoryStrike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

