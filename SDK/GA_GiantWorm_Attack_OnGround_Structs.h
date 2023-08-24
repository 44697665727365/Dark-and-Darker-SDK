#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.EventReceived_9C69B6A941B21289EA62809451A3D8FF
struct FEventReceived_9C69B6A941B21289EA62809451A3D8FF
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ExecuteUbergraph_GA_GiantWorm_Attack_OnGround
struct FExecuteUbergraph_GA_GiantWorm_Attack_OnGround
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t Temp_int_Array_Index_Variable;  // 0x24 (0x24)
	struct FGameplayEventData Temp_struct_Variable;  // 0x28 (0x28)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xD8 (0xD8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x198 (0x198)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x1A8 (0x1A8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1B0 (0x1B0)
	char pad_433[7];  // 0x1B1 (0x1B1)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1B8 (0x1B8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x278 (0x278)
	char pad_633[3];  // 0x279 (0x279)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x27C (0x27C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x280 (0x280)
	char pad_644[4];  // 0x284 (0x284)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x291 (0x291)
	char pad_658[2];  // 0x292 (0x292)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x294 (0x294)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x298 (0x298)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x2A0 (0x2A0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x2A8 (0x2A8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x358 (0x358)


}; 
 
 // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 