#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActor
struct FGetBBTargetActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* Return Value;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check
struct FUnable To Move Check
{
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x70 (0x70)
	struct FVector CallFunc_BreakTransform_Location;  // 0x78 (0x78)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x90 (0x90)
	struct FVector CallFunc_BreakTransform_Scale;  // 0xA8 (0xA8)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0xC0 (0xC0)
	double CallFunc_Vector_Distance2D_ReturnValue;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xD8 (0xD8)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0xE0 (0xE0)
	struct FVector CallFunc_BreakTransform_Location_2;  // 0x140 (0x140)
	struct FRotator CallFunc_BreakTransform_Rotation_2;  // 0x158 (0x158)
	struct FVector CallFunc_BreakTransform_Scale_2;  // 0x170 (0x170)


}; 
 
 // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToCharacterBase
struct FGetBBTargetActorToCharacterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check Timer
struct FUnable To Move Check Timer
{
	struct FTimerHandle TimerHandle;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x10 (0x10)
	struct FVector CallFunc_BreakTransform_Location;  // 0x70 (0x70)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x88 (0x88)
	struct FVector CallFunc_BreakTransform_Scale;  // 0xA0 (0xA0)
	struct FTimerHandle CallFunc_K2_SetTimer_ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToMonsterBase
struct FGetBBTargetActorToMonsterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBaseWithOptions;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 