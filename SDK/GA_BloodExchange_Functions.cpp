#include "pch.h"
#include "SDK.h"

void UGA_BloodExchange_C::EventReceived_319C471D49A666CAA5CDCFAEC961EDA9(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BloodExchange.GA_BloodExchange_C.EventReceived_319C471D49A666CAA5CDCFAEC961EDA9");

	FEventReceived_319C471D49A666CAA5CDCFAEC961EDA9 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_BloodExchange_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BloodExchange.GA_BloodExchange_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_BloodExchange_C::ExecuteUbergraph_GA_BloodExchange(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BloodExchange.GA_BloodExchange_C.ExecuteUbergraph_GA_BloodExchange");

	FExecuteUbergraph_GA_BloodExchange parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

