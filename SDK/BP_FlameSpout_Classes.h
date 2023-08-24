#pragma once 
#include <BP_FlameSpout_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FlameSpout.BP_FlameSpout_C
// Size: 0x5D9(Inherited: 0x554)
struct ABP_FlameSpout_C : ABP_TrapBase_StaticMesh_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* HitBox;  // 0x560 (0x560)
	double ActivateTime;  // 0x568 (0x568)
	double DeactivateTime;  // 0x570 (0x570)
	struct FVector CollisionPosition;  // 0x578 (0x578)
	struct FVector CollisionSize;  // 0x590 (0x590)
	char pad_1448_1 : 7;  // 0x5A8 (0x5A8)
	bool IsRandomActiveTime : 1;  // 0x5A8 (0x5A8)
	char pad_1449_1 : 7;  // 0x5A9 (0x5A9)
	bool IsRandomDectiveTime : 1;  // 0x5A9 (0x5A9)
	char pad_1450[6];  // 0x5AA (0x5AA)
	double MinRandomDeactiveTime;  // 0x5B0 (0x5B0)
	double MinRandomActiveTime;  // 0x5B8 (0x5B8)
	double MaxRandomActiveTime;  // 0x5C0 (0x5C0)
	double MaxRandomDeactiveTime;  // 0x5C8 (0x5C8)
	double DelayTime;  // 0x5D0 (0x5D0)
	char pad_1496_1 : 7;  // 0x5D8 (0x5D8)
	bool OnInfinityActive : 1;  // 0x5D8 (0x5D8)


	void GetDeactivateTime(double& Result); // Function BP_FlameSpout.BP_FlameSpout_C.GetDeactivateTime
	void GetActivateTime(double& Result); // Function BP_FlameSpout.BP_FlameSpout_C.GetActivateTime
	void OnTrapDeactivate(bool& Result); // Function BP_FlameSpout.BP_FlameSpout_C.OnTrapDeactivate
	void OnTrapActivate(bool& Result); // Function BP_FlameSpout.BP_FlameSpout_C.OnTrapActivate
	void ReceiveBeginPlay(); // Function BP_FlameSpout.BP_FlameSpout_C.ReceiveBeginPlay
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_FlameSpout.BP_FlameSpout_C.InteractSucceed
	void ReceivePreInitializeComponents(); // Function BP_FlameSpout.BP_FlameSpout_C.ReceivePreInitializeComponents
	void EventMsgSound(struct FMsgSoundEvent InMsg); // Function BP_FlameSpout.BP_FlameSpout_C.EventMsgSound
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_FlameSpout.BP_FlameSpout_C.GameplayTagUpdated
	void Activate(); // Function BP_FlameSpout.BP_FlameSpout_C.Activate
	void ExecuteUbergraph_BP_FlameSpout(int32_t EntryPoint); // Function BP_FlameSpout.BP_FlameSpout_C.ExecuteUbergraph_BP_FlameSpout
}; 
 
 


