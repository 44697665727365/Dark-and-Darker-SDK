#include "pch.h"
#include "SDK.h"

void UGA_PerfectBlock_C::EventReceived_4539B7AE42F792B8339800BE8C68930E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerfectBlock.GA_PerfectBlock_C.EventReceived_4539B7AE42F792B8339800BE8C68930E");

	FEventReceived_4539B7AE42F792B8339800BE8C68930E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PerfectBlock_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerfectBlock.GA_PerfectBlock_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_PerfectBlock_C::ExecuteUbergraph_GA_PerfectBlock(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PerfectBlock.GA_PerfectBlock_C.ExecuteUbergraph_GA_PerfectBlock");

	FExecuteUbergraph_GA_PerfectBlock parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

