#pragma once 
#include <BP_ProjectileToSpawnItemHolder_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C
// Size: 0x6E0(Inherited: 0x6D0)
struct ABP_ProjectileToSpawnItemHolder_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	ABP_PhysicalItemHolder_C* ItemHolderToSpawn;  // 0x6D8 (0x6D8)


	void ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform); // Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit
	void SpawnItemHolder(AItemHolderActorBase* SpawnHolderClass, struct FTransform InTransform, struct UItem* ItemObject); // Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder
	void ExecuteUbergraph_BP_ProjectileToSpawnItemHolder(int32_t EntryPoint); // Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder
}; 
 
 


