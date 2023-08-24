#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.Find Target Position
struct FFind Target Position
{
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x0 (0x0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x18 (0x18)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x30 (0x30)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x48 (0x48)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x60 (0x60)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x78 (0x78)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x90 (0x90)
	double CallFunc_Vector_Distance_ReturnValue;  // 0xA8 (0xA8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xB0 (0xB0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xC8 (0xC8)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0xD0 (0xD0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	double CallFunc_BreakVector_X;  // 0xF0 (0xF0)
	double CallFunc_BreakVector_Y;  // 0xF8 (0xF8)
	double CallFunc_BreakVector_Z;  // 0x100 (0x100)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x108 (0x108)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x110 (0x110)


}; 
 
 // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.ExecuteUbergraph_GA_DeathSkull_Attack
struct FExecuteUbergraph_GA_DeathSkull_Attack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x6 (0x6)
	char pad_7[1];  // 0x7 (0x7)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x18 (0x18)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	double CallFunc_BreakVector_X;  // 0x48 (0x48)
	double CallFunc_BreakVector_Y;  // 0x50 (0x50)
	double CallFunc_BreakVector_Z;  // 0x58 (0x58)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x60 (0x60)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_Event_bWasCancelled : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x80 (0x80)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x98 (0x98)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB0 (0xB0)
	struct ABP_DeathSkull_Common_C* K2Node_DynamicCast_AsBP_Death_Skull_Common;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0xC4 (0xC4)
	char pad_204[4];  // 0xCC (0xCC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xD0 (0xD0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xD8 (0xD8)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0xE0 (0xE0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0xE8 (0xE8)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x1C0 (0x1C0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x1C8 (0x1C8)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1D0 (0x1D0)
	char pad_465[7];  // 0x1D1 (0x1D1)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x1D8 (0x1D8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x1E8 (0x1E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1F0 (0x1F0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x200 (0x200)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x210 (0x210)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x218 (0x218)
	double CallFunc_Ease_ReturnValue;  // 0x220 (0x220)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x228 (0x228)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x230 (0x230)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	double CallFunc_FClamp_ReturnValue;  // 0x248 (0x248)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x250 (0x250)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_3;  // 0x258 (0x258)
	float CallFunc_GetMaxSpeed_ReturnValue;  // 0x260 (0x260)
	char pad_612[4];  // 0x264 (0x264)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x268 (0x268)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x280 (0x280)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x298 (0x298)
	double CallFunc_VSize_ReturnValue;  // 0x2B0 (0x2B0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x2B8 (0x2B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x2C0 (0x2C0)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x2C8 (0x2C8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x2E0 (0x2E0)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_4;  // 0x2F8 (0x2F8)
	double CallFunc_BreakVector_X_2;  // 0x300 (0x300)
	double CallFunc_BreakVector_Y_2;  // 0x308 (0x308)
	double CallFunc_BreakVector_Z_2;  // 0x310 (0x310)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x318 (0x318)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x3C8 (0x3C8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x3E0 (0x3E0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x3F8 (0x3F8)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x408 (0x408)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_5;  // 0x420 (0x420)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x428 (0x428)
	char pad_1065[7];  // 0x429 (0x429)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3;  // 0x430 (0x430)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x438 (0x438)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x440 (0x440)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x450 (0x450)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x458 (0x458)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0x45C (0x45C)
	float CallFunc_AddMovementInput_ScaleValue_ImplicitCast;  // 0x460 (0x460)
	char pad_1124[4];  // 0x464 (0x464)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast;  // 0x468 (0x468)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x470 (0x470)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;  // 0x474 (0x474)


}; 
 
 // Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 