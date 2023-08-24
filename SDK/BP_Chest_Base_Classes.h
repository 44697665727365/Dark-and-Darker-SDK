#pragma once 
#include <BP_Chest_Base_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Chest_Base.BP_Chest_Base_C
// Size: 0x550(Inherited: 0x4D0)
struct ABP_Chest_Base_C : ABP_AnimatedChestBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4D0 (0x4D0)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh;  // 0x4D8 (0x4D8)
	struct TArray<ADCMonsterBase*> Monsters;  // 0x4E0 (0x4E0)
	int32_t Spawn Ratio;  // 0x4F0 (0x4F0)
	char pad_1268[4];  // 0x4F4 (0x4F4)
	double Random Delay;  // 0x4F8 (0x4F8)
	struct TMap<struct AActor*, struct FTimerHandle> TimerHandleMap;  // 0x500 (0x500)


	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_Chest_Base.BP_Chest_Base_C.InteractFailed
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Chest_Base.BP_Chest_Base_C.InteractSucceed
	void ExecuteUbergraph_BP_Chest_Base(int32_t EntryPoint); // Function BP_Chest_Base.BP_Chest_Base_C.ExecuteUbergraph_BP_Chest_Base
}; 
 
 


