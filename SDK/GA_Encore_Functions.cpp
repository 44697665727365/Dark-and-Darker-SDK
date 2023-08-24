#include "pch.h"
#include "SDK.h"

void UGA_Encore_C::EventReceived_1D679BCA4BE8738D12DAEB8FB3E837DD(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Encore.GA_Encore_C.EventReceived_1D679BCA4BE8738D12DAEB8FB3E837DD");

	FEventReceived_1D679BCA4BE8738D12DAEB8FB3E837DD parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Encore_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Encore.GA_Encore_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Encore_C::ExecuteUbergraph_GA_Encore(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Encore.GA_Encore_C.ExecuteUbergraph_GA_Encore");

	FExecuteUbergraph_GA_Encore parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

