#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.EventReceived_B21BD62548561364FE7B6899C3B7D333
struct FEventReceived_B21BD62548561364FE7B6899C3B7D333
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.ExecuteUbergraph_GA_SkeletonChampion_Combo1
struct FExecuteUbergraph_GA_SkeletonChampion_Combo1
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
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x240 (0x240)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2F0 (0x2F0)
	char pad_753[7];  // 0x2F1 (0x2F1)
	struct ADCCharacterBase* CallFunc_Set_Combo_Attack_Target_Enemy;  // 0x2F8 (0x2F8)
	struct TArray<struct ADCCharacterBase*> CallFunc_Set_Combo_Attack_TargetArray;  // 0x300 (0x300)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_Set_Combo_Attack_Combo_Triggered : 1;  // 0x310 (0x310)


}; 
 
 // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_Combo1.GA_SkeletonChampion_Combo1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 