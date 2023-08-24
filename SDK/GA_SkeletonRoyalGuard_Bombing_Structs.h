#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.EventReceived_6AB16E6E4F035D73025811A8F542C6D3
struct FEventReceived_6AB16E6E4F035D73025811A8F542C6D3
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing
struct FExecuteUbergraph_GA_SkeletonRoyalGuard_Bombing
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x10 (0x10)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x18 (0x18)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x30 (0x30)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x38 (0x38)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool K2Node_Event_bWasCancelled : 1;  // 0x111 (0x111)
	char pad_274[2];  // 0x112 (0x112)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x114 (0x114)
	char pad_292[4];  // 0x124 (0x124)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x128 (0x128)
	struct FGameplayEventData Temp_struct_Variable;  // 0x130 (0x130)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard_2;  // 0x1E0 (0x1E0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x1F0 (0x1F0)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x200 (0x200)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x210 (0x210)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x2C0 (0x2C0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x2C8 (0x2C8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_3;  // 0x378 (0x378)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x428 (0x428)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x438 (0x438)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard_3;  // 0x448 (0x448)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x450 (0x450)
	char pad_1105[7];  // 0x451 (0x451)
	struct ABP_SkeletonWarlord_BonePrison_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord_Bone_Prison;  // 0x458 (0x458)
	char pad_1120_1 : 7;  // 0x460 (0x460)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x460 (0x460)
	char pad_1121[3];  // 0x461 (0x461)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x464 (0x464)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x468 (0x468)
	char pad_1132[4];  // 0x46C (0x46C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x470 (0x470)
	int32_t CallFunc_Max_ReturnValue;  // 0x520 (0x520)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x524 (0x524)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x528 (0x528)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x530 (0x530)
	char pad_1332[12];  // 0x534 (0x534)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x540 (0x540)
	struct FVector CallFunc_BreakTransform_Location;  // 0x5A0 (0x5A0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x5B8 (0x5B8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x5D0 (0x5D0)
	char pad_1512_1 : 7;  // 0x5E8 (0x5E8)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x5E8 (0x5E8)
	char pad_1513[7];  // 0x5E9 (0x5E9)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x5F0 (0x5F0)


}; 
 
 // Function GA_SkeletonRoyalGuard_Bombing.GA_SkeletonRoyalGuard_Bombing_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 