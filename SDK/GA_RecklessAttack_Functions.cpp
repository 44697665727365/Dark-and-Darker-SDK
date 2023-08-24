#include "pch.h"
#include "SDK.h"

void UGA_RecklessAttack_C::EventReceived_22676BF44A86DF25C537C694500CCF60(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RecklessAttack.GA_RecklessAttack_C.EventReceived_22676BF44A86DF25C537C694500CCF60");

	FEventReceived_22676BF44A86DF25C537C694500CCF60 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_RecklessAttack_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RecklessAttack.GA_RecklessAttack_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_RecklessAttack_C::ExecuteUbergraph_GA_RecklessAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RecklessAttack.GA_RecklessAttack_C.ExecuteUbergraph_GA_RecklessAttack");

	FExecuteUbergraph_GA_RecklessAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

