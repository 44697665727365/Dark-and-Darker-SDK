#pragma once 
#include <BP_ChestSpecial_Base_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ChestSpecial_Base.BP_ChestSpecial_Base_C
// Size: 0x4E0(Inherited: 0x4D0)
struct ABP_ChestSpecial_Base_C : ABP_AnimatedChestBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4D0 (0x4D0)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh;  // 0x4D8 (0x4D8)


	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractFailed
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractSucceed
	void ExecuteUbergraph_BP_ChestSpecial_Base(int32_t EntryPoint); // Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.ExecuteUbergraph_BP_ChestSpecial_Base
}; 
 
 


