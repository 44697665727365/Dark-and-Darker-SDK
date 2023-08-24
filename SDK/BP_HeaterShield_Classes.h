#pragma once 
#include <BP_HeaterShield_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_HeaterShield.BP_HeaterShield_C
// Size: 0x590(Inherited: 0x580)
struct ABP_HeaterShield_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UBoxComponent* StuckBox;  // 0x588 (0x588)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_HeaterShield.BP_HeaterShield_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_HeaterShield(int32_t EntryPoint); // Function BP_HeaterShield.BP_HeaterShield_C.ExecuteUbergraph_BP_HeaterShield
}; 
 
 


