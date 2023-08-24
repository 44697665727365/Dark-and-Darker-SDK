#include "pch.h"
#include "SDK.h"

void UGA_HolyPurification_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyPurification.GA_HolyPurification_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_HolyPurification_C::ExecuteUbergraph_GA_HolyPurification(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyPurification.GA_HolyPurification_C.ExecuteUbergraph_GA_HolyPurification");

	FExecuteUbergraph_GA_HolyPurification parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

