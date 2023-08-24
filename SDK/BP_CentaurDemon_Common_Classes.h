#pragma once 
#include <BP_CentaurDemon_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CentaurDemon_Common.BP_CentaurDemon_Common_C
// Size: 0x122A(Inherited: 0x11B8)
struct ABP_CentaurDemon_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox12;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox11;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox10;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1210 (0x1210)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1218 (0x1218)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1220 (0x1220)
	char pad_4648_1 : 7;  // 0x1228 (0x1228)
	bool Sword : 1;  // 0x1228 (0x1228)
	char pad_4649_1 : 7;  // 0x1229 (0x1229)
	bool Shield : 1;  // 0x1229 (0x1229)


	void ReceiveBeginPlay(); // Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_CentaurDemon_Common(int32_t EntryPoint); // Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.ExecuteUbergraph_BP_CentaurDemon_Common
}; 
 
 


