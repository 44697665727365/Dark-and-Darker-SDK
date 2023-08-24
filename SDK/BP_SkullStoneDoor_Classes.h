#pragma once 
#include <BP_SkullStoneDoor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkullStoneDoor.BP_SkullStoneDoor_C
// Size: 0x4F8(Inherited: 0x4E8)
struct ABP_SkullStoneDoor_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UArrowComponent* Arrow;  // 0x4F0 (0x4F0)


	void ReduceItem(struct AActor* TargetActor, struct FItemData ItemData, int32_t Count); // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.ReduceItem
	void BroadcastSystemMessage(struct ABP_PlayerCharacter_C* Interacter, struct FText SystemMessage); // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.BroadcastSystemMessage
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.InteractSucceed
	void ExecuteUbergraph_BP_SkullStoneDoor(int32_t EntryPoint); // Function BP_SkullStoneDoor.BP_SkullStoneDoor_C.ExecuteUbergraph_BP_SkullStoneDoor
}; 
 
 


