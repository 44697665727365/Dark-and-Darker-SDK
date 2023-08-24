#include "pch.h"
#include "SDK.h"

void UGA_WarCry_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarCry.GA_WarCry_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_WarCry_C::ExecuteUbergraph_GA_WarCry(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarCry.GA_WarCry_C.ExecuteUbergraph_GA_WarCry");

	FExecuteUbergraph_GA_WarCry parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

