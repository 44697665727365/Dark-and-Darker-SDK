#pragma once 
#include <BP_AbilityActor_Decal_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AbilityActor_Decal.BP_AbilityActor_Decal_C
// Size: 0x308(Inherited: 0x2D8)
struct ABP_AbilityActor_Decal_C : AGameplayAbilityWorldReticle_ActorVisualization
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2D8 (0x2D8)
	struct UDecalComponent* Decal;  // 0x2E0 (0x2E0)
	struct UObject* ;  // 0x2E8 (0x2E8)
	struct FVector CurColor;  // 0x2F0 (0x2F0)


	void ReceiveBeginPlay(); // Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ReceiveBeginPlay
	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.SetReticleMaterialParamVector
	void OnParametersInitialized(); // Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.OnParametersInitialized
	void ExecuteUbergraph_BP_AbilityActor_Decal(int32_t EntryPoint); // Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ExecuteUbergraph_BP_AbilityActor_Decal
}; 
 
 


