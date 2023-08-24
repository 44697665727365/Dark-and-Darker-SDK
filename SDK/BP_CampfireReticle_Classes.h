#pragma once 
#include <BP_CampfireReticle_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CampfireReticle.BP_CampfireReticle_C
// Size: 0x2E8(Inherited: 0x2D8)
struct ABP_CampfireReticle_C : AGameplayAbilityWorldReticle_ActorVisualization
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2D8 (0x2D8)
	struct UStaticMeshComponent* StaticMesh;  // 0x2E0 (0x2E0)


	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function BP_CampfireReticle.BP_CampfireReticle_C.SetReticleMaterialParamVector
	void ExecuteUbergraph_BP_CampfireReticle(int32_t EntryPoint); // Function BP_CampfireReticle.BP_CampfireReticle_C.ExecuteUbergraph_BP_CampfireReticle
}; 
 
 


