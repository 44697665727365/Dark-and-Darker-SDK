#include "pch.h"
#include "SDK.h"

void UGA_SavageRoar_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SavageRoar.GA_SavageRoar_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_SavageRoar_C::ExecuteUbergraph_GA_SavageRoar(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SavageRoar.GA_SavageRoar_C.ExecuteUbergraph_GA_SavageRoar");

	FExecuteUbergraph_GA_SavageRoar parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

