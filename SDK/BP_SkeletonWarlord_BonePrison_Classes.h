#pragma once 
#include <BP_SkeletonWarlord_BonePrison_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C
// Size: 0x11F0(Inherited: 0x11B8)
struct ABP_SkeletonWarlord_BonePrison_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11C0 (0x11C0)
	struct UNiagaraComponent* FXS_RuinsGolem_Pillar_Emerge;  // 0x11C8 (0x11C8)
	struct UDCGeometryCollectionComponent* DCGeometryCollection;  // 0x11D0 (0x11D0)
	struct UFieldSystemComponent* FieldSystem;  // 0x11D8 (0x11D8)
	struct AActor* Target;  // 0x11E0 (0x11E0)
	struct ABP_SkeletonWarlord_C* Summoner;  // 0x11E8 (0x11E8)


	void Destroy FX(); // Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.Destroy FX
	void ReceiveBeginPlay(); // Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_SkeletonWarlord_BonePrison(int32_t EntryPoint); // Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.ExecuteUbergraph_BP_SkeletonWarlord_BonePrison
}; 
 
 


