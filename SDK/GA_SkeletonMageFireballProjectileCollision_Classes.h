#pragma once 
#include <GA_SkeletonMageFireballProjectileCollision_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C
// Size: 0x5E0(Inherited: 0x5D0)
struct UGA_SkeletonMageFireballProjectileCollision_C : UGA_AoeCallerFromProjectile_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5D0 (0x5D0)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0x5D8 (0x5D8)


	void TargetDataReceived(struct FHitResult& Hit); // Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.TargetDataReceived
	void ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision(int32_t EntryPoint); // Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision
}; 
 
 


