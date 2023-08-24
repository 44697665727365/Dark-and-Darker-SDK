#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63
struct FEventReceived_E40F5943497DCAF72B3B2CBB58BE2A63
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare
struct FExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_2;  // 0x20 (0x20)
	int32_t Temp_int_Variable;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_3;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_Event_bWasCancelled : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x70 (0x70)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x78 (0x78)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x130 (0x130)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x138 (0x138)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x150 (0x150)
	float CallFunc_BreakRotator_Roll;  // 0x168 (0x168)
	float CallFunc_BreakRotator_Pitch;  // 0x16C (0x16C)
	float CallFunc_BreakRotator_Yaw;  // 0x170 (0x170)
	char pad_372[4];  // 0x174 (0x174)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x178 (0x178)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_4;  // 0x180 (0x180)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x198 (0x198)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x1B0 (0x1B0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x1B8 (0x1B8)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x1D0 (0x1D0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x1E8 (0x1E8)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x200 (0x200)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x218 (0x218)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x238 (0x238)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x250 (0x250)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x258 (0x258)
	struct ABP_LavaMonster_Common_C* K2Node_DynamicCast_AsBP_Lava_Monster_Common;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct FVector CallFunc_GetForwardVector_ReturnValue_3;  // 0x280 (0x280)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x298 (0x298)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x2B1 (0x2B1)
	char pad_690[6];  // 0x2B2 (0x2B2)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x2B8 (0x2B8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_3;  // 0x2C0 (0x2C0)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2D8 (0x2D8)
	char pad_732[4];  // 0x2DC (0x2DC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x2E0 (0x2E0)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x300 (0x300)
	char pad_769[3];  // 0x301 (0x301)
	struct FGameplayTag Temp_struct_Variable;  // 0x304 (0x304)
	char pad_780_1 : 7;  // 0x30C (0x30C)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x30C (0x30C)
	char pad_781[3];  // 0x30D (0x30D)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x310 (0x310)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x3C0 (0x3C0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x3D8 (0x3D8)
	struct FVector CallFunc_GetForwardVector_ReturnValue_4;  // 0x3F0 (0x3F0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x408 (0x408)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x410 (0x410)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_4;  // 0x4C0 (0x4C0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_4;  // 0x4D8 (0x4D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x4F0 (0x4F0)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	char pad_1304_1 : 7;  // 0x518 (0x518)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2 : 1;  // 0x518 (0x518)
	char pad_1305_1 : 7;  // 0x519 (0x519)
	bool CallFunc_SpawnAoe_bSuccessfully_2 : 1;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	char pad_1306[6];  // 0x51A (0x51A)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue_2;  // 0x520 (0x520)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x528 (0x528)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x530 (0x530)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x538 (0x538)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0x53C (0x53C)


}; 
 
 // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 