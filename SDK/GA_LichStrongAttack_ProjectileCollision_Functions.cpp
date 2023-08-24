#include "pch.h"
#include "SDK.h"

void UGA_LichStrongAttack_ProjectileCollision_C::TargetDataReceived(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichStrongAttack_ProjectileCollision.GA_LichStrongAttack_ProjectileCollision_C.TargetDataReceived");

	FTargetDataReceived parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UGA_LichStrongAttack_ProjectileCollision_C::ExecuteUbergraph_GA_LichStrongAttack_ProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichStrongAttack_ProjectileCollision.GA_LichStrongAttack_ProjectileCollision_C.ExecuteUbergraph_GA_LichStrongAttack_ProjectileCollision");

	FExecuteUbergraph_GA_LichStrongAttack_ProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

