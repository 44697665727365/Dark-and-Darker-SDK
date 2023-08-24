#include "pch.h"
#include "SDK.h"

void UGA_ExplosionBottle_Projectile_Collision_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottle_Projectile_Collision.GA_ExplosionBottle_Projectile_Collision_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_ExplosionBottle_Projectile_Collision_C::ExecuteUbergraph_GA_ExplosionBottle_Projectile_Collision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottle_Projectile_Collision.GA_ExplosionBottle_Projectile_Collision_C.ExecuteUbergraph_GA_ExplosionBottle_Projectile_Collision");

	FExecuteUbergraph_GA_ExplosionBottle_Projectile_Collision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

