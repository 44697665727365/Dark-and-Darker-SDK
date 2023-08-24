#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_PoisonArea_Attack_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_PoisonArea_Attack.GA_GiantWorm_PoisonArea_Attack_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_PoisonArea_Attack_C::ExecuteUbergraph_GA_GiantWorm_PoisonArea_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_PoisonArea_Attack.GA_GiantWorm_PoisonArea_Attack_C.ExecuteUbergraph_GA_GiantWorm_PoisonArea_Attack");

	FExecuteUbergraph_GA_GiantWorm_PoisonArea_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

