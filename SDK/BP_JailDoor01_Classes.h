#pragma once 
#include <BP_JailDoor01_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_JailDoor01.BP_JailDoor01_C
// Size: 0x4F8(Inherited: 0x4E8)
struct ABP_JailDoor01_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UArrowComponent* Arrow;  // 0x4F0 (0x4F0)


	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_JailDoor01.BP_JailDoor01_C.InteractFailed
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_JailDoor01.BP_JailDoor01_C.InteractSucceed
	void ExecuteUbergraph_BP_JailDoor01(int32_t EntryPoint); // Function BP_JailDoor01.BP_JailDoor01_C.ExecuteUbergraph_BP_JailDoor01
}; 
 
 


