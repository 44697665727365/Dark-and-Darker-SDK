#pragma once 
#include <BP_GoblinAxeman_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GoblinAxeman.BP_GoblinAxeman_C
// Size: 0x1228(Inherited: 0x11B8)
struct ABP_GoblinAxeman_C : ABP_Goblin_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh1;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x1210 (0x1210)
	double FleePhaseProbability;  // 0x1218 (0x1218)
	double FleePhaseHP;  // 0x1220 (0x1220)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GoblinAxeman.BP_GoblinAxeman_C.GameplayTagUpdated
	void ReceiveBeginPlay(); // Function BP_GoblinAxeman.BP_GoblinAxeman_C.ReceiveBeginPlay
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_GoblinAxeman.BP_GoblinAxeman_C.OnFMsgGASAttributeNotifyBlueprint
	void ExecuteUbergraph_BP_GoblinAxeman(int32_t EntryPoint); // Function BP_GoblinAxeman.BP_GoblinAxeman_C.ExecuteUbergraph_BP_GoblinAxeman
}; 
 
 


