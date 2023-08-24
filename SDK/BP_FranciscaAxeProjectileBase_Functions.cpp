#include "pch.h"
#include "SDK.h"

void ABP_FranciscaAxeProjectileBase_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FranciscaAxeProjectileBase_C::ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ProjectileHit");

	FProjectileHit parms{};	
	parms.Hit = Hit;
	parms.bIsAttached = bIsAttached;
	parms.ActorPrevTickTransform = ActorPrevTickTransform;

	ProcessEvent(fn, &parms);
}

void ABP_FranciscaAxeProjectileBase_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FranciscaAxeProjectileBase_C::ExecuteUbergraph_BP_FranciscaAxeProjectileBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ExecuteUbergraph_BP_FranciscaAxeProjectileBase");

	FExecuteUbergraph_BP_FranciscaAxeProjectileBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

