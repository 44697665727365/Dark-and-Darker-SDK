#include "pch.h"
#include "SDK.h"

void UGA_Smite_C::EventReceived_6E6CA3954E759AB441086385A5A2E81E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Smite.GA_Smite_C.EventReceived_6E6CA3954E759AB441086385A5A2E81E");

	FEventReceived_6E6CA3954E759AB441086385A5A2E81E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Smite_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Smite.GA_Smite_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Smite_C::ExecuteUbergraph_GA_Smite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Smite.GA_Smite_C.ExecuteUbergraph_GA_Smite");

	FExecuteUbergraph_GA_Smite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

