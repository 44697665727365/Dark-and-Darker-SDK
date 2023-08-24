#pragma once 
#include <GA_DoubleJump_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DoubleJump.GA_DoubleJump_C
// Size: 0x598(Inherited: 0x558)
struct UGA_DoubleJump_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag EventTag;  // 0x560 (0x560)
	struct UAbilityTask_WaitDelay* WaitDelayTask;  // 0x568 (0x568)
	struct FPrimaryAssetId DoubleJumpLandEffectId;  // 0x570 (0x570)
	float OriginJumpZVelocity;  // 0x580 (0x580)
	struct FPrimaryAssetId DoubleJumpZVelocityConst;  // 0x584 (0x584)
	float DoubleJumpZVelocity;  // 0x594 (0x594)


	void SetJumpZVelocity(double JumpZVelocity); // Function GA_DoubleJump.GA_DoubleJump_C.SetJumpZVelocity
	void EventReceived_110D27D243C1B5BD2C64868F4B1A027E(struct FGameplayEventData Payload); // Function GA_DoubleJump.GA_DoubleJump_C.EventReceived_110D27D243C1B5BD2C64868F4B1A027E
	void OnFinish_6C2FDA30484B4E7D75CD42B563495496(); // Function GA_DoubleJump.GA_DoubleJump_C.OnFinish_6C2FDA30484B4E7D75CD42B563495496
	void OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode); // Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D
	void OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode); // Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DoubleJump.GA_DoubleJump_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DoubleJump.GA_DoubleJump_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DoubleJump(int32_t EntryPoint); // Function GA_DoubleJump.GA_DoubleJump_C.ExecuteUbergraph_GA_DoubleJump
}; 
 
 


