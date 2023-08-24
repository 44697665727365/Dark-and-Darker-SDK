#pragma once 
#include <BP_HuntingTrapProp_0001_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C
// Size: 0x5B8(Inherited: 0x554)
struct ABP_HuntingTrapProp_0001_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct USkeletalMeshComponent* Pin;  // 0x560 (0x560)
	struct UChainComponent* chain;  // 0x568 (0x568)
	struct UBoxComponent* Box;  // 0x570 (0x570)
	struct ADCCharacterBase* TrappedCharacter;  // 0x578 (0x578)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool bDisarmed : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	double ConfineRange;  // 0x588 (0x588)
	double ChainSoundPlayMinVelocity;  // 0x590 (0x590)
	struct FGameplayTagContainer ImmueTags;  // 0x598 (0x598)


	void OnRep_bDisarmed(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnRep_bDisarmed
	void OnRep_TrappedCharacter(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnRep_TrappedCharacter
	void InitializeChain(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InitializeChain
	bool IsTargetReachesMaxRange(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.IsTargetReachesMaxRange
	void Deactivate Trap(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.Deactivate Trap
	void Removed_19BFACE841FF14F023B948A3DED73C7C(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.Removed_19BFACE841FF14F023B948A3DED73C7C
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.GameplayTagUpdated
	void BndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.ReceiveBeginPlay
	void OnChainSound(struct FVector Velocity); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnChainSound
	void OnCharacterMovementUpdated(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnCharacterMovementUpdated
	void ExecuteUbergraph_BP_HuntingTrapProp_0001(int32_t EntryPoint); // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.ExecuteUbergraph_BP_HuntingTrapProp_0001
}; 
 
 


