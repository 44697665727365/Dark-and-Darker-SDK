#pragma once 
#include <BP_DeathBeetle_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DeathBeetle_Common.BP_DeathBeetle_Common_C
// Size: 0x11E0(Inherited: 0x11B8)
struct ABP_DeathBeetle_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11C8 (0x11C8)
	struct FGameplayTag IdleSoundTag;  // 0x11D0 (0x11D0)
	struct FGameplayTag DeathSoundTag;  // 0x11D8 (0x11D8)


	void Added_B850C33A4DF2D5977E1ACFB2F351E777(); // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.Added_B850C33A4DF2D5977E1ACFB2F351E777
	void OnSetAI(); // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnSetAI
	void ReceiveBeginPlay(); // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ReceiveBeginPlay
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnFMsgGASActorDieNotifyBlueprint
	void ExecuteUbergraph_BP_DeathBeetle_Common(int32_t EntryPoint); // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ExecuteUbergraph_BP_DeathBeetle_Common
}; 
 
 


