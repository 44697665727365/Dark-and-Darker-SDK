#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.EventReceived_9B98491D4F6285BB63D3F2B5127EFF0E
struct FEventReceived_9B98491D4F6285BB63D3F2B5127EFF0E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ExecuteUbergraph_GA_CaveTroll_Combo_Slap
struct FExecuteUbergraph_GA_CaveTroll_Combo_Slap
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[3];  // 0x179 (0x179)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x17C (0x17C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x180 (0x180)
	char pad_388_1 : 7;  // 0x184 (0x184)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x184 (0x184)
	char pad_389[3];  // 0x185 (0x185)
	int32_t Temp_int_Array_Index_Variable;  // 0x188 (0x188)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18C (0x18C)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool K2Node_Event_bWasCancelled : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x1A0 (0x1A0)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x1A8 (0x1A8)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1B0 (0x1B0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x260 (0x260)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x318 (0x318)
	char pad_793[7];  // 0x319 (0x319)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x320 (0x320)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x330 (0x330)
	char pad_820[4];  // 0x334 (0x334)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x338 (0x338)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x348 (0x348)
	int32_t CallFunc_Max_ReturnValue;  // 0x3F8 (0x3F8)
	char pad_1020[4];  // 0x3FC (0x3FC)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x400 (0x400)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x410 (0x410)


}; 
 
 // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 