#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.EventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9
struct FEventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.ExecuteUbergraph_GA_SkeletonChampion_Combo2
struct FExecuteUbergraph_GA_SkeletonChampion_Combo2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x188 (0x188)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x238 (0x238)
	char pad_744_1 : 7;  // 0x2E8 (0x2E8)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2E8 (0x2E8)
	char pad_745[7];  // 0x2E9 (0x2E9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2F0 (0x2F0)
	struct ADCCharacterBase* CallFunc_Set_Combo_Attack_Target_Enemy;  // 0x2F8 (0x2F8)
	struct TArray<struct ADCCharacterBase*> CallFunc_Set_Combo_Attack_TargetArray;  // 0x300 (0x300)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_Set_Combo_Attack_Combo_Triggered : 1;  // 0x310 (0x310)


}; 
 
 // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 