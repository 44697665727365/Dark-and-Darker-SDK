#pragma once 
#include <BP_SkeletonMage_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonMage_Common.BP_SkeletonMage_Common_C
// Size: 0x124C(Inherited: 0x11B8)
struct ABP_SkeletonMage_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	struct FName Key Name;  // 0x1210 (0x1210)
	struct UObject* BarrierTarget;  // 0x1218 (0x1218)
	struct TArray<struct FPrimaryAssetId> In Gameplay Effect Id Array;  // 0x1220 (0x1220)
	double BeforeBarrierHealth;  // 0x1230 (0x1230)
	struct ABP_DCMonsterBase_C* As BP DCMonster Base;  // 0x1238 (0x1238)
	struct FName Probability;  // 0x1240 (0x1240)
	int32_t Count;  // 0x1248 (0x1248)


	void OnSetAI(); // Function BP_SkeletonMage_Common.BP_SkeletonMage_Common_C.OnSetAI
	void ExecuteUbergraph_BP_SkeletonMage_Common(int32_t EntryPoint); // Function BP_SkeletonMage_Common.BP_SkeletonMage_Common_C.ExecuteUbergraph_BP_SkeletonMage_Common
}; 
 
 


