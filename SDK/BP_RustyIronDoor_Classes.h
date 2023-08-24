#pragma once 
#include <BP_RustyIronDoor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_RustyIronDoor.BP_RustyIronDoor_C
// Size: 0x4F8(Inherited: 0x4E8)
struct ABP_RustyIronDoor_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UArrowComponent* Arrow;  // 0x4F0 (0x4F0)


	void BroadcastSystemMessage(struct ABP_PlayerCharacter_C* Interacter, struct FText SystemMessage); // Function BP_RustyIronDoor.BP_RustyIronDoor_C.BroadcastSystemMessage
	void ReduceItem(struct AActor* TargetActor, struct FItemData ItemData, int32_t Count); // Function BP_RustyIronDoor.BP_RustyIronDoor_C.ReduceItem
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_RustyIronDoor.BP_RustyIronDoor_C.InteractSucceed
	void ExecuteUbergraph_BP_RustyIronDoor(int32_t EntryPoint); // Function BP_RustyIronDoor.BP_RustyIronDoor_C.ExecuteUbergraph_BP_RustyIronDoor
}; 
 
 


