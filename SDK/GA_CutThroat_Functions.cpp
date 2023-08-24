#include "pch.h"
#include "SDK.h"

void UGA_CutThroat_C::EventReceived_2265C892450CA01A3DE2AB8074D39042(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CutThroat.GA_CutThroat_C.EventReceived_2265C892450CA01A3DE2AB8074D39042");

	FEventReceived_2265C892450CA01A3DE2AB8074D39042 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CutThroat_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CutThroat.GA_CutThroat_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_CutThroat_C::ExecuteUbergraph_GA_CutThroat(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CutThroat.GA_CutThroat_C.ExecuteUbergraph_GA_CutThroat");

	FExecuteUbergraph_GA_CutThroat parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

