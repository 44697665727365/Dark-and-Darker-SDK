#pragma once 
#include <BP_Wraith_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Wraith_Common.BP_Wraith_Common_C
// Size: 0x12D0(Inherited: 0x11B8)
struct ABP_Wraith_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11F8 (0x11F8)
	struct UStaticMeshComponent* Weapon;  // 0x1200 (0x1200)
	struct USkeletalMeshComponent* Cloth;  // 0x1208 (0x1208)
	struct USkeletalMeshComponent* Dress;  // 0x1210 (0x1210)
	struct USkeletalMeshComponent* Scarf;  // 0x1218 (0x1218)
	struct USkeletalMeshComponent* Wristband;  // 0x1220 (0x1220)
	struct USkeletalMeshComponent* Sleeve;  // 0x1228 (0x1228)
	struct USkeletalMeshComponent* Necklace;  // 0x1230 (0x1230)
	struct USkeletalMeshComponent* Shoulderpad;  // 0x1238 (0x1238)
	struct USkeletalMeshComponent* Hood;  // 0x1240 (0x1240)
	struct USkeletalMeshComponent* eyes;  // 0x1248 (0x1248)
	struct USkeletalMeshComponent* hair;  // 0x1250 (0x1250)
	char pad_4696_1 : 7;  // 0x1258 (0x1258)
	bool bUseHair : 1;  // 0x1258 (0x1258)
	char pad_4697_1 : 7;  // 0x1259 (0x1259)
	bool bUseEyes : 1;  // 0x1259 (0x1259)
	char pad_4698_1 : 7;  // 0x125A (0x125A)
	bool bUseHood : 1;  // 0x125A (0x125A)
	char pad_4699_1 : 7;  // 0x125B (0x125B)
	bool bUseShoulderpad : 1;  // 0x125B (0x125B)
	char pad_4700_1 : 7;  // 0x125C (0x125C)
	bool bUseNecklace : 1;  // 0x125C (0x125C)
	char pad_4701_1 : 7;  // 0x125D (0x125D)
	bool bUseSleeve : 1;  // 0x125D (0x125D)
	char pad_4702_1 : 7;  // 0x125E (0x125E)
	bool bUseWristband : 1;  // 0x125E (0x125E)
	char pad_4703_1 : 7;  // 0x125F (0x125F)
	bool bUseScarf : 1;  // 0x125F (0x125F)
	char pad_4704_1 : 7;  // 0x1260 (0x1260)
	bool bUseDress : 1;  // 0x1260 (0x1260)
	char pad_4705_1 : 7;  // 0x1261 (0x1261)
	bool bUseCloth : 1;  // 0x1261 (0x1261)
	char pad_4706[2];  // 0x1262 (0x1262)
	struct FName Probability;  // 0x1264 (0x1264)
	char pad_4716[4];  // 0x126C (0x126C)
	struct TMap<struct FGameplayTag, struct FGameplayCueTag> GameplayCueByStateMap;  // 0x1270 (0x1270)
	struct FGameplayTag GameplayCueTagByState;  // 0x12C0 (0x12C0)
	struct FName HPRatio;  // 0x12C8 (0x12C8)


	void UserConstructionScript(); // Function BP_Wraith_Common.BP_Wraith_Common_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Wraith_Common.BP_Wraith_Common_C.ReceiveBeginPlay
	void OnSetAI(); // Function BP_Wraith_Common.BP_Wraith_Common_C.OnSetAI
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Wraith_Common.BP_Wraith_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Wraith_Common(int32_t EntryPoint); // Function BP_Wraith_Common.BP_Wraith_Common_C.ExecuteUbergraph_BP_Wraith_Common
}; 
 
 


