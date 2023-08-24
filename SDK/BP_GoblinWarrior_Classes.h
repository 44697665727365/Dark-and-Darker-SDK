#pragma once 
#include <BP_GoblinWarrior_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GoblinWarrior.BP_GoblinWarrior_C
// Size: 0x1230(Inherited: 0x11B8)
struct ABP_GoblinWarrior_C : ABP_Goblin_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UNiagaraComponent* Niagara;  // 0x11C0 (0x11C0)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh1;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1210 (0x1210)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1218 (0x1218)
	double FleePhaseHP;  // 0x1220 (0x1220)
	double FleePhaseProbability;  // 0x1228 (0x1228)


	void UserConstructionScript(); // Function BP_GoblinWarrior.BP_GoblinWarrior_C.UserConstructionScript
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GoblinWarrior.BP_GoblinWarrior_C.GameplayTagUpdated
	void ReceiveBeginPlay(); // Function BP_GoblinWarrior.BP_GoblinWarrior_C.ReceiveBeginPlay
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_GoblinWarrior.BP_GoblinWarrior_C.OnFMsgGASAttributeNotifyBlueprint
	void ExecuteUbergraph_BP_GoblinWarrior(int32_t EntryPoint); // Function BP_GoblinWarrior.BP_GoblinWarrior_C.ExecuteUbergraph_BP_GoblinWarrior
}; 
 
 


