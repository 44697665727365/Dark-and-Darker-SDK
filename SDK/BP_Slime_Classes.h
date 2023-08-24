#pragma once 
#include <BP_Slime_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Slime.BP_Slime_C
// Size: 0x11E0(Inherited: 0x11B8)
struct ABP_Slime_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UNiagaraComponent* FXS_Trail;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11C8 (0x11C8)
	struct UPhysicalAnimationComponent* PhysicalAnimation;  // 0x11D0 (0x11D0)
	struct FName Body Name;  // 0x11D8 (0x11D8)


	void OnSetAI(); // Function BP_Slime.BP_Slime_C.OnSetAI
	void ReceiveBeginPlay(); // Function BP_Slime.BP_Slime_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Slime.BP_Slime_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Slime(int32_t EntryPoint); // Function BP_Slime.BP_Slime_C.ExecuteUbergraph_BP_Slime
}; 
 
 


