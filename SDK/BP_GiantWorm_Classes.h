#pragma once 
#include <BP_GiantWorm_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantWorm.BP_GiantWorm_C
// Size: 0x1208(Inherited: 0x11B8)
struct ABP_GiantWorm_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UNiagaraComponent* Niagara;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11E8 (0x11E8)
	struct TArray<struct FActiveGameplayEffectHandle> Buff MoveSpeed Effect Handle;  // 0x11F0 (0x11F0)
	int32_t Min;  // 0x1200 (0x1200)
	int32_t Max;  // 0x1204 (0x1204)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GiantWorm.BP_GiantWorm_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_GiantWorm(int32_t EntryPoint); // Function BP_GiantWorm.BP_GiantWorm_C.ExecuteUbergraph_BP_GiantWorm
}; 
 
 


