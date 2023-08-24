#pragma once 
#include <BP_GiantCentipede_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantCentipede.BP_GiantCentipede_C
// Size: 0x12D8(Inherited: 0x11B8)
struct ABP_GiantCentipede_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox15;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox14;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox13;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox12;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox11;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox10;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x1210 (0x1210)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x1218 (0x1218)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x1220 (0x1220)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1228 (0x1228)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1230 (0x1230)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1238 (0x1238)
	double FleePhaseHP;  // 0x1240 (0x1240)
	double FleePhase Probability;  // 0x1248 (0x1248)
	struct AActor* Flee Target;  // 0x1250 (0x1250)
	struct FVector Foot Offset;  // 0x1258 (0x1258)
	struct TArray<struct FDCGameplayEffectData> In Gameplay Effect Data Array;  // 0x1270 (0x1270)
	struct TArray<struct FActiveGameplayEffectHandle> BuffMoveSpeed;  // 0x1280 (0x1280)
	struct FVector Offset;  // 0x1290 (0x1290)
	struct FVector Original;  // 0x12A8 (0x12A8)
	struct FVector New;  // 0x12C0 (0x12C0)


	void OnSetAI(); // Function BP_GiantCentipede.BP_GiantCentipede_C.OnSetAI
	void ReceiveTick(float DeltaSeconds); // Function BP_GiantCentipede.BP_GiantCentipede_C.ReceiveTick
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GiantCentipede.BP_GiantCentipede_C.GameplayTagUpdated
	void RandomizePosition(); // Function BP_GiantCentipede.BP_GiantCentipede_C.RandomizePosition
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_GiantCentipede.BP_GiantCentipede_C.OnFMsgGASAttributeNotifyBlueprint
	void ReceiveBeginPlay(); // Function BP_GiantCentipede.BP_GiantCentipede_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GiantCentipede(int32_t EntryPoint); // Function BP_GiantCentipede.BP_GiantCentipede_C.ExecuteUbergraph_BP_GiantCentipede
}; 
 
 


