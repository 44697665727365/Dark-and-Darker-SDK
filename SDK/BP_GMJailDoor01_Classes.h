#pragma once 
#include <BP_GMJailDoor01_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GMJailDoor01.BP_GMJailDoor01_C
// Size: 0x4F8(Inherited: 0x4E8)
struct ABP_GMJailDoor01_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UArrowComponent* Arrow;  // 0x4F0 (0x4F0)


	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractFailed
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractSucceed
	void ExecuteUbergraph_BP_GMJailDoor01(int32_t EntryPoint); // Function BP_GMJailDoor01.BP_GMJailDoor01_C.ExecuteUbergraph_BP_GMJailDoor01
}; 
 
 


