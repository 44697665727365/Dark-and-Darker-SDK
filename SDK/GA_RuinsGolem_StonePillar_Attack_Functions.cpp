#include "pch.h"
#include "SDK.h"

void UGA_RuinsGolem_StonePillar_Attack_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_StonePillar_Attack.GA_RuinsGolem_StonePillar_Attack_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_StonePillar_Attack_C::ExecuteUbergraph_GA_RuinsGolem_StonePillar_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_StonePillar_Attack.GA_RuinsGolem_StonePillar_Attack_C.ExecuteUbergraph_GA_RuinsGolem_StonePillar_Attack");

	FExecuteUbergraph_GA_RuinsGolem_StonePillar_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

