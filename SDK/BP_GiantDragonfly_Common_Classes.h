#pragma once 
#include <BP_GiantDragonfly_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C
// Size: 0x1220(Inherited: 0x11B8)
struct ABP_GiantDragonfly_Common_C : ABP_DCMonsterBaseWithOptions_C
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
	struct FGameplayTag IdleSoundTag;  // 0x1210 (0x1210)
	struct FGameplayTag DeathSoundTag;  // 0x1218 (0x1218)


	void ReceiveBeginPlay(); // Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.ReceiveBeginPlay
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.OnFMsgGASActorDieNotifyBlueprint
	void ExecuteUbergraph_BP_GiantDragonfly_Common(int32_t EntryPoint); // Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.ExecuteUbergraph_BP_GiantDragonfly_Common
}; 
 
 


