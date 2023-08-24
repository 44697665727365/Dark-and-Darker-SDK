#include "pch.h"
#include "SDK.h"

void UGA_WeakpointAttack_C::EventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeakpointAttack.GA_WeakpointAttack_C.EventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE");

	FEventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_WeakpointAttack_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeakpointAttack.GA_WeakpointAttack_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_WeakpointAttack_C::ExecuteUbergraph_GA_WeakpointAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeakpointAttack.GA_WeakpointAttack_C.ExecuteUbergraph_GA_WeakpointAttack");

	FExecuteUbergraph_GA_WeakpointAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

