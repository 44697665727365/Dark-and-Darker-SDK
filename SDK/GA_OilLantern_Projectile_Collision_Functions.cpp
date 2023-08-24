#include "pch.h"
#include "SDK.h"

void UGA_OilLantern_Projectile_Collision_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_Projectile_Collision.GA_OilLantern_Projectile_Collision_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_OilLantern_Projectile_Collision_C::ExecuteUbergraph_GA_OilLantern_Projectile_Collision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_Projectile_Collision.GA_OilLantern_Projectile_Collision_C.ExecuteUbergraph_GA_OilLantern_Projectile_Collision");

	FExecuteUbergraph_GA_OilLantern_Projectile_Collision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

