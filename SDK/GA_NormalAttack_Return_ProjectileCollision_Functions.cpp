#include "pch.h"
#include "SDK.h"

void UGA_NormalAttack_Return_ProjectileCollision_C::Aoe Spawned(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_NormalAttack_Return_ProjectileCollision.GA_NormalAttack_Return_ProjectileCollision_C.Aoe Spawned");

	FAoe Spawned parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_NormalAttack_Return_ProjectileCollision_C::ExecuteUbergraph_GA_NormalAttack_Return_ProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_NormalAttack_Return_ProjectileCollision.GA_NormalAttack_Return_ProjectileCollision_C.ExecuteUbergraph_GA_NormalAttack_Return_ProjectileCollision");

	FExecuteUbergraph_GA_NormalAttack_Return_ProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

