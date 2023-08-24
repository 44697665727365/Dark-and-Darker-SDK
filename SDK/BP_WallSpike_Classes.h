#pragma once 
#include <BP_WallSpike_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_WallSpike.BP_WallSpike_C
// Size: 0x5A8(Inherited: 0x554)
struct ABP_WallSpike_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* Box;  // 0x560 (0x560)
	struct UBoxComponent* ActiveBox;  // 0x568 (0x568)
	struct UArrowComponent* Arrow;  // 0x570 (0x570)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool IsActivate : 1;  // 0x578 (0x578)
	char pad_1401[7];  // 0x579 (0x579)
	struct TArray<struct FString> In Gameplay Effect Id Array;  // 0x580 (0x580)
	double ActiveDamagePreDelayTime;  // 0x590 (0x590)
	double ActiveDurationTime;  // 0x598 (0x598)
	double ActiveCoolTime;  // 0x5A0 (0x5A0)


	void SetAbilityTriggerTag(struct FGameplayTag New Tag, bool& Result); // Function BP_WallSpike.BP_WallSpike_C.SetAbilityTriggerTag
	void OnMessageReceived_55C0747248939B02403D89BE669E525B(struct UMsgBaseNode* ProxyObject); // Function BP_WallSpike.BP_WallSpike_C.OnMessageReceived_55C0747248939B02403D89BE669E525B
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_WallSpike.BP_WallSpike_C.InteractSucceed
	void ReceivePreInitializeComponents(); // Function BP_WallSpike.BP_WallSpike_C.ReceivePreInitializeComponents
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_WallSpike.BP_WallSpike_C.GameplayTagUpdated
	void BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_WallSpike.BP_WallSpike_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_WallSpike.BP_WallSpike_C.EventFMsgSoundEvent
	void ExecuteUbergraph_BP_WallSpike(int32_t EntryPoint); // Function BP_WallSpike.BP_WallSpike_C.ExecuteUbergraph_BP_WallSpike
}; 
 
 


