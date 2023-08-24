#include "pch.h"
#include "SDK.h"

void UGA_Taunt_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Taunt.GA_Taunt_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Taunt_C::ExecuteUbergraph_GA_Taunt(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Taunt.GA_Taunt_C.ExecuteUbergraph_GA_Taunt");

	FExecuteUbergraph_GA_Taunt parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

