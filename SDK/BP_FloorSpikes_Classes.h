#pragma once 
#include <BP_FloorSpikes_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FloorSpikes.BP_FloorSpikes_C
// Size: 0x5B0(Inherited: 0x554)
struct ABP_FloorSpikes_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* HitBox;  // 0x560 (0x560)
	struct UBoxComponent* ActiveBox;  // 0x568 (0x568)
	struct UArrowComponent* Arrow;  // 0x570 (0x570)
	double ActiveDurationTime;  // 0x578 (0x578)
	double ActiveCoolTime;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool bCanActive : 1;  // 0x588 (0x588)
	char pad_1417_1 : 7;  // 0x589 (0x589)
	bool bShouldRetrigger : 1;  // 0x589 (0x589)
	char pad_1418[6];  // 0x58A (0x58A)
	struct FGameplayTagContainer ImmuneTags;  // 0x590 (0x590)


	void SetAbilityTriggerTag(struct FGameplayTag New Trigger Tag, bool& Result); // Function BP_FloorSpikes.BP_FloorSpikes_C.SetAbilityTriggerTag
	void OnMessageReceived_6C1E7AB946EFC9996E4677A2C7074582(struct UMsgBaseNode* ProxyObject); // Function BP_FloorSpikes.BP_FloorSpikes_C.OnMessageReceived_6C1E7AB946EFC9996E4677A2C7074582
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_FloorSpikes.BP_FloorSpikes_C.InteractSucceed
	void ReceivePreInitializeComponents(); // Function BP_FloorSpikes.BP_FloorSpikes_C.ReceivePreInitializeComponents
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_FloorSpikes.BP_FloorSpikes_C.GameplayTagUpdated
	void BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FloorSpikes.BP_FloorSpikes_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_FloorSpikes.BP_FloorSpikes_C.EventFMsgSoundEvent
	void ExecuteUbergraph_BP_FloorSpikes(int32_t EntryPoint); // Function BP_FloorSpikes.BP_FloorSpikes_C.ExecuteUbergraph_BP_FloorSpikes
}; 
 
 


