#pragma once 
#include <BP_SkeletonWoodenBarrel_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C
// Size: 0x4E0(Inherited: 0x4B8)
struct ABP_SkeletonWoodenBarrel_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UDCGeometryCollectionComponent* GC_WoodenBarrel_Default;  // 0x4C0 (0x4C0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4C8 (0x4C8)
	struct FPrimaryAssetId Monster ID;  // 0x4D0 (0x4D0)


	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.OnImpactEnduranceExhausted
	void ExecuteUbergraph_BP_SkeletonWoodenBarrel(int32_t EntryPoint); // Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.ExecuteUbergraph_BP_SkeletonWoodenBarrel
}; 
 
 


