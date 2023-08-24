#pragma once 
#include <BP_GiantSpider_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantSpider.BP_GiantSpider_C
// Size: 0x121C(Inherited: 0x11B8)
struct ABP_GiantSpider_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox10;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1210 (0x1210)
	int32_t Cobweb Count;  // 0x1218 (0x1218)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GiantSpider.BP_GiantSpider_C.GameplayTagUpdated
	void OnSetAI(); // Function BP_GiantSpider.BP_GiantSpider_C.OnSetAI
	void ExecuteUbergraph_BP_GiantSpider(int32_t EntryPoint); // Function BP_GiantSpider.BP_GiantSpider_C.ExecuteUbergraph_BP_GiantSpider
}; 
 
 


