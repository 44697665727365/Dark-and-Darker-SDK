#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9
struct FOnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9
{
	enum class EMovementMode PrevMovementMode;  // 0x0 (0x0)
	enum class EMovementMode NewMovementMode;  // 0x1 (0x1)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.ExecuteUbergraph_GA_DoubleJump
struct FExecuteUbergraph_GA_DoubleJump
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x168 (0x168)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x218 (0x218)
	enum class EMovementMode K2Node_CustomEvent_PrevMovementMode_2;  // 0x228 (0x228)
	enum class EMovementMode K2Node_CustomEvent_NewMovementMode_2;  // 0x229 (0x229)
	char pad_554[2];  // 0x22A (0x22A)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x22C (0x22C)
	enum class EMovementMode Temp_byte_Variable;  // 0x23C (0x23C)
	enum class EMovementMode Temp_byte_Variable_2;  // 0x23D (0x23D)
	char pad_574[2];  // 0x23E (0x23E)
	struct UDCAT_WaitMovementModeChange* CallFunc_WaitMovementModeChange_ReturnValue;  // 0x240 (0x240)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x248 (0x248)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x258 (0x258)
	enum class EMovementMode K2Node_CustomEvent_PrevMovementMode;  // 0x259 (0x259)
	enum class EMovementMode K2Node_CustomEvent_NewMovementMode;  // 0x25A (0x25A)
	enum class EMovementMode Temp_byte_Variable_3;  // 0x25B (0x25B)
	enum class EMovementMode Temp_byte_Variable_4;  // 0x25C (0x25C)
	char pad_605[3];  // 0x25D (0x25D)
	struct UDCAT_WaitMovementModeChange* CallFunc_WaitMovementModeChange_ReturnValue_2;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x270 (0x270)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x328 (0x328)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x330 (0x330)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x338 (0x338)
	char pad_825_1 : 7;  // 0x339 (0x339)
	bool K2Node_Event_bWasCancelled : 1;  // 0x339 (0x339)
	char pad_826[2];  // 0x33A (0x33A)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x33C (0x33C)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x340 (0x340)
	char pad_833[7];  // 0x341 (0x341)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x348 (0x348)
	struct ACharacter* K2Node_DynamicCast_As____2;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x358 (0x358)
	char pad_857[3];  // 0x359 (0x359)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x35C (0x35C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x36C (0x36C)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x370 (0x370)
	char pad_881[7];  // 0x371 (0x371)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x378 (0x378)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x380 (0x380)
	char pad_904_1 : 7;  // 0x388 (0x388)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x388 (0x388)
	char pad_905[7];  // 0x389 (0x389)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x390 (0x390)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;  // 0x398 (0x398)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3B8 (0x3B8)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2;  // 0x3D0 (0x3D0)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct FDesignDataGameplayEffect CallFunc_GetDesignDataGameplayEffect_ReturnValue;  // 0x3F8 (0x3F8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x620 (0x620)
	struct ACharacter* K2Node_DynamicCast_As____3;  // 0x628 (0x628)
	char pad_1584_1 : 7;  // 0x630 (0x630)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x630 (0x630)
	char pad_1585[3];  // 0x631 (0x631)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x634 (0x634)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x638 (0x638)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x640 (0x640)
	struct UCharacterMovementComponent* K2Node_DynamicCast_As_____________;  // 0x648 (0x648)
	char pad_1616_1 : 7;  // 0x650 (0x650)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x650 (0x650)
	char pad_1617[7];  // 0x651 (0x651)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x658 (0x658)
	char pad_1632_1 : 7;  // 0x660 (0x660)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x660 (0x660)
	char pad_1633[3];  // 0x661 (0x661)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x664 (0x664)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x668 (0x668)
	double CallFunc_SetJumpZVelocity_JumpZVelocity_ImplicitCast;  // 0x670 (0x670)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x678 (0x678)
	float CallFunc_WaitDelay_Time_ImplicitCast;  // 0x680 (0x680)
	char pad_1668[4];  // 0x684 (0x684)
	double CallFunc_Multiply_DoubleDouble_B_ImplicitCast;  // 0x688 (0x688)
	double CallFunc_SetJumpZVelocity_JumpZVelocity_ImplicitCast_2;  // 0x690 (0x690)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast;  // 0x698 (0x698)
	float K2Node_VariableSet_DoubleJumpZVelocity_ImplicitCast;  // 0x6A0 (0x6A0)
	char pad_1700[4];  // 0x6A4 (0x6A4)
	double CallFunc_SetJumpZVelocity_JumpZVelocity_ImplicitCast_3;  // 0x6A8 (0x6A8)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.EventReceived_110D27D243C1B5BD2C64868F4B1A027E
struct FEventReceived_110D27D243C1B5BD2C64868F4B1A027E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D
struct FOnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D
{
	enum class EMovementMode PrevMovementMode;  // 0x0 (0x0)
	enum class EMovementMode NewMovementMode;  // 0x1 (0x1)


}; 
 
 // Function GA_DoubleJump.GA_DoubleJump_C.SetJumpZVelocity
struct FSetJumpZVelocity
{
	double JumpZVelocity;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x20 (0x20)
	struct UCharacterMovementComponent* K2Node_DynamicCast_As_____________;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	float K2Node_VariableSet_JumpZVelocity_ImplicitCast;  // 0x34 (0x34)


}; 
 
 