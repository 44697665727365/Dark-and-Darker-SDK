#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.EventReceived_8D07916F4ACECE94208255B751735166
struct FEventReceived_8D07916F4ACECE94208255B751735166
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ExecuteUbergraph_GA_CaveTroll_Attack_PunchDown
struct FExecuteUbergraph_GA_CaveTroll_Attack_PunchDown
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18C (0x18C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x190 (0x190)
	char pad_404_1 : 7;  // 0x194 (0x194)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x194 (0x194)
	char pad_405[3];  // 0x195 (0x195)
	int32_t Temp_int_Array_Index_Variable;  // 0x198 (0x198)
	char pad_412[4];  // 0x19C (0x19C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x260 (0x260)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x270 (0x270)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x278 (0x278)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x280 (0x280)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x330 (0x330)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x338 (0x338)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x3E8 (0x3E8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x498 (0x498)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4A8 (0x4A8)
	char pad_1196_1 : 7;  // 0x4AC (0x4AC)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4AC (0x4AC)
	char pad_1197[3];  // 0x4AD (0x4AD)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x4B0 (0x4B0)
	int32_t CallFunc_Max_ReturnValue;  // 0x4B4 (0x4B4)


}; 
 
 // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 