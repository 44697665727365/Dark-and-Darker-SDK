#include "pch.h"
#include "SDK.h"

void ABP_Projectile_GhostKing_NormalAttack_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Projectile_GhostKing_NormalAttack.BP_Projectile_GhostKing_NormalAttack_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Projectile_GhostKing_NormalAttack_C::ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Projectile_GhostKing_NormalAttack.BP_Projectile_GhostKing_NormalAttack_C.ProjectileHit");

	FProjectileHit parms{};	
	parms.Hit = Hit;
	parms.bIsAttached = bIsAttached;
	parms.ActorPrevTickTransform = ActorPrevTickTransform;

	ProcessEvent(fn, &parms);
}

void ABP_Projectile_GhostKing_NormalAttack_C::ExecuteUbergraph_BP_Projectile_GhostKing_NormalAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Projectile_GhostKing_NormalAttack.BP_Projectile_GhostKing_NormalAttack_C.ExecuteUbergraph_BP_Projectile_GhostKing_NormalAttack");

	FExecuteUbergraph_BP_Projectile_GhostKing_NormalAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

