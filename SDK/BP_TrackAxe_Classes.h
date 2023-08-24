#pragma once 
#include <BP_TrackAxe_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TrackAxe.BP_TrackAxe_C
// Size: 0x581(Inherited: 0x554)
struct ABP_TrackAxe_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* Box;  // 0x560 (0x560)
	struct UArrowComponent* Arrow;  // 0x568 (0x568)
	double ActiveCoolTime;  // 0x570 (0x570)
	double ActiveDelay;  // 0x578 (0x578)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool IsTrapRemove : 1;  // 0x580 (0x580)


	void SetAbilityTriggerTag(struct FGameplayTag New Trigger Tag, bool& Result); // Function BP_TrackAxe.BP_TrackAxe_C.SetAbilityTriggerTag
	void OnMessageReceived_8813A0C944F113C8C2169F887C962471(struct UMsgBaseNode* ProxyObject); // Function BP_TrackAxe.BP_TrackAxe_C.OnMessageReceived_8813A0C944F113C8C2169F887C962471
	void ReceiveBeginPlay(); // Function BP_TrackAxe.BP_TrackAxe_C.ReceiveBeginPlay
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TrackAxe.BP_TrackAxe_C.InteractSucceed
	void ReceivePreInitializeComponents(); // Function BP_TrackAxe.BP_TrackAxe_C.ReceivePreInitializeComponents
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_TrackAxe.BP_TrackAxe_C.GameplayTagUpdated
	void ActiveEvent(); // Function BP_TrackAxe.BP_TrackAxe_C.ActiveEvent
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_TrackAxe.BP_TrackAxe_C.EventFMsgSoundEvent
	void ExecuteUbergraph_BP_TrackAxe(int32_t EntryPoint); // Function BP_TrackAxe.BP_TrackAxe_C.ExecuteUbergraph_BP_TrackAxe
}; 
 
 


