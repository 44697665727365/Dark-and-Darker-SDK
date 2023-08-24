#pragma once 
#include <BP_Wisp_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Wisp.BP_Wisp_C
// Size: 0x11E4(Inherited: 0x11B8)
struct ABP_Wisp_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UNiagaraComponent* FXS_Ambient;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11C8 (0x11C8)
	int32_t Blind Duration;  // 0x11D0 (0x11D0)
	struct FGameplayTag IdleSoundTag;  // 0x11D4 (0x11D4)
	struct FGameplayTag DeathSoundTag;  // 0x11DC (0x11DC)


	void ReceiveBeginPlay(); // Function BP_Wisp.BP_Wisp_C.ReceiveBeginPlay
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function BP_Wisp.BP_Wisp_C.OnFMsgGASActorDieNotifyBlueprint
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Wisp.BP_Wisp_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Wisp(int32_t EntryPoint); // Function BP_Wisp.BP_Wisp_C.ExecuteUbergraph_BP_Wisp
}; 
 
 


