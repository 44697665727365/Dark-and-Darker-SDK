#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA
struct FEventReceived_D0F3E8C442BCE9CD937A26A35A4808DA
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.ExecuteUbergraph_GA_SkeletonWarlord_Shield
struct FExecuteUbergraph_GA_SkeletonWarlord_Shield
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x20 (0x20)
	int32_t CallFunc_Max_ReturnValue;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x194 (0x194)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x198 (0x198)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	int32_t Temp_int_Array_Index_Variable;  // 0x1A0 (0x1A0)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x1A4 (0x1A4)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_Event_bWasCancelled : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x280 (0x280)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x288 (0x288)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x360 (0x360)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x410 (0x410)


}; 
 
 