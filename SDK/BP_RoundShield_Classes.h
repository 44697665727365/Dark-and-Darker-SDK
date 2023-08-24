#pragma once 
#include <BP_RoundShield_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_RoundShield.BP_RoundShield_C
// Size: 0x590(Inherited: 0x580)
struct ABP_RoundShield_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UBoxComponent* StuckBox;  // 0x588 (0x588)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_RoundShield.BP_RoundShield_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_RoundShield(int32_t EntryPoint); // Function BP_RoundShield.BP_RoundShield_C.ExecuteUbergraph_BP_RoundShield
}; 
 
 


