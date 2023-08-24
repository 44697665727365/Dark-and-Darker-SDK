#pragma once 
#include <BP_FranciscaAxeProjectileBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C
// Size: 0x6F0(Inherited: 0x6E0)
struct ABP_FranciscaAxeProjectileBase_C : ABP_ProjectileToSpawnItemHolder_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6E0 (0x6E0)
	struct URotatingMovementComponent* RotatingMovement;  // 0x6E8 (0x6E8)


	void UserConstructionScript(); // Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.UserConstructionScript
	void ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform); // Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ProjectileHit
	void ReceiveBeginPlay(); // Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FranciscaAxeProjectileBase(int32_t EntryPoint); // Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ExecuteUbergraph_BP_FranciscaAxeProjectileBase
}; 
 
 


