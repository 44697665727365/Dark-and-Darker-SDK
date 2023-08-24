#include "pch.h"
#include "SDK.h"

void UGA_Rupture_C::EventReceived_EE5F81C54BEED75940848E8847E89F65(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Rupture.GA_Rupture_C.EventReceived_EE5F81C54BEED75940848E8847E89F65");

	FEventReceived_EE5F81C54BEED75940848E8847E89F65 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Rupture_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Rupture.GA_Rupture_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Rupture_C::ExecuteUbergraph_GA_Rupture(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Rupture.GA_Rupture_C.ExecuteUbergraph_GA_Rupture");

	FExecuteUbergraph_GA_Rupture parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

