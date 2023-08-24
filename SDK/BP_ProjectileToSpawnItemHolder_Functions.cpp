#include "pch.h"
#include "SDK.h"

void ABP_ProjectileToSpawnItemHolder_C::ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit");

	FProjectileHit parms{};	
	parms.Hit = Hit;
	parms.bIsAttached = bIsAttached;
	parms.ActorPrevTickTransform = ActorPrevTickTransform;

	ProcessEvent(fn, &parms);
}

void ABP_ProjectileToSpawnItemHolder_C::SpawnItemHolder(AItemHolderActorBase* SpawnHolderClass, struct FTransform InTransform, struct UItem* ItemObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder");

	FSpawnItemHolder parms{};	
	parms.SpawnHolderClass = SpawnHolderClass;
	parms.InTransform = InTransform;
	parms.ItemObject = ItemObject;

	ProcessEvent(fn, &parms);
}

void ABP_ProjectileToSpawnItemHolder_C::ExecuteUbergraph_BP_ProjectileToSpawnItemHolder(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder");

	FExecuteUbergraph_BP_ProjectileToSpawnItemHolder parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

