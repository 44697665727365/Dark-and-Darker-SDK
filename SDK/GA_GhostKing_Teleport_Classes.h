#pragma once 
#include <GA_GhostKing_Teleport_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_Teleport.GA_GhostKing_Teleport_C
// Size: 0x5F8(Inherited: 0x580)
struct UGA_GhostKing_Teleport_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FTimerHandle Move Time TimerHandle;  // 0x588 (0x588)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x590 (0x590)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x598 (0x598)
	struct UAbilityTask_WaitGameplayTagAdded* Async Task_1;  // 0x5A0 (0x5A0)
	struct FVector TargetLocation;  // 0x5A8 (0x5A8)
	struct FVector CapsuleBottomLotaion;  // 0x5C0 (0x5C0)
	float Aoe Spawn Distance From Self;  // 0x5D8 (0x5D8)
	char pad_1500[4];  // 0x5DC (0x5DC)
	struct FVector Random Angle Vector;  // 0x5E0 (0x5E0)


	void EventReceived_A1697A204058999C82AF6E9CBAC06768(struct FGameplayEventData Payload); // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.EventReceived_A1697A204058999C82AF6E9CBAC06768
	void Move Timer(); // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.Move Timer
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_Teleport(int32_t EntryPoint); // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.ExecuteUbergraph_GA_GhostKing_Teleport
}; 
 
 


