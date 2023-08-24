#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer
struct FExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct AActor* K2Node_CustomEvent_Source;  // 0x38 (0x38)
	struct FGameplayEffectSpecHandle K2Node_CustomEvent_SpecHandle;  // 0x40 (0x40)
	struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveHandle;  // 0x50 (0x50)
	struct FActiveGameplayEffectHandle Temp_struct_Variable;  // 0x58 (0x58)
	struct FGameplayEffectSpecHandle Temp_struct_Variable_2;  // 0x60 (0x60)
	struct FGameplayTagContainer CallFunc_GetGrantedTag_ReturnValue;  // 0x70 (0x70)
	struct AActor* Temp_object_Variable;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	int32_t Temp_int_Array_Index_Variable;  // 0x9C (0x9C)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xA0 (0xA0)
	char pad_161[3];  // 0xA1 (0xA1)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xA4 (0xA4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xB0 (0xB0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x160 (0x160)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x170 (0x170)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x260 (0x260)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x268 (0x268)
	struct AActor* Temp_object_Variable_2;  // 0x280 (0x280)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x288 (0x288)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	double CallFunc_RandomFloatInRange_ReturnValue_3;  // 0x2A0 (0x2A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2A8 (0x2A8)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x2B0 (0x2B0)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct TArray<struct UBP_DCHitBox_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x2C8 (0x2C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2D8 (0x2D8)
	struct UBP_DCHitBox_C* CallFunc_Array_Get_Item;  // 0x2E0 (0x2E0)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x2E8 (0x2E8)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x2F0 (0x2F0)
	char pad_753_1 : 7;  // 0x2F1 (0x2F1)
	bool CallFunc_Get_BB_Target_Actor_Result : 1;  // 0x2F1 (0x2F1)
	char pad_754[6];  // 0x2F2 (0x2F2)
	struct ADCCharacterBase* CallFunc_Get_BB_Target_Actor_DCCharacterBase;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x308 (0x308)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x3E0 (0x3E0)
	char pad_996_1 : 7;  // 0x3E4 (0x3E4)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3E4 (0x3E4)
	char pad_997_1 : 7;  // 0x3E5 (0x3E5)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x3E5 (0x3E5)
	char pad_998[2];  // 0x3E6 (0x3E6)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x3E8 (0x3E8)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x3F8 (0x3F8)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_2;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x410 (0x410)
	char pad_1041[7];  // 0x411 (0x411)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x418 (0x418)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x428 (0x428)
	double CallFunc_BreakVector_X;  // 0x440 (0x440)
	double CallFunc_BreakVector_Y;  // 0x448 (0x448)
	double CallFunc_BreakVector_Z;  // 0x450 (0x450)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array_2;  // 0x458 (0x458)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x468 (0x468)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x470 (0x470)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x490 (0x490)
	char pad_1192_1 : 7;  // 0x4A8 (0x4A8)
	bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue : 1;  // 0x4A8 (0x4A8)
	char pad_1193[7];  // 0x4A9 (0x4A9)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x4B0 (0x4B0)
	float CallFunc_BreakRotator_Roll;  // 0x4C8 (0x4C8)
	float CallFunc_BreakRotator_Pitch;  // 0x4CC (0x4CC)
	float CallFunc_BreakRotator_Yaw;  // 0x4D0 (0x4D0)
	char pad_1236[4];  // 0x4D4 (0x4D4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x4D8 (0x4D8)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x4E0 (0x4E0)
	struct UAbilityAsync_WaitGameplayEffectApplied* CallFunc_WaitGameplayEffectAppliedToActor_ReturnValue;  // 0x4E8 (0x4E8)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x4F0 (0x4F0)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x4F8 (0x4F8)
	char pad_1273[7];  // 0x4F9 (0x4F9)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x500 (0x500)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x508 (0x508)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x520 (0x520)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x588 (0x588)
	char pad_1417[7];  // 0x589 (0x589)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x590 (0x590)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x598 (0x598)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x5A0 (0x5A0)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x5A8 (0x5A8)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x5AC (0x5AC)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x5B0 (0x5B0)


}; 
 
 // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnSuccess_48A59F624177C1EAB8E96499AAA37DE7
struct FOnSuccess_48A59F624177C1EAB8E96499AAA37DE7
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnApplied_CF5CCFE740FA854749CD529B24F66BBF
struct FOnApplied_CF5CCFE740FA854749CD529B24F66BBF
{
	struct AActor* Source;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x18 (0x18)


}; 
 
 