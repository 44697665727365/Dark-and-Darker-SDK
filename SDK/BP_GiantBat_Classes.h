#pragma once 
#include <BP_GiantBat_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantBat.BP_GiantBat_C
// Size: 0x11E8(Inherited: 0x11B8)
struct ABP_GiantBat_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11D8 (0x11D8)
	struct FTimerHandle PushUp TimerHandle;  // 0x11E0 (0x11E0)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GiantBat.BP_GiantBat_C.GameplayTagUpdated
	void ReceiveBeginPlay(); // Function BP_GiantBat.BP_GiantBat_C.ReceiveBeginPlay
	void PushUp(); // Function BP_GiantBat.BP_GiantBat_C.PushUp
	void OnSetAI(); // Function BP_GiantBat.BP_GiantBat_C.OnSetAI
	void ExecuteUbergraph_BP_GiantBat(int32_t EntryPoint); // Function BP_GiantBat.BP_GiantBat_C.ExecuteUbergraph_BP_GiantBat
}; 
 
 


