#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.EventReceived_A2E4D0E04B4E99E632FB14B6CDD9C0F7
struct FEventReceived_A2E4D0E04B4E99E632FB14B6CDD9C0F7
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.ExecuteUbergraph_GA_LavaMonster_SpawnLava
struct FExecuteUbergraph_GA_LavaMonster_SpawnLava
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag Temp_struct_Variable;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x20 (0x20)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_2;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x50 (0x50)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_Event_bWasCancelled : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x70 (0x70)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x128 (0x128)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x130 (0x130)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x148 (0x148)
	float CallFunc_BreakRotator_Roll;  // 0x160 (0x160)
	float CallFunc_BreakRotator_Pitch;  // 0x164 (0x164)
	float CallFunc_BreakRotator_Yaw;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x170 (0x170)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x220 (0x220)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x228 (0x228)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x230 (0x230)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x248 (0x248)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x260 (0x260)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[3];  // 0x279 (0x279)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x27C (0x27C)
	char pad_644[4];  // 0x284 (0x284)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x288 (0x288)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x338 (0x338)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x350 (0x350)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x368 (0x368)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x380 (0x380)
	struct ABP_LavaMonster_Common_C* K2Node_DynamicCast_AsBP_Lava_Monster_Common;  // 0x388 (0x388)
	char pad_912_1 : 7;  // 0x390 (0x390)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x390 (0x390)
	char pad_913[7];  // 0x391 (0x391)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x398 (0x398)
	char pad_944_1 : 7;  // 0x3B0 (0x3B0)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x3B0 (0x3B0)
	char pad_945_1 : 7;  // 0x3B1 (0x3B1)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x3B1 (0x3B1)
	char pad_946[6];  // 0x3B2 (0x3B2)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x3B8 (0x3B8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x3C0 (0x3C0)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x3D8 (0x3D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x3DC (0x3DC)
	char pad_1004[4];  // 0x3EC (0x3EC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x3F0 (0x3F0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x408 (0x408)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x410 (0x410)


}; 
 
 // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 