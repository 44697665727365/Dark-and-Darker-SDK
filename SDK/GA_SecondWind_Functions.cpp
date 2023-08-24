#include "pch.h"
#include "SDK.h"

void UGA_SecondWind_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SecondWind.GA_SecondWind_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_SecondWind_C::ExecuteUbergraph_GA_SecondWind(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SecondWind.GA_SecondWind_C.ExecuteUbergraph_GA_SecondWind");

	FExecuteUbergraph_GA_SecondWind parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

