#pragma once 
#include <BP_Pavise_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Pavise.BP_Pavise_C
// Size: 0x590(Inherited: 0x580)
struct ABP_Pavise_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UBoxComponent* StuckBox;  // 0x588 (0x588)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Pavise.BP_Pavise_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Pavise(int32_t EntryPoint); // Function BP_Pavise.BP_Pavise_C.ExecuteUbergraph_BP_Pavise
}; 
 
 


