#pragma once 
#include <BP_LanternProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_LanternProjectile.BP_LanternProjectile_C
// Size: 0x718(Inherited: 0x6E0)
struct ABP_LanternProjectile_C : ABP_ProjectileToSpawnItemHolder_C
{
	struct UNiagaraComponent* FXS_Fire_OilLantern_Util;  // 0x6E0 (0x6E0)
	struct UPointLightComponent* PointLightFire;  // 0x6E8 (0x6E8)
	struct UPointLightComponent* PointLight;  // 0x6F0 (0x6F0)
	struct URotatingMovementComponent* RotatingMovement;  // 0x6F8 (0x6F8)
	struct FRotator RepRotation;  // 0x700 (0x700)


	void OnRep_RepRotation(); // Function BP_LanternProjectile.BP_LanternProjectile_C.OnRep_RepRotation
	void UserConstructionScript(); // Function BP_LanternProjectile.BP_LanternProjectile_C.UserConstructionScript
}; 
 
 


