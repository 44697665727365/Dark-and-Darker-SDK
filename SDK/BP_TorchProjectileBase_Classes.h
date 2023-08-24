#pragma once 
#include <BP_TorchProjectileBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TorchProjectileBase.BP_TorchProjectileBase_C
// Size: 0x710(Inherited: 0x6E0)
struct ABP_TorchProjectileBase_C : ABP_ProjectileToSpawnItemHolder_C
{
	struct UPointLightComponent* PointLightFire;  // 0x6E0 (0x6E0)
	struct UPointLightComponent* PointLight;  // 0x6E8 (0x6E8)
	struct URotatingMovementComponent* RotatingMovement;  // 0x6F0 (0x6F0)
	struct FRotator RepRotation;  // 0x6F8 (0x6F8)


	void OnRep_RepRotation(); // Function BP_TorchProjectileBase.BP_TorchProjectileBase_C.OnRep_RepRotation
	void UserConstructionScript(); // Function BP_TorchProjectileBase.BP_TorchProjectileBase_C.UserConstructionScript
}; 
 
 


